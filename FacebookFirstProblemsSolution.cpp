#include <iostream>
#include <cstring>
using namespace std;
char alphabets[]=" abcdefghijklmnopqrstuvwxyz";
void allpossible(char *number, int index, int n);
int main()
{
    char number[50];
    cin>>number;
    allpossible(number, 0, strlen(number));
    return 0;
}
void allpossible(char *number, int index, int n)
{
    static char s[50]="";
    static int i=0;
    if(index==n)
    {
        cout<<s<<endl;
        return;
    }
    int numformed;
    numformed=number[index]-'0';
    if(numformed>0)
    {
        s[i++]=alphabets[numformed];
        s[i]='\0';
        allpossible(number, index+1, n);
        i--;
        if(n-index>1)
        {
            numformed=(number[index]-'0') * 10 + number[index+1]-'0';
            if(numformed<27)
            {
                s[i++]=alphabets[numformed];
                s[i]='\0';
                allpossible(number, index+2, n);
                i--;
            }
        }
    }
}
