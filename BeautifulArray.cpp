//Problems Is ----> In array Negative and Positive Element eliminate each other 
// and remaining element are present in stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[100],size;
    cout<<"Enter Size Of Array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    stack<int>s1;
    for(int i=0;i<size;i++){
        //Empty Stack
        if(s1.empty())
        s1.push(arr[i]);
        //For Positive 
        else if(s1.top()>=0){
            if(arr[i]>=0){
                s1.push(arr[i]);
            }
            else{
                s1.pop();
            }
        }
        //For Negative
        else{
            if(arr[i]<0){
                s1.push(arr[i]);
            }
            else{
                s1.pop();
            }
        }
    }
    cout<<"Element In Stack Is:"<<endl;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
