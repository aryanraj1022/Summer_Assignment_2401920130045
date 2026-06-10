#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the string"<<endl;
    string s;
    cin>>s;
    int n = s.size();
        vector<int> lps(n, 0);

        int len = 0;
        for (int i = 1; i < n; ) {
            if (s[i] == s[len]) {
                lps[i++] = ++len;
            } else {
                if (len)
                    len = lps[len - 1];
                else
                    lps[i++] = 0;
            }
        }

        int l = lps[n - 1];
        cout<< (l > 0 && n % (n - l) == 0);
}