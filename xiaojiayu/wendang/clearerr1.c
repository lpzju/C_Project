/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int ch;

    if ((fp = fopen("file.txt", "w")) == NULL)
    {
        printf("打开文件失败！\n");
        exit(EXIT_FAILURE);
    }

    ch = fgetc(fp);
    if (ferror(fp))
    {
        printf("读取文件file.txt时出错1...\n");
    }
    clearerr(fp);

    if (ferror(fp))
    {
        printf("读取文件file.txt时出错2...\n");
    }

    fclose(fp);

    return 0;
}