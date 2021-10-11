#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int maxVal(int arr[],int len){
int max=arr[0];// 5 5 6 8 89 8
for(int i = 0;i < len;i++){
    if(arr[i] > max)
        max = arr[i];
    
}
return max;
}
int minVal(int arr[],int len){
int min = arr[0];
for(int i = 1;i < len; i++){
    if(arr[i] < min)
        min = arr[i];
}
return min;
}
int second_large_num(int min,int max,int arr[],int len){
for(int i = 0; i < len;i++){
    if(arr[i] > min && arr[i] < max ){
        min = arr[i]; // 32  45  67 89
    }
}
return min;
}
int main() {
int array[10]={32,12,45,67,15,89,45,67,234,56};
int length=sizeof(array) / sizeof(array[0]);

printf("Max value=%d\n",maxVal(array,length));

printf("\nMin value=%d\n",minVal(array,length));

printf("second large number:%d",second_large_num(minVal(array,length),maxVal(array,length),array,length));
    
/*Output Max val=234  
         Min val=12
         second large number=89
*/
    return 0;
}
