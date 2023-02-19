#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bogo_sort(int arr[],int length);

void print(int arr[],int length);

int sortArr(int arr[],int length);

void change(int arr[],int length);

int main(){
    int arr[] = {3,6,4,8,7,5,1,0,2,9};
    time_t begin,end;
    int i,length;

    begin = time(NULL);

    length = sizeof(arr)/sizeof(arr[0]);
    printf("排序前的结果:\n");
    print(arr,length);
    bogo_sort(arr,length);
    printf("排序后的结果:\n");
    print(arr,length);
    // int testArr1[] = {1,2,3,4,5};
    // int testArr2[] = {1,2,6,4,5};
    // printf("sort : %d\n",sortArr(testArr2,5));
    end = time(NULL);
    printf("time : %ld\n",end-begin);
    change(arr,length);
    print(arr,length);
    return 0;
}

void print(int arr[],int length){
    int i;
    for(i = 0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bogo_sort(int arr[],int length){
    while(sortArr(arr,length) != 1){
        change(arr,length);
    }
}

int sortArr(int arr[],int length){
    int count = 0;
    int i;
    for(i = 0;i<length-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
    }
    if(count == length-1){
        return 1;
    }else{
        return 0;
    }
}

void change(int arr[],int length){
    int i,temp;
    for(i = 0;i<100;i++){
        srand((unsigned)time(NULL));
        int randNum1 = rand() % length;
        int randNum2 = 9 - randNum1;
        temp = arr[randNum1];
        arr[randNum1] = arr[randNum2];
        arr[randNum2] = temp;
    }
    // print(arr,length);
}
