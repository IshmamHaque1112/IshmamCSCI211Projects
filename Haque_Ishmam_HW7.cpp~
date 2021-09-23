#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void backtrack(int a[],int &b){
 b--;
 if(b<0) exit(0);
}
void printsolutions(int a[],int &b){
 cout<<"Solution "<<b<<endl;
 b++;
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(a[i]==j) cout<<"1";
   else cout<<"0";
  }
  cout<<endl;
 }
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(a[i]==j) cout<<"Row "<<i+1<<" has a queen on Column: "<<j+1<<endl;
  }
 }
}
bool compatible(int a[],int b){
 for(int i=0;i<b;i++){
  if((a[i]==a[b])||(abs(a[b]-a[i])==(b-i))) return false;
 }
 return true;
}
int main(){
 int board[8];
 int c=0;
 board[0]=0;
 int solution=1;
 while(c<=8){
  c++;
  if(c==8){
   printsolutions(board,solution);
   backtrack(board,c);
  }
  else{
   board[c]=-1;
  }
  while(board[c]<=8){
   board[c]++;
   if(board[c]==8) backtrack(board,c);
   else if(compatible(board,c)) break;
  }
 }
return 0;
}
