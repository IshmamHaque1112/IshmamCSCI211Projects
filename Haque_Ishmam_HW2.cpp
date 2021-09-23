#include <iostream>
using namespace std;
bool boost(int arrayone[],int arraytwo[],int n,int d){
     for(int i=0;i<n;i++){
      if(arrayone[i]!=arraytwo[(i+d)%n]){
       return false; 
      }
     }
     return true;
}
bool equivalent(int a[],int b[],int n){
     for(int d=0;d<n;d++){
      if(boost(a,b,n,d)){
       return true;
      }
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
     cout<<"Are they shift equivalent? "<<equivalent(array1,array2,n)<<endl;
    }
    return 0;
}
