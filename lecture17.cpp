#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

void bubbleSort(int ar[],int n){
    for (int i=1;i<n;i++){
        //for round 1 to n-1;
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main(){
    int arr[5]={32,53,64,67,84};

    cout<<"the sorted array is "<<bubbleSort(arr,5)<<endl;
    cout<<"the sorted array is "<<printArray(arr,5)<<endl;
    return 0;
}