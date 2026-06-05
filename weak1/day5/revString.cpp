#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the string ";
    string s;
    cin >> s;
    int i=0;
    int j=s.length()-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    
    cout<<s<<endl;
}