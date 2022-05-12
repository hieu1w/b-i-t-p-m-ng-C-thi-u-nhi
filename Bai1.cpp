#include<stdio.h>
#include<math.h>
int check(int n){
 for(int i=2;i<=sqrt(n);i++){
    if (n%i==0){
        return 0;
    }
 }
 return 1;
}
int toanle(int n){
    int r;
    while(n){
        r=n%10;
        if(r%2==0) return 0;
        n/=10;
    }
    return 1;
}
int sodep(int n){
    int cnt1=0;int cnt9=0;int r;
    while(n){
        r=n%10;
        if(r==1) cnt1++;
        if(r==9) cnt9++;
        n/=10;
    }
    return cnt1*cnt9;
}

int main(){
   printf("Hello c");
   int n;scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
   }
   /*a,tìm số max min;
   int max=a[0];int min=a[0];
   for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
    if(a[i]<min){
        min==a[i];
    }
   }
   printf("%d %d",max,min);*/
   /*b đếm số lượng chẵn lẻ có trong mảng
   int chan=0;int le=0;
   for(int i=0;i<n;i++){
    if(a[i]%2==0){
        chan++;
    }
    if(a[i]%2!=0){
        le++;
    }
   }
   printf("%d %d",chan,le);*/
   /*c liệt kê các số nguyên tố có trong mảng
   for(int i=0;i<n;i++){
    if(check(a[i])==1){
        printf("%d ",a[i]);
    }
   }*/
   /*d in ra chỉ số đầu tiên và cuối cùng của của số lớn nhất và nhỏ nhất trong mảng
   int max=a[0];int min=a[0];int idx1,idx2,idx3,idx4;
   for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
        idx1=i;
    }
    if(a[i]>=max){
        max=a[i];
        idx2=i;
    }
    if(a[i]< min){
        min=a[i];
        idx3=i;
    }
    if(a[i]<=min){
        min=a[i];
        idx4=i;
    }
   }
   printf("%d %d %d %d ",idx1,idx2,idx3,idx4);*/
   /*e tìm và in ra số lớn nhất hoặc số lớn thứ 2 trong mảng
   int max1=a[0];int max2=a[0];
   for(int i=0;i<n;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2){
        max2=a[i];
    }
   }
   printf("%d %d",max2,max1);*/
   /*f tìm số lớn nhất và lớn thứ 2 đk số max2!= max1 k có max2 thì in -1
   int max1=a[0];int max2=-1;
   for(int i=0;i<n;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2&&max1!=a[i]){
        max2=a[i];
    }
   }
    printf("%d %d",max1,max2);*/
    /*g đếm các số toàn lẻ
    int count=0;int b[n];
    for(int i=0;i<n;i++){
    if(toanle(a[i])==1){
        b[count]=a[i];
        count++;
    }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        printf("%d ",b[i]);
    }*/
    /*h tìm các phần tử mà nó có ít nhất 2 phần tử lớn hơn nó
    int max1=a[0];int max2=a[0];
   for(int i=0;i<n;i++){
    if(a[i]>max1){
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2){
        max2=a[i];
    }
   }
   for(int i=0;i<n;i++){
    if(a[i]<max2){
        printf("%d ",a[i]);
    }
   }*/
   /*i một số đẹp là số có số 1 và 9 trong số đó tìm và in ra số đpẹ nào
    for(int i=0;i<n;i++){
    if(sodep(a[i])){
        printf("%d ",a[i]);
    }
    }*/
    /*j liệt kê các phần tử có ít nhất 1 phần tử bên cạnh trái dấu nó
    if(a[0]*a[1]<0)
    {
        printf("%d ",a[0]);
    }
    if(a[n-1]*a[n-2]<0){
        printf("%d ",a[n-1]);
    }
    for(int i=1;i<n-1;i++){
        if(a[i]*a[i-1]<0||a[i]*a[i+1]<0){
            printf("%d ",a[i]);
        }
    }*/
    /*k kiểm tra mảng có đối xứng hay không ! nếu có in "YES" không thì in "NO"
    int mid=n/2;
    for(int i=0;i<=mid;i++){
        if(a[i]!=a[n-i-1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");*/





}
