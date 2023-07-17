//
// Created by TianyuYuan on 2023/7/29.
//
#include <iostream>
#include <cctype>   // char methods
#include <string>   // string methods

using namespace std;

void compareString() {
    string s1 = "apple";
    string s2 = "apples";
    if (s1 > s2) {
        cout << s1 << " > " << s2 << endl;
    } else {
        cout << s1 << " < " << s2 << endl;
    }
}

void addLetter() {
    // This is invalid
    // string s = "add" + "letter";

    string s = string("add") + string("letter");
}

void mystery(string a, string &b) {
    a.erase(0,1);
    b += a[0];
    b.insert(3, "FOO");
}

int main() {
    // indexing
    string name = "Tianyu";
    cout << name[0] << endl;

    // looping
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    for (char c : name) {
        cout << c << endl;
    }

    // string is mutable
    name[4] = 'w';
    cout << name << endl;

    // concatenated using + or +=
    string familyName = "Yuan";
    cout << "My full name is " << familyName + name << endl;

    // concat string with char
    string apple = "apple";
    char letterS = 's';
    cout << apple + letterS << endl;

    // compare
    string a, b;
    a = "abc";
    b = "ABC";
    cout << a << endl;
    cout << b << endl;
    cout << "abc > ABC is " << (a == b) << endl;
    cout << "1 == True is " << (1 == true) << endl;
    compareString();

    // cctype
    char letter = 'L';
    cout << "L is lower: " << islower(letter) << endl;

    a = "Stanford";
    b = "Tree";
    mystery(a, b);
    // won't change 'a' because func is pass-by-value
    // b will be changed because it is pass-by-reference
    cout << a << " " << b << endl;
    cout << "TreFOOet" << endl;
    return 0;
}