#include <iostream>
using namespace std;
int main(){
 cout<<"Welcome to 8 queens."<<endl;
 int r=0, c=0;
 int board[8][8]={0};
 board[0][0]=1;
next_column:
 c++;
 if(c==8) goto print;
 r=-1;
next_row:
 r++;
 if(r==8) goto backtrack;
 for(int i=0;i<c;i++){
  if(board[r][i]==1) goto next_row;
 }
 for(int i=1;((r-i)>=0 &&(c-i)>=0);i++){
  if(board[r-i][c-i]==1) goto next_row;
 }
 for(int i=1;((r+i)<=8 &&(c-i)>=0);i++){
  if(board[r+i][c-i]==1) goto next_row;
 }
 board[r][c]=1;
 goto next_column;
backtrack:
 c--;
 if(c==-1) return 0;
 r=0;
 while(board[r][c]!=1){
  r++;
 }
 board[r][c]=0;
 goto next_row;
print:
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   cout<<board[i][j];
  }
  cout<<endl;
 }
 goto printsolutions;
printsolutions:
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(board[i][j]==1) cout<<"Row "<<i+1<<" has a queen on Column: "<<j+1<<endl;
  }
 }
 goto backtrack;
}
