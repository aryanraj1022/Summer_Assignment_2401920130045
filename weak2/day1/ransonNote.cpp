#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string ransomNote, magazine;
    cout << "enter the string: " << endl;
    cin >> ransomNote >> magazine;
    int i = 0;
    int pos = -1;
    while (i < ransomNote.length())
    {
        pos = magazine.find(ransomNote[i]);
        if (pos > -1)
        {
            magazine.erase(magazine.begin() + pos);
        }
        else
        {
            cout<< false<<endl;
            return 0;
        }
        i++;
    }
    cout<<true<<endl;
}