#include <iostream>
using namespace std;
#define LEN 100
void str_trans(char c[])
{
    int i;
    for(i=0;c[i];i++)
        if(c[i]>='A'&&c[i]<='Z')
            c[i]=(c[i]-'A')+'a';      
} 
int main() 
{
    char s[LEN];
    gets(s);    
    str_trans(s);
    puts(s);    
    return 0;
}
