#include <iostream>
using namespace std;

/*int firstOccur(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
       else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
         }
        
   
    return ans;
}
int main()
{
    int even[13] = {1, 2, 3, 3,3,3,3,3,3,3,3,3, 5};
    cout << "first occurence of 3 is " << firstOccur(even, 13, 3) << endl;
    cout << "last occurence of 3 is " << lastOccur(even, 13, 3) << endl;
    return 0;
}*/
//not sollved
int peakofmountain(int arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(int arr[mid]<int(arr[mid]+1)){
            s=mid+1;

        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]{1,2,6,4,5};
    cout<<"the peak of this array is "<<peakofmountain(arr,5)<<endl;
    return 0;
}