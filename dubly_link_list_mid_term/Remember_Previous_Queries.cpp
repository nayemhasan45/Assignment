#include<bits/stdc++.h>
using namespace std;
int main (){
    int q;
    cin>>q;
    list<int> mylist;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0){
            mylist.push_front(v);
        }else if(x==1){
            mylist.push_back(v);
        }else if(x==2){
            if(v<mylist.size()){
                mylist.erase(next(mylist.begin(),v));
            }
        }
        cout<<"L -> ";
        for(int val:mylist){
            cout<<val<<" ";
        }
        cout<<endl<<"R -> ";
        for(auto it=--mylist.end();it!=--mylist.begin();it--){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}