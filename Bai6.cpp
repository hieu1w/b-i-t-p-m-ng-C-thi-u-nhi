#include<stdio.h>
#include<math.h>
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    return GCD(b,a%b);
}
int main(){
   int n;scanf("%d",&n);
   int a[n];int cnt=0;
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(GCD(a[i],a[j])==1){
            cnt++;
        }
    }
   }
   printf("%d",cnt);
}
