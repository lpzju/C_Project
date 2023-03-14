#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <queue>
#include <map>
#include <iterator>
#include <stack>

using namespace std;

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    int i = 1;
    cout << &i << endl;
//    cout << (i++)++ << endl; // error: lvalue required as increment operand
    cout << ++(++i) << endl;
    cout << &i << endl;
    cout << &(++i) << endl;
//    cout << &(i++) << endl; // error: lvalue required as unary '&' operand
    cout << i << endl;
    cout << &i << endl;
//    cout << ++4; // error: lvalue required as increment operand
    int arr[] = {1,2,3,4};
//    cout << arr++ << endl; // error: lvalue required as increment operand
    return 0;
}