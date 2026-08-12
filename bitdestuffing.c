#include<stdio.h>
void main(){
int ip_frame[100];
int op_frame[100];
int i,n, j=0,count=0;
printf("enter frame length");
scanf("%d",&n);
printf("enter input frame(0's and 1's only):\n");
for(i=0;i<n;i++){
scanf("%d",&ip_frame[i]);
}
//Bit Destuffing logic
for(i=0;i<n;i++){
op_frame[j++]=ip_frame[i];
if(ip_frame[i]==1){
count++;
if(count==5){
i++;
count=0;//reset count to 0
}
}
else{
count=0;
}
}
printf("\n After destuffing the frame is :\n");
for(i=0;i<j;i++){
printf("%d",op_frame[i]);
}
printf("\n");
}










