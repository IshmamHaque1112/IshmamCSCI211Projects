#include <iostream>
#include <cstdlib>
using namespace std;
bool equivalent(int a[],int b[],int n){
   int h=n*2;
   int c[h];
   int y[n];
   for(int i=0;i<n;i++) c[i]=a[i];
   for(int i=0;i<n;i++) c[i+n]=b[i];
   for(int i=0;i<n;i++){
    for(int j=n;j<h;j++){
     if(c[i]==c[j]) y[i]=abs(i-j);
    }
   }
   int k=y[0]; 
   for(int i=1;i<n;i++){
    if((y[i]!=k) && (abs(y[i]-k)==n)) return true;
   }
   return false; 
}
int main(){
    cout << boolalpha; 
    int n;
    cout<<"Input the number of elements you want in each array"<<endl;
    cin>>n;
    if(n<2){ 
      cout<<"We can't use this";
      return 0;
    }
    else if(n>=2){
     int array1[n];
     int array2[n];
     cout<<"First array input"<<endl;
     for(int i=0;i<n;i++) cin>>array1[i];
     cout<<"Second array input"<<endl;
     for(int i=0;i<n;i++) cin>>array2[i];
     cout<<"Array 1"<<endl;
     for(int i=0;i<n;i++) cout<<array1[i]<<endl;
     cout<<"Array 2"<<endl;
     for(int i=0;i<n;i++) cout<<array2[i]<<endl;
     cout<<"Are there duplicates?"<<endl;
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
       if((array1[i]==array1[j])&&(i!=j)){
        cout<<"Sorry. No duplicates allowed."<<endl;
        return 0;
       }
       if((array2[i]==array2[j])&&(i!=j)){
        cout<<"Sorry. No duplicates allowed."<<endl;
        return 0;
       }
      }
     }    
     cout<<"Are they shift equivalent? "<<equivalent(array1,array2,n)<<endl;
    }
    return 0;
}
