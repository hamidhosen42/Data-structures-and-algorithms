/*
  Quick sort Algorithm
  Time Complexity (Worst)=O(n^2)
  Time Complexity (Average)=O(nlog(n))
  Time Complexity (Best)=O(nlog(n))
  Space Complexity=O(log(n))
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j=low;j<=high-1;j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1],&arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    //optimize();

    int n;

    cout<<"Enter your array size:";
    cin>>n;

    int arr[n];

    cout<<"Enter your array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
