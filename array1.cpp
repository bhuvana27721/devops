#include <iostream>
using namespace std;

int main()
{
    string s = "bhuvi";
    int len = s.size();
    s[len-1]='z';
    cout << s[len-1];
    cout << s ;
    return 0;
}