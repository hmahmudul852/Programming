#include<cstdio>
#include<string>
#include<stack>

using namespace std;

int solution(string &S)
{
    stack<char>keep;

    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='(')
            keep.push(S[i]);

        if(S[i]==')' && keep.top()=='(' && !keep.empty())
            keep.pop();
    }

    if(keep.empty())
        return 1;
    else
        return 0;
}

int main()
{
    printf("%d",solution("(()(())())")==1);
    printf("%d",solution("())")==0);
    printf("%d",solution("()()()()()")==1);
    return 0;
}

