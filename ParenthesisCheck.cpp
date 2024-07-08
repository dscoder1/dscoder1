/*
Problems -->
Checking For Balance Parenthesis
*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    char s1[100];
    int size;
    cout<<"Enter Size Of Charcter Array:";
    cin>>size;
    for(char ch=0;ch<size;ch++){
        cin>>s1[ch];
    }
    cout<<"Before Parenthesis Checking";
    for(char ch=0;ch<size;ch++){
        cout<<s1[ch]<<" ";
    }
    stack<char>s2;
    for(char ch=0;ch<size;ch++){
        if(s2.empty()){
            s2.push(s1[ch]);
        }
        else if(s2.top()=='(' && s1[ch]==')'){
            s2.pop();
        }
        else{
            s2.push(s1[ch]);
        }
    }
       /* while(!s2.empty()){
            cout<<s2.top()<<" ";
            s2.pop();
        }*/
        cout<<endl;
        if(s2.size()==0){
            cout<<"Balanced";
        }
        else{
            cout<<"unbalanced";
        }

    }

