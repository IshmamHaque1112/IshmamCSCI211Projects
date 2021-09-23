#include <iostream>
#include <cstdlib>
using namespace std;
void print(int a[],int &b){
 cout<<"Solution "<<b<<endl;   
 cout<<" " <<a[1]<<a[2]<< " "<<endl;
 cout<<a[0]<<a[3]<<a[4]<<a[5]<<endl;
 cout<<" " <<a[6]<<a[7]<< " "<<endl;
}
bool ok(int a[],int b){
 int helper[8][5]={{-1},{0,-1},{1,-1},{0,1,2,-1},{1,2,3,-1},{2,4,-1},{0,3,4,-1},{3,4,5,6,-1}};
 for(int i=0;i<b;i++){
  if(a[i]==a[b]) return false;
 }
 for(int i=0;i<5;i++){
  if(helper[b][i]==-1) return true;
  if(abs(a[b]-a[helper[b][i]])==1) return false;
 }
 return true;
}
void add(int a[],int b[],int c,int &d){
 if(c==8){
  d++;
  print(a,d);
  return; 
 }  
 for(int i=0; i<8; i++){
  a[c]=b[i];
  if(ok(a,c)){
   add(a,b,c+1,d); 
  }    
 }
}
int main(){
 cout<<"Welcome to eight crosses"<<endl;
 int solution=0;   
 int c=0;
 int cross[8];
 int set[8]={1,2,3,4,5,6,7,8};
 add(cross,set,c,solution);

return 0;
}


