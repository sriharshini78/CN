#include<stdio.h>
int main(){
int f1[100],f2[100],i,j=0,n;
int count=0;
printf("enter the data length: ");
scanf("%d",&n);
printf("enter the input: ");
for(i=0;i<n;i++){
 scanf(" %d",&f1[i]);
 }
 for(i=0;i<n;i++){
 f2[j++]=f1[i];
 if(f1[i]==1){
 count++;
 if(count==5){
 f2[j++]=0;
 count=0;
 }
 }
 else{
 count=0;
 }
 }
 printf("after bitstuffing:");
for(i=0;i<j;i++){
 printf("%d",f2[i]);
 }
 printf("\n");
 }

