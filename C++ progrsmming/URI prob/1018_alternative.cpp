#include <iostream>
#include<cstdio>
int input;

using namespace std;

void count(int note){

    int note_count=0;
    note_count=input/note;
    printf("%d nota(s) de R$ %d,00\n", note_count, note);
    input=input%note;
}

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     int note[]={100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &input);
    printf("%d\n",  input);

    for(int i=0; i<7; i++)
        count(note[i]);

    return 0;
}
