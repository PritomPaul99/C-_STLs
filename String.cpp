//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1;
    cin >> s;                                            // input without white spaces
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // remove input buffer or cin >> ws; or char ch = getchar();
    getline(cin, s1);                                    // input with whit spaces
    reverse(s.begin(), s.end());                         // use this or reverse(begin(s), end(s)); to reverse a string
    string tmp(s.size(), 0);                             // fill constructor
    reverse_copy(begin(s), end(s), begin(tmp));          // copy reversed string to tmp string
    equal(begin(s), end(s), begin(tmp), end(tmp));       // 4 arguments overload since C++14, check if two strings are same.
    string NumString = to_string(1.23456);               // Numeric to string
    int a = stoi("1234");                                //  String to integer
    double b = stod("12345667");                         // String to double
    cout << NumString;
    return 0;
}
