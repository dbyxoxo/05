#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int p = s.length() - 1;
    for(int i=0; i<s.length()/2; i++)
    {
        char t = s[i];
        s[i] = s[p];
        s[p] = t;
        p--;
    }
    cout << s << endl;
    return 0;
}