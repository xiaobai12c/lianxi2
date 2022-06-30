#include <stdio.h>


int main(){
    int i, add=0, sum=1;
    int n;
    
    
    // for(n=1; n<=3; n++){

    //     sum=1;      
    //     for(i=1; i<=n; i++){
    //     sum=sum*i;
        
    // }
    //     add=add+sum;

    // }
    

    for(n=1; n<=3; n++){
        sum=sum*n;
        add=add+sum;
    }
     printf("%d ", add);
     return 0;
}


// int main(){
//     int x,y;
//     for(x=0, y=0;x<2 && y<5; ++x, y++){
//         printf("hehe\n");
//     }
//     return 0;
// }
// int main(){
//     int i;
//     for(;;){
//         i++;
//         printf("%d ", i);
//         printf("hehe\n");
//     }
//     return 0; 
// }
//for循环中初始化、判断、调整都可以省略。
//但是：for循环的判断部分如果被省略，那判断条件就是恒为真