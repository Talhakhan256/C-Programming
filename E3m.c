#include<stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("\n===== menu driven calculator=====\n");
    printf("1.addition\n");
    printf("2.substraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("enter your choice(1-5):");
    scanf(%d,&choice);

    if(choice==5){
       printf("exiting program.goodbye!\n");
       return0;
       }

       printf("enter first number:");
       scanf("%f",&num1);
       printf("enter second number:");
       scanf("%f",&num2);

           switch(choice){
               case 1:
                   result=
                   printf("result=%.2f\n",result);
                   break;
                case 2:
                    result=num1-num2;
                    printf("reult=%.2f\n",result")
                    break;
                case3:
                    result=num1*num2;
                    printf("result=%.2f\n",result);
                    break;
                case4:
                   if (num2 !=0)
                       result= num1/num2;
                   else{
                       printf("error! divisionby zero not allowed.\n");
                       goto start;
                       }
                       printf("result=%.2f\n",result);
                       break;
                    default:
                        printf("invalid choice! please try again.\n");
                        break;
                    }
                    //
