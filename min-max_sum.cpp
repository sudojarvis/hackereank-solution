#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++)
    cin>>arr[i];
    sort(arr,arr+5);
    long min=0,max=0;
    for(int j=0;j<4;j++)
    min+=arr[j];
    reverse(arr, arr+5);
    for(int k=0;k<4;k++)
    max+=arr[k];
    cout<<min<<" "<<max;
    cout<<"hello"<<endl;
    return 0;
}
