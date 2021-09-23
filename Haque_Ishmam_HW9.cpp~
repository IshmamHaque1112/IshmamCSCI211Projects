#include <iostream>
#include <cstdlib>
using namespace std;
bool ok(int a[],int c){
 int mp[3][3]={{0,2,1},{0,2,1},{1,2,0}};
 int wp[3][3]={{2,1,0},{0,1,2},{2,0,1}};
 for(int i=0;i<c;i++){
  if(a[i]==a[c]) return false;
 }
 for(int i=0;i<c;i++){
  if((mp[c][a[i]]<mp[c][a[c]])&&(wp[a[i]][c]<wp[a[i]][i])) return false;
  if((wp[a[c]][i]<wp[a[c]][c])&&(mp[i][a[c]]<mp[i][a[i]])) return false;
 }
 return true;
}
void backtrack(int &a){
 a--;
 if(a<0) exit(0);
}
void printsolutions(int a[],int &b){
 cout<<"Solution "<<b<<endl;
 for(int i=0;i<3;i++){
  cout<<"Wife of Husband "<<i<<" :  "<<a[i]<<endl;
 }
 b++;
}
int main(){
 cout<<"Let's find the perfect match!"<<endl;
 int solution=1;
 int wives[3]={0};
 int c=0;
 while(c>=0){
  c++;
  if(c==3){
   printsolutions(wives,solution);
   backtrack(c);
  }
  else{
   wives[c]=-1;
  }
  while(c>=0){
   wives[c]++;
   if(wives[c]==3) backtrack(c);
   else if(ok(wives,c)) break;
  }
 }
 return 0;
}

