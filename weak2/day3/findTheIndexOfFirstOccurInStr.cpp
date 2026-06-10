#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string heystack, needle;
    cout << "enter the string: " << endl;
    cin >> heystack >> needle;
    int x=heystack.find(needle);
    cout<<x<<endl;
}