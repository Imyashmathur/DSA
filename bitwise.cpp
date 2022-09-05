#include<iostream>
using namespace std;

int main(){
    /*int a = 4;
       int b = 6;
       cout<<" a&b " << (a&b)<<endl;
       cout<<" a|b " << (a|b)<<endl;
       cout<<" ~a " << ~a<<endl;
       cout<<" a^b " << (a^b)<<endl;

       cout<< (17>>1)<<endl;
       cout<< (17>>2)<<endl;
       cout<< (19<<1)<<endl;
       cout<< (21<<2)<<endl;*/
      /* int i=7;
       cout<<(++i)<<endl;
       cout<<(i++)<<endl;
       cout<<(i--)<<endl;
       cout<<(--i)<<endl;*/
       /*int n;
       cout<<"enter the value of n"<<endl;
       cin>>n;
       cout<<"printing count from 1 to n"<<endl;
       for(int i =1; i<=n; i++){
        cout<<i<<endl;*/
        
       
       /*int n;
       cout<<"enter the value of n"<<endl;
       cin>>n;
       cout<<"printing count from 1 to n"<<endl;
       int i=1;
       for(; ; ){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
       
        i++;
        
       }*/
       /*int n;
       for(int a = 0, b =1, c=2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<< a <<" "<< b <<" "<< c <<endl;
       }*/
       /*int n;
       cin>>n;
       int sum=0;
       for(int i=1; i<=n; i++){
        //sum=sum+i;
        sum+=i;
       }
       cout<<sum<<endl;*/
       /*int n=10;
       int a =0;
       int b=1;
       cout<<a<<" "<<b<<" ";
       for(int i=1;i<=n;i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
       }*/
      /* int n;
       cin>>n;
       bool isprime =1;
       for(int i=2;i<n;i++){
        if(n%i==0){
           // cout<<" not a prime no."<<endl;
            bool isprime=0;
            break;
        }
       
       }
       if (isprime==0){
        cout<<"not a prime no."<<endl;
       }
       else{
        cout<<"is a prime no."<<endl;
       }*/
      /* for(int i=0;i<5;i++){
        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        continue;
        cout<<"reply toh krde"<<endl;
       }*/
      /* for(int i=0;i<=5;i++){
       cout<<i<<" ";
       i++;
       }*/
     /*  for(int i=0;i<=5;i--){
       cout<<i<<" ";
       i++;
       }*/
       /*for(int i=0;i<=5;i+=2){
       cout<<i<<" ";
       if(i&1){
        continue;
       }
       i++;
       }*/
      /* for(int i=0;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
}*/
/*for(int i=0;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
}
}*/
/*int n=234;
int prod=1;
int sum=0;
while(n!=0){
    int rem=n%10;
    prod=prod*rem;
    sum=sum+rem;
    n=n/10;
}
int ans=prod-sum;
cout<<ans;*/
int n;
cin>>n;
int count=0;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;

}
cout<<count;
}