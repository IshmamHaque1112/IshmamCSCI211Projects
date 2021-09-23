#include <iostream>
using namespace std;
int main(){
 int a;
 int b;
 int i;
 for(int i=0;0<=i;i++){
  a=i*i;
  b=(i*i)%100;  
  if((a>10) && ((b/10)%2!=0) && (b%2!=0)){
   cout<<i*i<<" is the first perfect square with two odd last digits with root "<<i<<endl;
   return 0;
  }
  else{
   cout<<"There is no such answer"<<endl;
   return 0;
  }
 }
 return 0;
}
