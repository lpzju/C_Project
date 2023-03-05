#include <stdio.h>
#include <time.h>

void fun1(long long n) {
    long long k = 0;
    for (long long i = 0; i < 0; i++) {
        k++;
    }
}

void fun2(long long n) {
    long long k = 0;
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            k++;
        }
    }
}

void fun3(long long n) {
    long long k = 0;
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j = j * 2) {
            k++;
        }
    }
}

int main() {
    long long n;
    printf("请输入正整数:\n");
    scanf("%lld",&n);
    clock_t start, end;
    start = clock();
    // fun1(n);
    fun2(n);
    // fun3(n);
    end = clock();
    printf("%.4f\n",(double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}
