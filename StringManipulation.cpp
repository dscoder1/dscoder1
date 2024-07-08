/*
Problems -->Delete Two Consecutive Same Name From Vector 
And Then Display With Help Of Same Vector
*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<string>s1;
    vector<string>v1;
    v1.push_back("Ram");
    v1.push_back("Maya");
    v1.push_back("Maya");
    v1.push_back("maya");
    v1.push_back("Ram");
    v1.push_back("Shyam");
    cout<<"Names Are:"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"In Stack Names Are:"<<endl;
    for(int i=0;i<v1.size();i++){
        if(s1.empty()){
            s1.push(v1[i]);
        }
        else if(v1[i]==s1.top()){
            s1.pop();
        }
        else{
            s1.push(v1[i]);
        }
        }
        while(!s1.empty()){
            cout<<s1.top()<<" ";
            s1.pop();
        }
        int i=0;
        v1.clear();
        while(!s1.empty()){
            v1[i]=s1.top();
            s1.pop();
        }
        /*cout<<endl;
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }*/
        return 0;
    }