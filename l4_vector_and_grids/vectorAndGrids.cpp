//
// Created by TianyuYuan on 2023/7/29.
//

// abstract data type (ADT)

#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec;    // create an empty vector only stores int

    // add element at the end
    vec.push_back(1);

    // traverses
    for (int num : vec) {
        cout << num << endl;
    }

    return 0;
}