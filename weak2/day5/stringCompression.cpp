#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of string input:";
    cin>>n;
    vector<char>chars;
    cout<<"enter the string: ";
    for(int i=0;i<n;i++){
        char s;
        cin>>s;
        chars.push_back(s);
    }
     unordered_map<char,int>x;
       queue<char>a;
       string s;
       char b;
       for(int i=0;i<chars.size();i++)
       {
        if(a.empty())
        {
            a.push(chars[i]);
            b=chars[i];

        }
        else if(b!=chars[i])
        {
          a.push(chars[i]);
          b=chars[i];
        }
        if(x.find(chars[i])==x.end())
        {
            x[chars[i]]=0;
            
        }
        if(a.size()>1)
        {
            s.push_back(a.front());
            if(x[a.front()]>1)
            {
                s=s+to_string(x[a.front()]);
            }
            x[a.front()]=0;
            a.pop();


        }
         x[chars[i]]++;
       } 
        s.push_back(a.front());
        if(x[a.front()]>1)
        {
            s=s+to_string(x[a.front()]);
        }
        a.pop();
       chars.clear();
       
       
       for(int i=0;i<s.length();i++)
       {
        chars.push_back(s[i]);
       }
       cout<<s.length()<<endl;;
}