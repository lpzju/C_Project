#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sortArr(int arr[],int len);
void print(int arr[],int len);

int main(){
    //猴子算法实现排序
    //意思是随机进行排序，直到顺序正常
    int arr[] = {5,3,6,4,7,1,9,8,0,2};
    int len = 10;
    int temp,t1,t2;
    srand((unsigned)time(NULL));
    while(sortArr(arr,len) != 1){
        print(arr,len);
        t1 = rand() % 10;
        t2 = rand() % 10;
        printf("t1 : %d , t2 : %d\n",t1,t2);
        temp = arr[t1];
        arr[t1] = arr[t2];
        arr[t2] = temp;
    }
    print(arr,len);
}

int sortArr(int arr[],int len){
    int count = 0;
    int i;
    for(i = 0;i<len-1;i++){
        if(arr[i] < arr[i+1]){
            count++;
        }
    }
    if(count == len-1){
        return 1;
    }else{
        return 0;
    }
}
void print(int arr[],int len){
    int i;
    for(i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
