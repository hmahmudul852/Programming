#include <bits/stdc++.h>
#include<windows.h>
#include <glut.h>
#define PI 3.1416
using namespace std;

//translate variables
double fighter_ammo;

//other variables
bool fired;
int life, ammo;
int radius_ammo = 4;
int radius_earth = 6;

bool game_over_screen;
int final_score;
int enemy_destroyed;

static float ENEMY_RADIUS = 2.0;
static float BULLET_RADIUS = 4.0;
static float ORBIT_RADIUS = 100;

static float spin = 0.0;
static float spin_rate = 0.05;
static float total_orbit = 12;

vector <float> orbit_radius_list;
vector <float> spin_angle_list;
vector <float> spin_rate_list;



float distanceBetweenTwoPoint(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


pair<float,float> polarToCartesian(float radius, float theta){
    theta = (theta/180.0) * ((double)PI); // Degree To Radian
    float x = radius * cos(theta);
    float y = radius * sin(theta);
    return pair <float, float>(x, y);
}


bool isColliding(float bullet_center_x, float bullet_center_y, float bullet_radius,
                 float enemy_center_x, float enemy_center_y, float enemy_radius){
    float d = distanceBetweenTwoPoint(bullet_center_x, bullet_center_y, enemy_center_x, enemy_center_y);//first = x, second = y

    if(bullet_radius+enemy_radius > d) return true;
    else return false; //if not collided
}


//for drawing circle
void drawCircle(float radius_x, float radius_y){
	glBegin(GL_POLYGON);
		for(int i = 0; i < 100; i++){
			float angle = 2 * PI * i / 100;
			glVertex3f(cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}
	glEnd();
}


string toStringC(int a){
    stringstream ss;
    ss << a;
    return ss.str();
}


//for text writing
void renderBitmapString(float x, float y, void *font,const char *str){
    const char *c;
    glRasterPos2f(x, y);
    for (c=str; *c != '\0'; c++){
        glutBitmapCharacter(font, *c);
    }
}


void collisionCheckerForAllEnemy(float bullet_x, float bullet_y){
    for(int  i=0; i<total_orbit; i++){
        pair <float, float> enemy_in_cartesian = polarToCartesian(orbit_radius_list[i], spin_angle_list[i]);
        if(isColliding(bullet_x, bullet_y, BULLET_RADIUS,
                       enemy_in_cartesian.first, enemy_in_cartesian.second, ENEMY_RADIUS)
           ){
            enemy_destroyed++;
            fired = 0;
            final_score += (i+1)*5;
            orbit_radius_list[i] = 1000; //disappear
        }
    }
}


float generateRandomSpinRate(){
    //the smaller, the faster
    float timeline = 700;
    float retval = float(rand()%50);
    return retval/timeline;
}


void spinDisplayLeft(){
   spin = spin + spin_rate;
   if (spin > 360.0) spin = spin - 360.0;

    //Update Spin Angle List
    for(int i=0; i<total_orbit; i++){
        spin_angle_list[i] = spin_angle_list[i] + spin_rate_list[i];
        if(spin_angle_list[i] > 360.0) spin_angle_list[i] = spin_angle_list[i] - 360.0;
    }
    glutPostRedisplay();
}


void drawOrbit(float radius){
    glPushMatrix();
        glBegin(GL_LINE_LOOP);
            for(int i = 0; i < 100; i++)
            {
                float angle = 2 * PI * i / 100;
                glVertex3f (cos(angle) * radius, sin(angle) * radius, 0);
            }
        glEnd();
    glPopMatrix();
}


void drawAllOrbit(){
    for(int i=0; i<total_orbit; i++){
        drawOrbit(orbit_radius_list[i]);
    }
}


void drawEnemies(float orbit_radius, float enemy_radius, float spin_index ){
    glPushMatrix();
        glRotatef(spin_angle_list[spin_index], 0.0, 0.0, 1.0);
        glTranslated(orbit_radius, 0, 0);
        drawCircle(enemy_radius, enemy_radius);
    glPopMatrix();
}


void drawAllEnemies(){
    for(int i=0; i<total_orbit; i++){
        drawEnemies(orbit_radius_list[i], ENEMY_RADIUS, i);
    }
}


void newGame(){
    life = 3;
    ammo = 15;
    fighter_ammo = 25;

    final_score = 0;

    game_over_screen = 0;

    srand (time(NULL));

    //For Orbit Radius
    orbit_radius_list.resize(total_orbit);
    int r = 10;
    for(int i=0; i<total_orbit; i++){
        orbit_radius_list[i] = r;
        r += 10;
    }

    //For Spin Angle
    spin_angle_list.resize(total_orbit);
    for(int i=0; i<total_orbit; i++) spin_angle_list[i] = 180.0;

    //For Spin Rate
    spin_rate_list.resize(total_orbit);
    for(int i=0; i<total_orbit; i++) spin_rate_list[i] = generateRandomSpinRate();
}


int aliveEnemy(){
    int cnt = 0;
    for(int orbit=0; orbit<orbit_radius_list.size(); orbit++){
        if(orbit != 1000) cnt++;
    }
    return cnt;
}

pair<int, int> positionOfAmmo(){
    return {-200+(fighter_ammo+radius_ammo), 0};
}


bool touchEarth(int pos_ammo_x, int pos_ammo_y){
    return pos_ammo_x+radius_ammo >= 0-radius_earth && pos_ammo_x-radius_ammo <= radius_earth &&
            pos_ammo_y+radius_ammo >= 0-radius_earth && pos_ammo_y-radius_ammo <= radius_earth;
}


void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    if(enemy_destroyed==12){ //game completed
        glColor3d(0, 1, 0);
        renderBitmapString(-25, 0, GLUT_BITMAP_TIMES_ROMAN_24, "You Win!");

        renderBitmapString(-17, -15, GLUT_BITMAP_TIMES_ROMAN_24, "score: ");
        renderBitmapString(27, -15, GLUT_BITMAP_TIMES_ROMAN_24, toStringC(final_score).data());

        renderBitmapString(-40, -30, GLUT_BITMAP_TIMES_ROMAN_24, "Press r to restart");
    }
    else if(game_over_screen){ //game over screen
        glColor3d(1, 0, 0);
        renderBitmapString(-25, 0, GLUT_BITMAP_TIMES_ROMAN_24, "Game Over");

        renderBitmapString(-17, -15, GLUT_BITMAP_TIMES_ROMAN_24, "score: ");
        renderBitmapString(27, -15, GLUT_BITMAP_TIMES_ROMAN_24, toStringC(final_score).data());

        renderBitmapString(-40, -30, GLUT_BITMAP_TIMES_ROMAN_24, "Press r to restart");
    }
    else{ //game play screen
        //score board
        glPushMatrix();
            glTranslated(0, 150, 0);
            glColor3d(1, 1, 1);

            renderBitmapString(-150, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, "Life: ");
            renderBitmapString(-110, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, toStringC(life).data());

            renderBitmapString(-10, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, "score: ");
            renderBitmapString(35, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, toStringC(final_score).data());

            renderBitmapString(120, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, "ammo: ");
            renderBitmapString(170, 10.0, GLUT_BITMAP_TIMES_ROMAN_24, toStringC(ammo).data());

            //border
            glPushMatrix();
                glTranslated(-160, 0, 0);
                glBegin(GL_QUADS);
                    glVertex2d(0, 0);
                    glVertex2d(0, 2);
                    glVertex2d(400, 2);
                    glVertex2d(400, 0);
                glEnd();
            glPopMatrix();
        glPopMatrix();

        //fighter
        glPushMatrix();
            glTranslated(-190, 0, 0);
            glRotated(-90, 0, 0, 1);

            //fighter ammo
            glPushMatrix();
                glTranslated(0, fighter_ammo, 0);
                glColor3d(1, 0, 0);
                drawCircle(radius_ammo, radius_ammo);
            glPopMatrix();

            //fighter ship
            glPushMatrix();
                glBegin(GL_TRIANGLES);
                    glColor3d(1, 1, 0); glVertex2d(-25, 0);
                    glColor3d(1, 0, 0); glVertex2d(0, 25);
                    glColor3d(1, 1, 0); glVertex2d(25, 0);
                glEnd();
            glPopMatrix();
        glPopMatrix();

        glPushMatrix();
            //world
            glPushMatrix();
                glColor3d(0, 1, 0);
                drawCircle(radius_earth, radius_earth);
            glPopMatrix();

            //orbit
            glPushMatrix();
                glColor3d(1, 1, 1);
                drawAllOrbit();
            glPopMatrix();

            //enemy
            glPushMatrix();
                glColor3d(1, 0, 1);
                drawAllEnemies();
            glPopMatrix();
        glPopMatrix();
    }

    glFlush();
}


void animate(){
    spinDisplayLeft();

    if(fired){
        fighter_ammo += 1;
        Sleep(10);

        pair<int, int> pos = positionOfAmmo();

        if(touchEarth(pos.first, pos.second)){
            life--;
            fired = 0;
        }

        collisionCheckerForAllEnemy(pos.first, pos.second);
    }
    else{
        fighter_ammo = 25;
        fired = 0;
    }

    if(life == 0 || (ammo == 0 && !fired) || aliveEnemy() == 0){
        game_over_screen = 1;
    }

    glutPostRedisplay();
}


void keyboardListener(unsigned char key, int x, int y){
    if(key == 32 && !fired && !game_over_screen){
        ammo--;
        fired = 1;
    }
    else if(key == 'r' || key == 'R')
        newGame();
    else if(key == 'q' || key == 'Q')
        exit(0);
}


void init(){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-200,200,-200,200,-200,200);

    newGame();
}


int main(){
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(300, 200);
    glutCreateWindow("Save the World");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardListener);
    glutIdleFunc(animate);
    glutMainLoop();
    return 0;
}
