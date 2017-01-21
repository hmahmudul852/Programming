#include<cstdio>
#include<string>
#include<stack>

using namespace std;

int solution(string &S)
{
    stack<char>keep;

    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='(' || S[i]=='{' || S[i]=='[')
            keep.push(S[i]);
        else
        {
            if(keep.empty())
                return 0;

            char chknext=keep.top();
            keep.pop();

            if(S[i]==')' && chknext!='(')
                return 0;
            else if(S[i]=='}' && chknext!='{')
                return 0;
            else if(S[i]==']' && chknext!='[')
                return 0;
        }
    }

    if(keep.empty())
        return 1;
    else
        return 0;
}

int main()
{
    printf("%d",solution("{[()()]}")==1);
    printf("%d",solution("{[(){}()]}")==1);
    printf("%d",solution("}{[(){}()]}")==0);
    return 0;
}

