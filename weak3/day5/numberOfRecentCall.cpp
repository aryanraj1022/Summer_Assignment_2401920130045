#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class RecentCounter {
public:
    queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty()&&q.front()<t-3000){
            q.pop();
        }
        return q.size();
        
    }
};

int main(){
    RecentCounter s1;
    cout<<"enter the number of ping : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        cout<<s1.ping(t)<<" ";
    }
    cout<<endl;

}