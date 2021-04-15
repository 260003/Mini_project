#include <stdio.h>
//#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include "fun.h"
void menu(void)
{
    char option;

    int num_acc=0;
    while(1)
    {
       printf("\n***** Welcome to Bank Application *****\n");
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) ");
       printf("to continue : ");

        option = getch();
        printf("%c \n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': Account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
        }
    }
    return 0;
}
void fordelay(int y)
{   int x,z;
    for(x=0;x<y;x++)
         z=x;
}


int main()
{
    int exits;
    char pass[15],password[15]="mini_project";
    int x=0;
    printf("\n\n\t\tEnter the Uniqe ID to login:");
    scanf("%s",pass);

    if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(x=0;x<=6;x++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&exits);
            if (exits==1)
                    {

                        system("cls");
                        main();
                    }

            else if (exits==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}
