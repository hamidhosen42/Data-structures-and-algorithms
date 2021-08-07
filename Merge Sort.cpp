/*
  Merge sort Algorithm
  Time Complexity (Worst)=O(n*logn)
  Time Complexity (Average)=O(n*logn)
  Time Complexity (Best)=O(n*logn)
  Space Complexity=O(n)
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void merge(int *a, int low, int high, int mid)
{
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high){
        if (a[i] < a[j]){
            temp[k] = a[i];
            k++;
            i++;
        }else{
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid){
        temp[k] = a[i];
        k++;
        i++;
    }

    while (j <= high){
        temp[k] = a[j];
        k++;
        j++;
    }

    for (i = low; i <= high; i++){
        a[i] = temp[i-low];
    }
}

void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high){
        mid=(low+high)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a, low, high, mid);
    }
}

int main()
{
    //optimize();

    int n, i;

    cout<<"Enter the number of data element to be sorted: ";
    cin>>n;

    int arr[n];
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    MergeSort(arr, 0, n-1);

    cout<<"Sorted Data ";
    for (i = 0; i < n; i++)
        cout<<" "<<arr[i];

    return 0;
}
