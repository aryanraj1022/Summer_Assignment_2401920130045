#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s, p;
    cout << "enter the string: " << endl;
    cin >> s >> p;
    vector<int> ans;

        int n = s.size(), m = p.size();
        if (m > n) {
            cout<<0<<endl;
            return 0;
        }

        vector<int> freqP(26, 0), freqS(26, 0);

        for (char c : p)
            freqP[c - 'a']++;

        for (int i = 0; i < m; i++)
            freqS[s[i] - 'a']++;

        if (freqS == freqP)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            freqS[s[i] - 'a']++;           
            freqS[s[i - m] - 'a']--;       

            if (freqS == freqP)
                ans.push_back(i - m + 1);
        }

        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
}