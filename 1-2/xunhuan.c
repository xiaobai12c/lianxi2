#include <stdio.h>

int main(){

    int ret,ch;
    char password[20]={0};
    printf("请输入密码：\n");
    scanf("%s", password);

    while((ch=getchar())!='\n'){
        ;
    }

    printf("请确认(Y/N):");
    ret=getchar();

    if(ret=='Y')
        printf("确认成功\n");
    else
        printf("取消确认\n");

    return 0;
}




// int main(){

//     int ch;
//     while((ch=getchar()) !=EOF){     //EOF   ctrl+z   文件结束标志
//         putchar(ch);
//     }


//     return 0;
// }
