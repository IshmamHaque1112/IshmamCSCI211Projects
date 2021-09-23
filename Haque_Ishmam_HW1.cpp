#include <iostream>
using namespace std;

int main(){

    int a,b;
    int i=0;
    int c;
    int d;
    for(int i=0;0<=i;i++){
	a=i*i;
  	b=(i*i)%100;
  	if((a>10) && ((b/10)%2!=0) && (b%2!=0)){
   	    c=i*i;
        d=i;
   	    break;
 	}
    }
    if(c>0) cout<<c<<" is the first perfect square with two last odd numbers with root "<<d<<endl;
    else cout<<"There is no such answer"<<endl;

    return 0;
}
