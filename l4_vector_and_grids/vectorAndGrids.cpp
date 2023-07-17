//
// Created by TianyuYuan on 2023/7/29.
//

// abstract data type (ADT)

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec;    // create an empty vector only stores int
    vec.push_back(1);
    cout << vec[0] << endl;
    return 0;
}