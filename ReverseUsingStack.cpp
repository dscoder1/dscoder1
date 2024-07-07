#include<iostream>
#include<stack>
using namespace std;
int main(){
    //int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr[100],size;
    cout<<"Enter Size Of Array(1-100): ";
    cin>>size;
    stack<int>s1;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Array Elements:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        s1.push(arr[i]);
    }
    int i=0;
    while(!s1.empty()){
        arr[i]=s1.top();
        i++;
        s1.pop();
    }
    cout<<"After Reversing:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
