#include <iostream>
#include <algorithm>
using namespace std;
const int rows=5,cols=6;
int cost(int i,int j){ 
 static int weight[rows][cols]={{3,4,1,2,8,6},{6,1,8,2,7,4},{5,9,3,9,9,5},{8,4,1,3,2,6},{3,7,2,8,6,4}};
 static int m[rows][cols]={0};
 if(j==0){           
  return weight[i][j];
 }
 if(m[i][j]!= 0){    
  return m[i][j];
 }
 int left;
 if(m[i][j-1]!=0){
  left=m[i][j-1];
 }
 else{
  m[i][j-1]=cost(i,j-1);
  left=m[i][j-1];
 } 
 int upleft=cost((i-1+rows)%rows,j-1);
 int downleft=cost((i+1+rows)%rows,j-1);
 int mincost=min(min(upleft,left),downleft);
 m[i][j]=mincost+weight[i][j];
 int answer=m[i][j]; 
 return answer;                      
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
