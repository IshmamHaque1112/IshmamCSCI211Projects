#include <iostream>
#include <cmath>
using namespace std;
int main(){
 cout<<"Welcome to 8 queens"<<endl;
 int board[8];
 int c=0;
 board[0]=0;
 int solution=1;
next_column: 
 c++;
 if(c==8) goto print;
 board[c]=-1;
next_row: 
 board[c]++;
 if(board[c]==8) goto backtrack;
 for(int i=0;i<c;i++){
  if((board[i]==board[c])||(abs(board[c]-board[i])==c-i)) goto next_row;
 }
 goto next_column;
backtrack: 
 c--;
 if(c==-1) return 0;
 goto next_row;
print:
 cout<<"Solution:"<< solution<<endl;
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(board[i]==j) cout<<"1";
   else cout<<"0";
  }
  cout<<endl;
 }
 solution++;
 goto printsolutions;
printsolutions:
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(board[i]==j) cout<<"Row "<<i+1<<" has a queen on Column: "<<j+1<<endl;
  }
 }
 goto backtrack;
}
