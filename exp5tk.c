#include<stdio.h>

    //Talha khan

    int factorial_1(int num) {
    int fact=1;
    for(int i=1; i<=num;i++) {
    fact=fact*i;

}return fact;
}
int factorial_2(int num){
   if(num==0||num==1){
   return 1;
   }else{
   return num*factorial_2(num-1);
   }
}
int main(){
    int a=4;
    printf("factorial of %d is %d",a,factorial_(a));

return 0;

}
