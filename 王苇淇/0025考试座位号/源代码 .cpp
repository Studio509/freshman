
#include<iostream>

using namespace std;

#include<string>

int main()

{

    int N,sjh[100],ksh[100],i;

    string zkzh[100];

    cin>>N;

    for(i=0;i<N;i++)

      cin>>zkzh[i]>>sjh[i]>>ksh[i];

    int m,shiji;

    cin>>m;

    for(i=1;i<=m;i++)

    {

        cin>>shiji;

        for(int j=0;j<N;j++)

        {

            if(shiji==sjh[j])

               cout<<zkzh[j]<<" "<<ksh[j]<<endl;

        }

    }

    return 0;

}
