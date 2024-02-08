#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    queue<string> q;
    while (t--)
    {
        string x;
        int n;
        cin>>n;
        if(n==0){
            cin>>x;
            q.push(x);
        }else if(n==1){
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}