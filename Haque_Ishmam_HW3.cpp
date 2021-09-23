#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int initialnumber1(int a[],int n){
 for(int i=0;i<n;i++){
  if(a[i]>0) return a[i];
 }
}
int initialnumber2(int a[],int n){
 for(int i=0;i<n;i++){
  if(a[i]>0) return i;
 }
}
void swap(double a[],char b[],int c){
 for(int i=0;i<c;i++){
  for(int j=0;j<c;j++){
   double temp1=a[i];
   char temp2=b[i];
   if(a[i]>a[j]){
      a[i]=a[j];
      b[i]=b[j];
      a[j]=temp1;
      b[j]=temp2;
      temp1=a[i];
      temp2=b[i];
   }
  }
 }
}
int main(){
 string resultalt;
 char winteam;
 int numofteams,numofteammembers,resultlength,initteamnumber,a;
 double winteamscore;
 int tracker[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 double scores[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int team_numbers[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 char alphabet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 cout<<"Input the results of the race ";
 cin>>resultalt;
 resultlength=resultalt.length();
 cout<<resultlength<<endl;
 char result[resultlength];
 for(int i=0;i<resultlength;i++){
  result[i]=resultalt[i];
 }
 cout<<result<<endl;
 for(int i=0;i<resultlength;i++){
  if((int(result[i])<65) || (int(result[i])>90)){
   cout<<"This race is invalid. Unqualified parties detected.";
   return 0;
  }
 }
 for(int i=0;i<resultlength;i++){
  tracker[int(result[i])-65]+=(i+1) ;
  team_numbers[int(result[i])-65]++;
 }
 for(int i=0;i<26;i++){
  if((tracker[i]<0)&&(team_numbers[i]>0)) team_numbers[i]=0;
  if((tracker[i]>0)&&(team_numbers[i]<0)) tracker[i]=0;
 }
 initteamnumber=initialnumber1(team_numbers,26);
 a=initialnumber2(team_numbers,26);
 for(int i=a+1;i<26;i++){
  if((team_numbers[i]!=initteamnumber)&&(tracker[i]>0)){
   cout<<"Unequal team numbers."<<endl;
   return 0;
  }
 }
 numofteams=0;
 for(int i=0;i<26;i++){
  if(team_numbers[i]>0) numofteams=numofteams+1;
 }
 numofteammembers=initteamnumber;
 for(int i=0;i<26;i++) scores[i]=tracker[i]/(numofteammembers*1.0);
 cout<<"There are "<<numofteams<<" teams"<<endl;
 cout<<"Each team has "<<numofteammembers<<" members"<<endl;
 for(int i=0;i<26;i++){
   if(team_numbers[i]>0){
    cout<<"Team "<<alphabet[i]<<" score is "<<scores[i]<<endl;
   }
 }
 swap(scores,alphabet,26);
 winteam=alphabet[numofteams-1];
 winteamscore=scores[numofteams-1];
 cout<<"Team "<<winteam<<" wins with a score "<<winteamscore<<endl;
 return 0;
 }
