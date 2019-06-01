#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
   char str1[80];
   char str2[80];
   char str[80];
   int sum=0;
   bool exist=false;
   bool exist1=false;

   cin>>str1>>str2;

   for(int i=0;i<strlen(str1);i++)
   {
       for(int j=0;j<strlen(str2);j++)
       {
           if(str1[i]==str2[j])  {exist=true;break;}
       }
           if(!exist)
           {
               for(int k=0;k<strlen(str);k++)
                if(toupper(str1[i])==toupper(str[k])) exist1=true;
            if(!exist1)
              {
               str[sum]=toupper(str1[i]);
               sum++;
              }
           }
           exist=false;
           exist1=false;
   }

   for(int i=0;i<sum;i++)
    cout<<str[i];
   return 0;
}