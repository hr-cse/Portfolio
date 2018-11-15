#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  int f=1,num;
  freopen("in.txt","r",stdin);
  scanf("%d",&num);
  while(num>=1){
      f=f*num;
      num--;
  }
  printf("Factorial value is: %d" ,f);
  return 0;
}


////
//
//    int i,n;
//    scanf("%d",&n);
//    freopen("output.txt","w",stdout);
//    for(i=1;i<=n;i++){
//          printf("%d ",i);
//    }
//......................................
//    int a,b,sum=0;
//    freopen("input1.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//    scanf("%d %d",&a,&b);
//    sum = a+b;
//    printf("%d",sum);
