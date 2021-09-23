#include <iostream>
#include <cmath>
using namespace std;
class Rat{
private:
 int n;
 int d;
public:
 Rat(){
  n=0;
  d=1;
 }
 Rat(int i,int j){
  n=i;
  d=j;
 }
 Rat(int i){
  n=i;
  d=1;
 }
 int getN(){
  return n;
 }
 int getD(){
  return d;
 }
 void setN(int i){
  n=i;
 }
 void setD(int i){
  d=i;
 }
 Rat operator+(Rat r){
  Rat t;
  t.n=n*r.d+d*r.n;
  t.d=d*r.d;
  return t;
 }
 Rat operator-(Rat r){
  Rat t;
  t.n=n*r.d-d*r.n;
  t.d=d*r.d;
  return t;
 } 
 Rat operator*(Rat r){
  Rat t;
  t.n=n*r.n;
  t.d=d*r.d;
  return t;
 } 
 Rat operator/(Rat r){
  Rat t;
  t.n=n*r.d;
  t.d=d*r.n;
  return t;
 } 
 void reduced(){
  int gcfact=1;
  for(int i=1;i<=abs(d);i++){
   if((n%i==0)&&(d%i==0)) gcfact=i;
  }
  n=n/gcfact;
  d=d/gcfact;
 }
 friend ostream& operator<<(ostream& os,Rat r);
 friend istream& operator>>(istream& is,Rat &r);
};
ostream& operator<<(ostream& os,Rat r){
 r.reduced();
 if((abs(r.n)<abs(r.d))&&(r.n!=0)){
  os<<r.n<<"/"<<r.d<<endl;
  return os;
 }
 if(r.n%r.d==0){
  os<<r.n/r.d<<endl;
  return os;
 }
 if(r.n==0){
  os<<r.n<<endl;
 }
 if((abs(r.n)>abs(r.d))&&(r.n%r.d!=0)){
  os<<r.n/r.d<<" "<<abs(r.n%r.d)<<"/"<<abs(r.d)<<endl;
  return os;
 }
 return os;
}
istream& operator>>(istream& is,Rat& r){
 is>>r.n>>r.d;
 r.reduced();
 return is;
}
int main(){
  Rat rational1(3, 20), rational2(6, 10);
  cout << "rational1: " << rational1 << endl;
  cout << "rational2: " << rational2 << endl;
  cout << "rational1 + rational2: " << rational1 + rational2 << endl;
  cout << "rational1 - rational2: " << rational1 - rational2 << endl;
  cout << "rational1 * rational2: " << rational1 * rational2 << endl;
  cout << "rational1 / rational2: " << rational1 / rational2 << endl;
  cout << endl;
  return 0;
}  


