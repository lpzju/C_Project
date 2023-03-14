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

void quickSort(int *arr,int left,int right) {
    int i = left;
    int j = right;
    int pivot = arr[left+(right-left)/2];
    while(i < j) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) {
        quickSort(arr,left,j);
    }
    if(right > i) {
        quickSort(arr,i,right);
    }
}

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    int nums[] = {4,2,7,9,5,6,0,1,3,8};
    quickSort(nums,0,9);
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
    return 0;
}