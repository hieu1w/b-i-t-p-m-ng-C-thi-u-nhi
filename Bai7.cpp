#include<stdio.h>
#include<math.h>
int Max(int a,int b){
    return (a>b)? a : b;
}
int main(){
 int n;scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 int max1=a[0];int max2=a[0];int min1=a[0];int min2=a[0];
 for (int i=0;i<n;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2){
        max2=a[i];
    }
 }
 for (int i=0;i<n;i++){
    if(a[i]<min1){
        min2=min1;
        min1=a[i];
    }
    else if(a[i]<min2){
        min2=a[i];
    }
 }
 printf("%lld",Max(max1*max2,min1*min2));

}
