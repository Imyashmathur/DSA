#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
     int temp;
    for (int i = 1; i < n; i++)
    {
         int temp = arr[i];
        int j = i - 1;
        for ( ;j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    return temp;
}
int main(){
    int arr[4]={23,643,134,754};
    cout<<"the sorted array is "<<insertionSort(arr,4)<<endl;
}