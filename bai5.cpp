#include<stdio.h>
#include<math.h>
int main(){
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int cnt25=0;int cnt50=0;
   for(int i=0;i<n;i++){
    if(a[i]==25) cnt25++;
    else if(a[i]==50){
        if(cnt25==0){
            printf("NO");
            return 0;
        }
        cnt25--;
        cnt50++;
    }
    else
    if(cnt25==0||cnt25*25+cnt50*50<75){
        printf("NO");
        return 0;
    }
    if(cnt50!=0){
        cnt25--;
        cnt50--;
    }
    else{
        cnt25-=3;
    }
   }
   printf("YES");
}
