#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int i,j,length=word.length();
    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            char flag=word[i];
            int flagINT=(int)flag;
            char flag2=word[j];
            int flag2int=(int)flag2;
            char temp;
            if(flagINT>flag2int)
            {
                temp=word[i];
                word[i]=word[j];
                word[j]=temp;
            }
        }
    }
    cout<<word;
    return 0;
}
