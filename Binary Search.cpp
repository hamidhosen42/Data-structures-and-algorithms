//In the name of ALLAH
//binary search complexity=log2(n)
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    //optimize();
    cout<<"Enter your array size:";
    int n;
    cin>>n;
    int a[n];

    cout<<"Enter your array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter your searching element:";
    int t;
    cin>>t;

    int left=0,right=n-1;
    bool done=0;

    while (left<=right){
        int mid=(left+right)/2;

        if(a[mid]==t){
            cout<<"Searching value index="<<mid<<endl;
            done=1;
            break;
        }else if(a[mid]<t){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    if(!done) cout<<"Not Found"<<endl;
    return 0;
}
