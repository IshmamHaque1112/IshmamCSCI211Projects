#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void backtrack(int a[],int &b){
 b--;
 if(b<0) exit(0);
}
void printsolutions(int a[],int &b,int c){
 cout<<"Solution "<<b<<endl;
 b++;
 for(int i=0;i<c;i++){
  for(int j=0;j<c;j++){
   if(a[i]==j) cout<<"1";
   else cout<<"0";
  }
  cout<<endl;
 }
 for(int i=0;i<c;i++){
  for(int j=0;j<c;j++){
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
void queengame(int number,int finalnumber){
 int* board=new int[number];
 int c=0;
 board[0]=0;
 int solution=0;
 while(c>=0){
  c++;
  if(c==number){
   solution++;
   c--;
   if(c<0){
    cout<<" Problem for Queen "<<number<<" has solutions "<<solution<<endl;
    delete[] board;
    if(number==finalnumber) exit(0);
    if(finalnumber==0) return;
    else queengame(number+1,finalnumber);
   }
  }
  else{
   board[c]=-1;
  }
  while(c>=0){
   board[c]++;
   if(board[c]==number){ 
    c--;
    if(c<0){
     cout<<" Problem for Queen "<<number<<" has solutions "<<solution<<endl;
     delete[] board;
     if(number==finalnumber) exit(0);
     if(finalnumber==0) return;
     else queengame(number+1,finalnumber);
    }
   }
   else if(compatible(board,c)) break;
  }
 }
 cout<<"Problem for Queen "<<number<<" has solutions "<<solution<<endl;
 delete[] board;
 if(number==finalnumber) exit(0);
 if(finalnumber==0) return;
 else queengame(number+1,finalnumber);
}
int main(){
 cout<<"Enter the number of queens to iterate to"<<endl;
 int input;
 string input2;
 cin>>input;
 cout<<"Do you want this to be recursive or not? Y or N"<<endl;
 cin>>input2;
 if(input2=="N") queengame(input,0);
 else if(input2=="Y") queengame(1,input);
 return 0;
}
