#include<stdio.h>
#include<math.h>
int Max(int a,int b){
  return (a>b) ? a : b;
}
int main(){
  int n;scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int cnt=1;int res=0;int idx;int b[n];int dem=1;
  for(int i=1;i<n;i++){
    if(a[i]>a[i-1]){
        cnt++;
    }
    else{
        cnt=1;
    }
    if(cnt>res){
        res=cnt;
        b[0]=i-res+1;
    }
    else if(cnt==res){
        b[dem]=i-res+1;
        dem++;
    }
  }
  printf("%d\n",res);
  for(int i=0;i<dem;i++){
    for(int j=0;j<res;j++){
        printf("%d ",a[b[i]+j]);
    }
    printf("\n");
  }


}

