// #include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word;
    cin >> word;

    int count = 0;
    size_t pos = 0;

    for (size_t found = s.find(word, pos); found != string::npos; found = s.find(word, pos))
    {
        count++;
        pos = found + word.length();
    }

    cout << count << endl;

    return 0;
}
