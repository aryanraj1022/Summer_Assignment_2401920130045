#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    int max1=0;
        int count=0;
        unordered_map<char,int>x;
        for(int i=0;i<s.length();i++)
        {
            if(x.find(s[i])==x.end())
            {
                x[s[i]]=i;
                count++;
            }
            else
            {
                i=x[s[i]]+1;
                x.clear();
                x[s[i]]=i;
                count=1;
            }
            max1=max(max1,count);


        }
        cout<<max1<<endl;
}