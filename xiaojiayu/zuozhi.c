#include <stdio.h>

int main(){
    // char *str = "hello";
    char str[] = "hello";
    printf("%p %p %p\n",str,&(*str),*(&str));
}
