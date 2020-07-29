#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin>>word;
    for(int i=0;i<word.length();i++)
    {
        char flag=word[i];
        int flag1=(int)flag;
        if(flag1>=65 && flag<=90)
        {
            char toLOW=word[i]+32;
            cout<<toLOW;
        }
        else if(flag1>=97 && flag<=122)
        {
            char toUP=word[i]-32;
            cout<<toUP;
        }
        else
            cout<<word[i];
    }
    return 0;
}
