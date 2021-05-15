#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int MAX_VAlUE(int arr[],int len){
int max=arr[0];// 5 5 6 8 89 8
for(int i=0;i<len;i++){
    if(arr[i] > max){
        max=arr[i];
    }
}
return max;
}
int MIN_VALUE(int arr[],int len){
int min=arr[0];
for(int i=1;i<len;i++){
    if(arr[i] < min){
        min=arr[i];
    }
}
return min;
}
void second_large_num(int min,int max,int arr[],int len){
for(int i=0;i<len;i++){
    if(arr[i] > min && arr[i] < max ){
        min=arr[i]; // 32  45  67 89
    }
}
printf("\nSecond big number=%d\n",min);
}
int main() {
int array[10]={32,12,45,67,15,89,45,67,234,56};
int length=sizeof(array) / sizeof(array[0]);

int max_val=MAX_VAlUE(array,length);

printf("Max value=%d\n",max_val);

int min_val=MIN_VALUE(array,length);

printf("\nMin value=%d\n",min_val);

second_large_num(min_val,max_val,array,length);
    
/*Output Max val=234  
         Min val=12
         second large number=89
*/
    return 0;
}
