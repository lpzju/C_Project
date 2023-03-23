/**
 * Created by lpzju on 2023/3/14 14:37
 */
//#include <stdio.h>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>

using namespace std;

void quick(int *nums, int left, int right) {
    int i = left;
    int j = right;
    int pivot = nums[left + (right-left)/2];
    while (i < j) {
        while (nums[i] < pivot) {
            i++;
        }
        while (nums[j] > pivot) {
            j--;
        }
        if (i <= j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) {
        quick(nums,left,j);
    }
    if (right > i) {
        quick(nums,i,right);
    }
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    int nums[] = {4,3,6,8,1,0,9,2,5,7};
    quick(nums,0,9);
    for (int num : nums) {
        cout << num << ", ";
    }
    cout << endl;
    return 0;
}