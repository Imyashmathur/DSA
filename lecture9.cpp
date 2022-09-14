 #include<iostream>
 #include<limits.h>
 using namespace std;
 /*void printArray(int arr[],int size){
     cout<<"printing the array"<<endl<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
 }
 int main(){
   //int number[15];
    //cout<< "value at 0 index is "<<number[0]<<endl;
    /*fill_n(number,10,1);
    for(int i=0;i<=15;i++){
        cout<<number[i]<<endl;
    }*/
    //int second[3]={5, 7, 11};
     //cout<< "value at 2 index is "<<second[2]<<endl;
     //int third[15]={2,7};
     //int n=15;
     /*cout<<"printing the array "<<endl;
     for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
     }*/
    // printArray(third,15);
    //cout<<endl<<"everything is fine"<<endl;
    //int fourth[10]={0};
    // int j=10;
     //int thirdSize=sizeof(third)/sizeof(int);
     //cout<<endl<<" size of third is "<< thirdSize<<endl;
    /*for(int i=0;i<j;i++){
        cout<<fourth[i]<<endl;
    }*/
    // printArray(fourth,10);
     /*char ch[5]={'a','b','c','d','e'};
     for(int i=0; i<5;i++){
        cout<<"the characters are: "<<ch[i]<<endl;
     }
    return 0;
 }*/
 /*int getMin(int num[],int n){
    int mini = INT_MAX;
   for (int i=0;i<n;i++){
    mini=min(mini,num[i]);
        //if(num[i]<min){
       //     min=num[i];
       // }
    }
    return mini;
 }
 int getMax(int num[],int n){
    int maxi = INT_MIN;
    for (int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
       //if(num[i]>max){
        //    max=num[i];
      //  }
    }
    return maxi;
 }
 int main(){
    int size;
    cin>>size;
     int num[100];
     for(int i=0;i<size;i++){
        cin>>num[i];
        
     }
    cout<<"Maximum value is "<<getMax(num,size)<<endl;
    cout<<"Minimum value is "<<getMin(num,size)<<endl;
     return 0;
 }*/
 /*void update(int arr[],int n){
         cout<<"Inside the function"<<endl;
         //updating the array
         arr[0]=120;
         for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
         cout<<"Going back to main"<<endl;
 }
 int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<endl<<"Printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
 }*/
/*int sumofelements(int num[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    return sum;
}
 int main(){
    cout<<"enter the size of the array"<<endl;
    int size;
    cin>>size;
    int num[10];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"sum of all the elements in an array: "<<sumofelements(num,size)<<endl;
    return 0;
 }*/
 /*bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        }
    return 0;
 }
 int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"enter the element to search for "<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
        return 0;
    }
    }*/
    void reverse(int arr[],int n){
        int start = 0;
        int end = n-1;
        while(start<=end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void printArray(int arr[], int n){
        for(int i=0;i<n;i++){
           cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
 int main(){
   int arr[6]={1,4,0,5,-2,15};
   int brr[5]={2,6,3,9,4};
   reverse(arr,6);
   reverse(brr,5);
   printArray(arr,6);
   printArray(brr,5);
 }
    
 
 
 