#include <stdio.h >

int totalFruit(int* fruits, int fruitsSize){
    int fast = 0;
    int slow = 0;
    int total = 0;
    int pos1 = 0;
    int pos2 = 0;
    int arr[] = {0,0};
    for (fast = 0; fast < fruitsSize; fast++) {
        if (fruits[fast] == 0) {
            int temp = fast - slow;
            total = total > temp ? total : temp;
            arr[0] = 0;
            arr[1] = 0;
        } else {
            if (arr[0] == 0) {
                arr[0] = fruits[fast];

            } else if (arr[1] == 0) {
                arr[1] = fruits[fast];
            } else {
                if ((arr[0] != fruits[fast]) || (arr[1] != fruits[fast])) {
                    int temp = fast - slow;
                    total = total > temp ? total : temp;
                    arr[0] = arr[1];
                    arr[1] = fruits[fast];
                    int t = fast-1;
                    while (fruits[t] == arr[0]) {
                        t--;
                    }
                    slow = t + 1;
                } else {
                    int temp = fast - slow + 1;
                    total = total > temp ? total : temp;
                }
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
