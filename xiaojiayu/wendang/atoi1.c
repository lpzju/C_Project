/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
     char *str1 = "123world";
     int x = atoi(str1);
     printf("%d\n",x);
     printf("%d\n",atoi("world123"));
    printf("%d\n",atoi("  world123"));
    return 0;
}