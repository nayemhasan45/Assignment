#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n){
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    return arr;
}
int main (){

    int n;
    cin>>n;
    int *ans=sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    delete ans;
    return 0;
}