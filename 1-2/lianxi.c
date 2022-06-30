#include <stdio.h>
#include <string.h>

int main(){

    char password[20] ={0};
    int i;

    for(i=0; i<3; i++){
        printf("ÇëÊäÈëÃÜÂë£º\n");
        scanf("%s", password);

        if(strcmp(password, "123456") ==0){
        printf("µÇÂ½³É¹¦\n");
        break;

    }
    }
    
    return 0;
}





// int main(){

//     char arr1[] ="welcome to my world!!!";
//     char arr2[] ="######################";

//     int left =0;
//     int right =strlen(arr1)-1;

//     while(left <= right){
//         arr2[left] =arr1 [left];
//     arr2[right] =arr1 [right];
//     printf("%s\n", arr2);
//     left++;
//     right--;

//     }
    

//     return 0;
// }