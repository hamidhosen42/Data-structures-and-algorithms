/*
  Merge sort Algorithm
  Time Complexity (Worst)=O(n*2)
  Time Complexity (Average)=O(n*n)
  Time Complexity (Best)=O(n)
  Space Complexity=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    cout<<"Sorted Data ";
    for (i = 0; i < n; i++){
        cout<<" "<<arr[i];
    }

    return 0;
}
