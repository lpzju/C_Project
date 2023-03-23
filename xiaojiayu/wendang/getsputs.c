/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 使用fgets和fputs
    FILE *fp;
    if ((fp = fopen("new1.txt","w")) == NULL) {
        printf("dakaishibai\n");
        exit(EXIT_FAILURE);
    }
    fputs("Line one: hello\n",fp);
    fputs("Line one: hello\n",fp);
    fputs("Line one: hello\n",fp);
    fputs("Line one: hello\n",fp);
    fclose(fp);
    if ((fp = fopen("new1.txt","r")) == NULL) {
        printf("dakaishibai\n");
        exit(EXIT_FAILURE);
    }
    char buffer[1024];
    while (!(feof(fp))) {
        fgets(buffer,1024,fp);
        printf("%s\n",buffer);
    }
    return 0;
}