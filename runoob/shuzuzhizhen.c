/**
 * Created by lpzju on 2023/3/13 20:37
 */
#include <stdio.h>
//#include <iostream>
//#include <list>
//#include <map>
//#include <set>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <queue>
//#include <iterator>
//#include <stack>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
     // 数组指针
     int arr[2][2] = {1,2,3,4};
     // 二维数组就是一个数组指针
     // 数组指针是一个指针，指向一个数组
     // 先看指针数组，指针数组是一个数组，里面存放的都是指针
     char * str[3] = {"hello","world","nihao"};
     // 再看数组指针
     int a[] = {1,2,3};
//     int (*p)[] = &a;
     int (*p2)[] = arr;
     printf("%d,",**p2);
     printf("%d\n",arr[0][0]);
     printf("arr的首地址:%p,",&(arr[0][0]));
    printf("arr的首地址:%p\n",*p2);
    printf("%p\n",arr[1]);
    printf("arr第一个元素的地址:%p,",&(arr[0][1]));
//    printf("arr的首地址:%p\n",&(*p2+1)); // 暂时没理解这个地方的报错
//     printf("%d,",*(*p2+1));
//     printf("%d,",*((*p2+1)+1));
    return 0;
}