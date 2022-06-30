#include <stdio.h>


//二分查找
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int gs =sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right =gs-1;
    

    while(left <= right){
        int mid =(left+right)/2;
        if(arr[mid] < k){
        left=mid+1;
    }
    else if(arr[mid] > k){
        right=mid-1;
    }
    else{
        printf("找到，下标为：%d", mid);
        break;
    }
    }


        if(left>right)
            printf("找不到");
    

    return 0;
}









// int sz = sizeof(arr)/sizeof(arr[0]);   //总数组的字节数除以单个成员的字节数
//                                        //数组有多少个元素