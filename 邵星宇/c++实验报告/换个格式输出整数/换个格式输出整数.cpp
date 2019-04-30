#include<iostream>
using namespace std;
int main()
{
 int B=0;
 int S=0;
 int num;
 int i;
 cin >> num;			
 while (num - 100 >= 0) {	
  num = num - 100;
  B++;
 }
 while (num - 10 >= 0) {
  num = num - 10;
  S++;
 }
 for (i = 0; i < B; i++) {
  cout << "B";
 }
 for (i = 0; i < S; i++) {
  cout << "S";
 }
 for (i =1; i <=num; i++) {
  cout << i ;
 }
    return 0;
}
