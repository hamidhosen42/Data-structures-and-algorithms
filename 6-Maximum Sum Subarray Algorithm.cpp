#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int max_croos(int a[],int left,int mid,int right){
    int left_sum=INT_MIN,sum=0;
 
    for(int i=mid;i>=left;i--){
        sum+=a[i];
        if(sum>left_sum){
            left_sum=sum;
        }
    }
    int right_sum=INT_MIN;
    sum=0;
 
    for(int i=mid+1;i<=right;i++){
        sum+=a[i];
        if(sum>right_sum){
            right_sum=sum;
        }
    }
    return (left_sum+right_sum);
}
int max_sum(int a[],int left,int right){
    if(left==right){
        return a[right];
    }
 
    int mid=(left+right)>>1;
 
 
    int max_sum_left= max_sum(a,left,mid);
    //cout<<"Left:"<<max_sum_left<<endl;
    int max_sum_right= max_sum(a,mid+1,right);
    //cout<<"Right:"<<max_sum_right<<endl;
 
    int max_sum_cross_check=max_croos(a,left,mid,right);
   // cout<<"croos:"<<max_sum_cross_check<<endl;
 
    //cout<<endl;
 
    return max(max_sum_left,max(max_sum_right,max_sum_cross_check));
}
int main()
{
    //optimize();
    int t;
    cout<<"Enter your array size:";
    cin>>t;
 
    int a[t];
 
    cout<<"Enter your array element:";
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
 
    cout<<"Maximum sum sub array: "<<max_sum(a,0,t-1)<<endl;
 
 
    return 0;
}
