#include <stdio.h>

int main(){

    int ret,ch;
    char password[20]={0};
    printf("���������룺\n");
    scanf("%s", password);

    while((ch=getchar())!='\n'){
        ;
    }

    printf("��ȷ��(Y/N):");
    ret=getchar();

    if(ret=='Y')
        printf("ȷ�ϳɹ�\n");
    else
        printf("ȡ��ȷ��\n");

    return 0;
}




// int main(){

//     int ch;
//     while((ch=getchar()) !=EOF){     //EOF   ctrl+z   �ļ�������־
//         putchar(ch);
//     }


//     return 0;
// }
