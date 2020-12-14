#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cin>>arr[i][j];}
    int i=0,j=0,d1=0,d2=0;
    while(i<n){
        {
            d1+=arr[i][i];
            i++;
            }
        }
    while(j<n){
        while(n>0){
            d2+=arr[j][n-1];
            j++;
            n--;
            }
        }
        cout<<abs(d1-d2);

}
