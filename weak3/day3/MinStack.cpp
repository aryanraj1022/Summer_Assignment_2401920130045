#include <iostream>
#include <string>
#include <stack>
#include<climits>
using namespace std;

class node{
    public:
    int val;
    int min;
    node* next;
    node(int v,int m)
    {
        val=v;
        min=m;
        next=NULL;
    }
};
class MinStack {
public:
stack<node*>a;
int min1=INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
       
           min1=min(min1,val);
           node* newNode=new node(val,min1);
           a.push(newNode);
        
         
    }
    
    void pop() {
        a.pop();
        if(a.empty())
        {
            min1=INT_MAX;
        }else{
        min1=a.top()->min;
        }
    }
    
    int top() {
        return a.top()->val;
    }
    
    int getMin() {
        return a.top()->min;
    }
};
int main(){
    MinStack s1;
    while(true){
        int a;
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for top"<<endl;
        cout<<"enter 4 for getMin"<<endl;
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
            cout<<s1.top()<<endl;
        }else if(a==4){
            cout<<s1.getMin()<<endl;
        }
        else if(a==5){
            break;
        }

    }
}
