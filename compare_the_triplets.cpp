#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    int b[3];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    int x=0,y=0;
    if(a[0]>b[0]){
        x += 1;
    }
    else if(b[0]>a[0]){
        y += 1;
    }
    if(a[1]>b[1]){
        x += 1;
    }
    else if(b[1]>a[1]){
        y += 1;
    }
    if(a[2]>b[2]){
        x += 1;
    }
    else if(b[2]>a[2]){
        y += 1;
    }
    cout<<x<<" "<<y;
}
