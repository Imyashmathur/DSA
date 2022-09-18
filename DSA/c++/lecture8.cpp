#include <iostream>
#include<math.h>
using namespace std;

/*int main()
{
    /* int num=2;
     char ch='1';
   cout<<endl;
   switch(num){
       case 1: cout<<"first"<<endl;
       switch(ch){
           case '1':cout<<"value of char is"<< ch<<endl;
           break;
       }
       break;
      case 2:cout<<"second"<<endl;
      break;
      //continue;it cannot be used within a loop.
       case '1':cout<<"character"<<endl;
       break;
       default:cout<<"it is default case"<<endl;
   }
   //return 0;*/
   /* int a, b;
    cout << "enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
    char op;
    cout << "enter the operation you want to perform" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "bhakchodi nhi" << endl;
    }*/
   /* int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    int a=100;
    int b=50;
    int c=20;
    int d=1;
    
    switch(1){
        case 1:a=amount/100;
             amount =amount%100;
               cout<<"no. of hundred notes  "<< a <<" "<<endl;
            
             // break;
        case 2:b=amount/50;
           amount=amount%50;
             cout<<"no. of fifty notes  "<< b <<" "<<endl;
              //break;
        case 3:c=amount/20;
              amount=amount%20;
                cout<<"no. of twenty notes  "<< c <<" "<<endl;
              //break;
        case 4:d=amount/1;
               amount=amount%1;
            cout<<"no of one notes  "<< d <<" "<<endl;

              //break;      

    }*/
  /*int a,b;
  cin>>a>>b;
  cout<<pow(a,b);
  }*/
  /*int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
  }
  int main(){
    int a, b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"the answer is "<< answer << endl;
    return 0;
  }*/
  /*int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
      
    }
    return ans;
  }
    int main(){
        int ans=power();
        cout<<"answer is "<<ans<<endl;
    }*/
  /*  bool isEven(int a){
        if(a&1){
            return 0;
        }
        
            return 1;
       
    }
    int  main(){
        int num;
        cin>>num;
        if (isEven(num)){
            cout<<"Number is Even"<<endl;
        }
        else{
            cout<<"Number is odd"<<endl;
        }
    }*/
   /* int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
   int nCr(int n,int r){
          int numer=factorial(n);
          int denom=factorial(r)*factorial(n-r);
          int ans=numer/denom;
          return ans;
   }
       int main(){
        int n,r;
        cin>>n>>r;
        cout<<"answer is "<<nCr(n,r)<<endl;
       }*/
       /*void printCounting(int n){
          for (int i=1;i<=n;i++){
            cout<<i<<" "<<endl;
          }
       }
       int main(){
        int n;
        cin>>n;
        printCounting(n);
        return 0;
       }*/
      /* bool isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
       }
       int main(){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<"it is a prime no."<<endl;
        }
        else{
            cout<<"it is not a prime no."<<endl;
        }
        return 0;
       }*/
 /* int A_P(int n){
    
     int i=(3*n+7);
    return i;
  }

  int main(){
    int n;
    cin>>n;
    int ans=A_P(n);
    cout<<"the no. is "<<ans<<endl;
    return 0;
  }*/
 /*int noofsetbits(int num){
    int count=0;
    while(num){
        if(num&1==1){
            count+=1;
        }
        num=num>>1;
    }
    return count;
  }
  int main(){
    int a,b;
    cin >> a ;
    cin>>b;
    int bits_a=noofsetbits(a);
    int bits_b=noofsetbits(b);
    cout<<"total no. of set bits in a and b are:"<<bits_a+bits_b;
    return 0;
      }*/
     /* int fibb( int num){
        int a=0,b=1;
        int nextnumber=0;
        cout<<a<<endl<<b<<endl;
        for(int i=2;i<=num;i++){
            if(i==num){
                return nextnumber;
            }
            nextnumber=a+b;
            a=b;
            b=nextnumber;
            cout<<nextnumber<<""<<endl;
        }
        return 0;
      }
     
                  int main(){
                    int num;
                    cin>>num;
                    int ans=fibb(num);
                    cout<<"the nth fibbonaci no. is "<<ans<<endl;
                    return 0;
                  }*/
              /*  void dummy(int n )
                {
                    n++;
                    cout<<" n is "<< n <<endl;
                }
                int main(){
                    int n;
                    cin>>n;
                    dummy(n);
                    cout<<"number n is "<<n<<endl;
                    return 0;
                }*/
               /*void update(int a){
                    a=a/2;

                }
                int main(){
                    int a=10;
                    update(a);
                    cout<<a<<endl;
                }*/
                /*int update(int a){
                    a-=5;
                    cout<<a<<endl;
                    return a;

                }
                int main(){
                    int a=15;
                    update(a);
                    cout<<a<<endl;
                }*/
               int update(int a){
                   int ans=a*a;
                   
                    return ans;

                }
                int main(){
                    int a=14;
                    a=update(a);
                    cout<<a<<endl;
                }
                
                
               
     