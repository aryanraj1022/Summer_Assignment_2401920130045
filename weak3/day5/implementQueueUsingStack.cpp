#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
    stack<int>a;
    stack<int>b;
public:

    MyQueue() {
       stack<int>a;
       stack<int>b;
    }
    
    void push(int x) {
        if(a.empty())
        {
            a.push(x);
        }
        else
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            a.push(x);
            while(!b.empty())
            {
                a.push(b.top());
                b.pop();
            }
        }
    }
    
    int pop() {
        int l=a.top();
        a.pop();
        return l;
    }
    
    int peek() {
        return a.top();
        
    }
    
    bool empty() {
        return a.empty();
    }
};
int main(){
    MyQueue s1;
    while(true){
        int a;
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for ppek"<<endl;
        cout<<"enter 4 for empty"<<endl;
        cout<<"enter 5 for exit"<<endl;
        cin>>a;
        if(a==1){
            int x;
            cout<<"enter value"<<endl;
            cin>>x;
            s1.push(x);
        }else if(a==2){
            s1.pop();
        }else if(a==3){
            cout<<s1.peek()<<endl;
        }else if(a==4){
            cout<<s1.empty()<<endl;
        }
        else if(a==5){
            break;
        }

    }
}

