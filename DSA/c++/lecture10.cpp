#include<bits/stdc++.h>

using namespace std;
/*void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;-
    swapAlternate(odd,5);
    printArray(odd,5);

 return 0;
}*/
 /*int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
 }
int main(){
    int arr[5]={1,2,3,2,1};
    int unique =findUnique(arr, 5);
   cout<<"the unique number is "<<unique<<endl;
   return 0;
}*/
/*bool uniqueOccurence(int arr[],int n){
    int ans;
    for(int i=0;i<n;i++){
        ans^=arr[i];

    }
    if(ans!=0){
        return false;
    }
    else if(ans==0){
      return true;
    }
}
int main(){
    int arr[9]={-3,0,1,-3,1,1,10,0,-3};
    cout<<uniqueOccurence(arr,9)<<endl;
    
}*/
//incomplete
/*int findDuplicate(int arr[],int size){
  int ans=0;
  for(int i=0;i<size;i++){
    ans=ans^arr[i];
  }
  for(int i=0;i<size;i++){
    ans=ans^i;
  }
  return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int duplicate=findDuplicate(arr,6);
    
    cout<<duplicate<<endl;
    return 0;
}*/
//incomplete
   
/*int duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
    ans=ans^i;
    if(ans==2){
        cout<<ans<<endl;
    }
    }
    return ans;
}
int main(){
    int arr[6]={2,3,4,2,3,5};
    cout<<duplicate(arr,6)<<endl;
    return 0;
}*/
//not giving required output
/*int main(){
    int arr[10];
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            int sum=5;
            if(arr[i]+arr[j]==sum){
                cout<<arr[i],arr[j];
            }

        }
    }
}*/
/*void printArray(int arr[],int n){
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortOne(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
   int arr[8]={1,1,0,0,0,0,1,0};
   sortOne(arr,8);
   printArray(arr,8);

    
}*/
/*void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void sortArray(int arr[],int n){
    int start=0;
    int mid=0;
    int end=n-1;
      while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            start++;
            end--;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[end]);
            end--;
        }
      }
     
      }
      int main(){
        int arr[]={1,2,0,1,2,0};
      sortArray(arr,6);
      printArray(arr,6);
        return 0;
      }*/


   
   