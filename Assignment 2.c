#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int login(){

    int correctpin= 1234;
    int pin;

        printf("please enter pin: " );
        scanf("%d", &pin);

        if(pin == correctpin){
            printf("login successful\n");
            return 1;

        }else {
            printf("incorrect pin entered \n" );
            return 0;
        }

    }
void deposit(double *balance){
    int dep_amount ;
    printf("enter amount to deposit: \n");
    scanf("%d",&dep_amount);

    if (dep_amount <= 0){
        printf("invalid amount \n");
        return;
    }

    *balance+= dep_amount;
    printf("deposit successful: your new balance is: %.2f \n",*balance);

}
void withdrawal(double *balance){
    int withdraw_amount;
    printf("enter amount to withdraw: \n");
    scanf("%d", &withdraw_amount);

    if(withdraw_amount <= 0){
        printf("INVALID AMOUNT!!");
    }
    *balance -= withdraw_amount;
    printf("withdrawal successful: your new balance is: %.2f \n",*balance);
}
void checkBalance(double balance){
    printf("your balance is: %.2f \n",balance);
}

int exit_program(){
    printf("thank you for using our ATM \n");
    exit(0);
}
int choices(double balance){
    while (1){
        int option;
        printf("1. balance inquiry:\n");
        printf("2. deposit \n");
        printf("3. withdraw\n");
        printf("4. exit \n");

        printf("please select an option: \n");
        scanf("%d", &option);

        switch (option){
        case 1:
            checkBalance(balance);
            break;
        case 2:
            deposit(&balance);
            break;
        case 3:
            withdrawal(&balance);
            break;
        case 4:
            exit_program();
            break;
        }

    }

}

int main(){
    double balance = 10000;
    int count = 0;
    while (count < 3){
        int islogged_in =login();
        if( islogged_in == 1){
            printf("successful login: \n");
            break;
        }
        else {
            count ++;
        }
        if (count == 3){
            return 0;
        }
    }
    choices(balance);
}
