/**
 * Created by lpzju on 2023/3/12 16:16
 */

#include <stdio.h>

int isPalindrome(int x){
    if (x < 0) {
        return 0;
    } else if (x != 0){
        int orgin = x;
        int reverse = 0;
        while (x != 0) {
            int temp = x % 10;
            reverse = reverse * 10 + temp;
            x /= 10;
        }
        if (reverse == x) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 1;
    }
}

int main() {
//    cout << "Let's start to solve a new problem" << endl;
    int res;
    res = isPalindrome(121);
    printf("%d\n",res);
    return 0;
}