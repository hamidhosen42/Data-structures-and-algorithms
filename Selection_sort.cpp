/*
  Selection sort Algorithm
  Time Complexity (Worst)=O(n^2)
  Time Complexity (Average)=O(n^2)
  Time Complexity (Best)=O(n^2)
  Space Complexity=O(1)
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void selectionSort(int array[], int n){
    int index_min,temp;

    for(int i=0;i<n-1;i++){
        index_min=i;

        for(int j=i+1;j<n;j++){
            if(array[index_min]>array[j]){
                index_min=j;
            }
        }

        if(index_min!=i){//2 5 10 8 7
            temp=array[i];
            array[i]=array[index_min];
            array[index_min]=temp;
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

    selectionSort(array,size);
    cout<<"Sorted in array: \n";

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
