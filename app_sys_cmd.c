#include <stdio.h>
#include "app_sys_cmd.h"

void help_cmd_app_test(void)
{
    printf("�÷�: app_test \n");
    printf("����: \n");
    printf("��ʾ: \n");
    printf("����: app_test \n");
}

int cmd_app_test(int argc, char *argv[])
{
    if (argc != 1)
    {
        help_cmd_app_test();
        return -1;
    }
    printf("This is test cmd\n");
    printf("����һ����������\n");
    return 0;
}