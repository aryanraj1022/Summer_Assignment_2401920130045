#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string: " << endl;
    cin >> s;
    int n=s.length();
    if (n < 2){
        cout<<s<<endl;
        return 0;
    }

        int st = 0, max = 1;

        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                left--;
                right++;
            }

            int l = right - left - 1;
            if (l > max) {
                max = l;
                st = left + 1;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);       
            expand(i, i + 1);   
        }

        cout<< s.substr(st, max)<<endl;
}