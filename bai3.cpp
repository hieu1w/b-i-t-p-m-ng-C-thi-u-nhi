#include<stdio.h>
#include<conio.h>
int main(){
 int n;scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
  printf("%d ",a[0]);
  for(int i=1;i<n;i++){
    if(a[i]>a[i-1]){
       printf("%d ",a[i]);
    }
  }
}

