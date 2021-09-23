#include <iostream>
using namespace std;
typedef double (newfunction)(double,int);
double power(double number,int exponent){
 double sum=1;
 if(exponent==0) return 1;
 if(exponent==1) return number;
 if(exponent<0) return 1/power(number,exponent*-1);
 else{
  for(int i=1;i<=exponent;i++){
   sum=sum*number;
  }
  return sum;
 }
}
double integrate(newfunction funct,int exponent, double beginning, double end) {
 double sum = 0; 
 double changerate=0.0001;
 for(double x=beginning+changerate/2;x<end;x+=changerate){
  sum += funct(x,exponent)* changerate;
 }  
 return sum;
}
int main(){
 int exponent;
 double beginning;
 double end;
 cout<<power(6.5,4)<<endl;
 cout<<integrate(power,2,1,5)<<endl;
 cout<<"Input your exponent for x, then beginning, then end: "<<endl;
 cin>>exponent;
 cin>>beginning;
 cin>>end;
 cout<<"The integration for x^"<<exponent<<" from "<<beginning<<" to "<<end<<" is "<<integrate(power,exponent,beginning,end)<<endl;
 return 0;
}

