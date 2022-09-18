#include<bits/stdc++.h>


using namespace std;
int main(){
    /*int n;
    cin>>n;
     int ans=0;
    while(n!=0){
        int digit=n%10;
        if((ans> INT_MAX/10) || (ans<INT_MIN/10)){
            cout<< 0;
        }
       ans=(ans*10)+digit;
       n=n/10;
        
    }
    
    cout<<ans;*/
   /* int n;
    cin>>n;
    int m=n;
    int mask=0;
    //edge case
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<<ans;*/
   /* int n;
    cin>>n;
    for(int i=0;i<=30;i++){
        int ans= pow(2,i);
        if(ans==n){
             cout<<true;
        }
        else{
            cout<<false;
        }
    }*/
   /* int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans==n){
          cout<<true;
        }
        if(ans< INT_MAX/2)
        ans=ans*2;
    }
    cout<<false;*/
    
}