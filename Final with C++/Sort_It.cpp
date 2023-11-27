#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool cmp(Student a,Student b){
    if (a.math_marks+a.eng_marks==b.math_marks+b.eng_marks)
    {
        return a.id>b.id;
    }else
    {
        return a.math_marks+a.eng_marks<b.math_marks+b.eng_marks;
    }
    
    
}
int main (){
    int n;
    cin>>n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }
    sort(arr,arr+n,cmp);
    for (int i = n-1; i >=0; i--)
    {
        
     cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    return 0;
}