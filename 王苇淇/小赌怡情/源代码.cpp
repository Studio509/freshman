#include<iostream>
using namespace std;
int main(){
    int T,k;
	int n1,b,t,n2;
    cin>>T>>k;
    for(int i=0;i<k;i++){
         cin>>n1>>b>>t>>n2;
        if(t > T)
            cout<<"Not enough tokens.  Total = "<<T<<"."<<endl;
        else
		{
            if((n1 > n2 && b==0) ||(n1 < n2 && b==1))
			{
                T += t;
                cout<<"Win "<<t<<"!  Total = "<<T<<"."<<endl;
            }
            else
			{
                T -=t;
                cout<<"Lose "<<t<<".  Total = "<<T<<"."<<endl;
            }
        }
        if(T == 0){
            cout<<"Game Over."<<endl;
            return 0;
        }
    }
    return 0;
}
