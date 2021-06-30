/*
  Bubble sort Algorithm
  Time Complexity (Worst)=O(n^2)
  Time Complexity (Average)=O(n^2)
  Time Complexity (Best)=O(n)
  Space Complexity=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void bubbleSort(int array[], int n){
    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }
}

int main()
{
    //optimize();

    int size,array[100];

    cout<<"Enter your array size:";
    cin>>size;

    cout<<"Enter your array element:";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    bubbleSort(array,size);
    cout<<"Sorted in array: \n";

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
