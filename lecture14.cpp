#include <iostream>
using namespace std;
/*int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0]){
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
    int arr[5]={8,10,17,1,3};
    cout<<"pivot is "<<getpivot(arr,5)<<endl;
    return 0;
}*/
/*int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[],int n,int s,int e,int key){
int s=0;
int e=n-1;
int mid=s-(e=s)/2;
while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
     mid=s+(e-s)/2;
}
return -1;
}
int findPosition(int arr[],int n,int key){
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,int n,pivot,n-1,int key);
    }
    else{
        return binarySearch(arr,int n,0,pivot-1,int key);
    }

}
int main(){
    int arr[6]={17,18,19,1,2,3};
    cout<<"pivot is "<<getpivot(arr,6)<<endl;
    cout<<"the element is"<<findPosition(arr,6,pivot)<<endl;
    return 0;
}*/
/*long long int binarySearch(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int mysqrt(int x)
{
    return binarySearch(x);
}
int main()
{
    int x = 8;
    cout << "the square of given element is " << mysqrt(x) << endl;
}*/
long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    int tempSol = sqrtInteger(n);
    cout << "answer is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}