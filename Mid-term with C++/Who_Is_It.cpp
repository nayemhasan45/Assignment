#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int uid;
        char name[100];
        char section;
        int totalM;
};
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        Student first;
        Student second;
        Student third;
        cin>>first.uid>>first.name>>first.section>>first.totalM;
        cin>>second.uid>>second.name>>second.section>>second.totalM;
        cin>>third.uid>>third.name>>third.section>>third.totalM;
        if (first.totalM>=second.totalM&&first.totalM>=third.totalM)
        {          
            if (first.totalM==second.totalM||first.totalM==third.totalM)
            {
                if (first.uid<second.uid||first.uid<third.uid)
                {
                    cout<<first.uid<<" "<<first.name<<" "<<first.section<<" "<<first.totalM<<endl;
                }else if (second.uid<first.uid)
                {
                    cout<<second.uid<<" "<<second.name<<" "<<second.section<<" "<<second.totalM<<endl;
                }else
                {
                    cout<<third.uid<<" "<<third.name<<" "<<third.section<<" "<<third.totalM<<endl;
                }   
            }else
            {
                cout<<first.uid<<" "<<first.name<<" "<<first.section<<" "<<first.totalM<<endl;
            }
            
            
        }else if (second.totalM>=third.totalM)
        {
            if (second.totalM==third.totalM)
            {
                if (second.uid<third.uid)
                {
                    cout<<second.uid<<" "<<second.name<<" "<<second.section<<" "<<second.totalM<<endl;
                }else
                {
                    cout<<third.uid<<" "<<third.name<<" "<<third.section<<" "<<third.totalM<<endl;
                }   
            }else
            {
                cout<<second.uid<<" "<<second.name<<" "<<second.section<<" "<<second.totalM<<endl;
            } 
        }else
        {
            cout<<third.uid<<" "<<third.name<<" "<<third.section<<" "<<third.totalM<<endl;
        }   
    }
    return 0;
}