#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool compatible(int a[],int b,int c){
 for(int i=0;i<b;i++){
  if((a[b]/c-a[i]/c)==abs(a[b]%c-a[i]%c)) return false;
 }
 return true;
}
void bishopgame(int number,int bishopnum){
 int* board=new int[bishopnum];
 int c=0;
 board[0]=0;
 int solution=0;
 while(c>=0){
  c++;
  if(c==bishopnum){
   solution++;
   c--;
  }
  else{
   board[c]=board[c-1];
  }
  while(c>=0){
   board[c]++;
   if(board[c]==number*number){ 
    c--;
   }
   else if(compatible(board,c,number)) break;
  }
 }
 delete []board;
 cout<<"Problem for Bishop "<<bishopnum<<" for board "<<number<<" has solutions "<<solution<<endl;
}
int main(){
 cout<<"Enter board size."<<endl;
 int input;
 cin>>input;
 cout<<"Enter number of bishops."<<endl;
 int input2;
 cin>>input2;
 bishopgame(input,input2);
 return 0;
}
