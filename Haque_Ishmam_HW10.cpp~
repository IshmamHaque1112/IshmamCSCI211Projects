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
 typedef char box[5][7];
 box bb,wb,wq,bq,*board[8][8];
 for(int i=0;i<5;i++){
  for(int j=0;j<7;j++){
   wb[i][j]=' ';
   bb[i][j]=char(219);
   if((i==1)&&(j%2==1)){
    wq[i][j]=char(219);
    bq[i][j]=' ';
   }
   if(((i==2)||(i==3))&&(j!=0)&&(j!=6)){
    wq[i][j]=char(219);
    bq[i][j]=' ';
   }
   else{
    wq[i][j]=' ';
    bq[i][j]=char(219);
   }
  }
 }
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if((i+j)%2==0){
    board[i][j]=&wb;
   }
   else{
    board[i][j]=&bb;
   }
  }
 }
 cout<<' ';
 for(int i=0;i<7*8;i++){
  cout<<'_';
 }
 cout<<endl;
 for(int i=0;i<8;i++){
  if((a[i]+i)%2==0){
   board[i][a[i]]=&wq;
  }
  else{
   board[i][a[i]]=&bq;
  }
 }
 for(int i=0;i<8;i++){
  for(int k=0;k<5;k++){
   cout<<" "<<char(179);
   for(int j=0;j<8;j++){
    for(int l=0;l<7;l++){
     cout<<(*board[i][j])[k][l];
    }
   }
   cout<<char(179)<<endl;
 }
 cout<<" ";
 for(int i=0;i<7*8;i++)
  cout<<char(196);
 }
 cout<<endl;
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
