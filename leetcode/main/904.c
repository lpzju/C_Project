#include <stdio.h >

int totalFruit(int* fruits, int fruitsSize){
    int fast = 0;
    int slow = 0;
    int total = 0;
    int arr[2] = {-1,-1};
    int temp = 0;
    for (fast = 0; fast < fruitsSize; fast++) {
        if (arr[0] == -1) {
            temp = fast - slow + 1;
            total = total >= temp ? total : temp;
            arr[0] = fruits[fast];
        } else {
            if (arr[0] != fruits[fast]) {
                if (arr[1] == -1) {
                    arr[1] = fruits[fast];
                    temp = fast - slow + 1;
                    total = total >= temp ? total : temp;
                } else {
                    if (arr[1] != fruits[fast]) {
                        arr[0] = fruits[fast-1];
                        arr[1] = fruits[fast];
                        temp = fast - slow;
                        total = total >= temp ? total : temp;
                        int t = fast - 1;
                        while (fruits[t] == arr[0]) {
                            t--;
                        }
                        slow = t+1;
                    } else {
                        temp = fast - slow + 1;
                        total = total >= temp ? total : temp;
                    }
                }
            } else {
                temp = fast - slow + 1;
                total = total >= temp ? total : temp;
            }
        }
    }
    return total;
}

int main() {
    int nums[] = {1,2,1};
    printf("%d\n",totalFruit(nums,3));
    return 0;
}
