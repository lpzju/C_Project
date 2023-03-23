/**
 * Created by lpzju on 2023/3/15 18:54
 */
#include <stdio.h>
#include <string.h>

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
     char arr[] = "hello";
     char temp[200];
     for (int i = 0; i < 5; i++) {
         memcpy(temp,arr,5);
         temp[5] = '\0';
         printf("%s\n",temp);
     }
    return 0;
}