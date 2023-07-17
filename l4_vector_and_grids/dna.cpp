//
// Created by TianyuYuan on 2023/7/29.
//
#include <iostream>
#include <cctype>

using namespace std;

// switch case syntax
// switch (variable) {
//      case [condition]:
//          do something;
//          break;
//
// }

string complement (const string& dnaStrand) {
    string res;
    for (char base : dnaStrand) {
        switch (toupper(base)) {
            case 'A':
                res += 'T';
                break;
            case 'T':
                res += 'A';
                break;
            case 'G':
                res += 'C';
                break;
            case 'C':
                res += 'G';
                break;
            default:
                res += " ";
        }
    }
    return res;
}


string getLine(const string& prompt) {
    cout << prompt;
    string res;
    getline(cin, res);
    return res;
}


int main() {
    string dnaStrand;
    dnaStrand = getLine("Please input a DNA strand: ");
    cout << complement(dnaStrand) << endl;
    return 0;
}