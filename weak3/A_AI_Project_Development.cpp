#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int ans1,ans2=INT_MAX;
        if(n%(x+y)==0){
            ans1=n/(x+y);
        }
        else{
            ans1=n/(x+y)+1;
        }
        if(n/(x+y)>z){
          if((n-(z)*x)%(x+10*y)==0){
             ans2=(z)+(n-(z)*x)/(x+10*y);
          }else{
             ans2=(z)+(n-(z)*x)/(x+10*y)+1;
          }
        }
        cout<<min(ans1,ans2)<<endl;
    }
}