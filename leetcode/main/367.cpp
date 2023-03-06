#include <iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    bool isPerfectSqure(int num) {
        int temp = (int)exp(0.5 * log(num));
        cout << temp << endl;
        if (((long long)(temp*temp) == num)||((long long)((temp+1)*(temp+1)) == num)) {
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    int num;
    cout << "输入一个整数:" << endl;
    cin >> num;
    Solution s1;
    cout << s1.isPerfectSqure(num) << endl;
}
