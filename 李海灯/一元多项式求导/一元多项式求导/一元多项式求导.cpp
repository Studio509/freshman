
#include <iostream>

using namespace std; 

int main()

{ 
	int a,b;

    int x = 1; 

while(cin >> a >> b )
{ 
	if(b == 0) 

	   break;

	if(!x) 

	   cout << " ";

	else 

       x = 0;

cout << a*b << " " <<b-1; 
} 

   if(x) 

   cout << "0 0";

return 0;
}
