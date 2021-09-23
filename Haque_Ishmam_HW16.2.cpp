#include <iostream>
#include <algorithm>
using namespace std;
const int rows=5,cols=6;
int cost(int i,int j){ 
 static int weight[rows][cols]={{3,4,1,2,8,6},{6,1,8,2,7,4},{5,9,3,9,9,5},{8,4,1,3,2,6},{3,7,2,8,6,4}};
 static int m[rows][cols]={0};
 if(m[i][j]!=0) return m[i][j];
 for(int a=0;a<rows;a++){ 
  m[a][0]=weight[a][0];
 }
 for(int b=1;b<cols;b++){                
  for(int a=0;a<rows;a++){
   int left=m[a][b-1];      
   int upleft=m[(a-1+rows)%rows][b-1];    
   int downleft=m[(a+1+rows)%rows][b-1];
   int mincost=min(min(upleft,left),downleft);                                                         
   m[a][b]=mincost+weight[a][b];    
  }
 }
 return m[i][j];     
}
int main(){
 int ex[rows];
 for(int i=0;i<rows;i++){
  ex[i]=cost(i,cols-1);
  cout<<ex[i]<<endl;
 }
 int min=ex[0];
 for(int i=0;i<rows;i++){
  if(ex[i]<min) min=ex[i];
 }
 cout<<"The length of the shortest path is "<<min<<endl;;
 return 0;
}
