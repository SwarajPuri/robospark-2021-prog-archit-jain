#include <string.h>
#include<stdio.h>
struct details {
int A_num;
char Name[10];
int Balance;

};

void func(struct details *p,int n); // Question 1 function written  at end

// Transcation Code
void trans(struct details *p,int n)
{   int id;
    printf("Enter Account Number\n");
    scanf("%d",&id);
    int check=1;// to check if account number enter matches or not
    for(int i=0;i<n;i++)
    {
        if(p[i].A_num==id)
        {   int option;
            int pay;
            int balance=p->Balance;
            int loop=1;
            check=1;
            while(loop){
            printf("Enter 1 for Deposit and 0 for Withdrawal\n");
            scanf("%d",&option);
            switch(option)
            {
                case 1: printf("Enter Amount to be deposited\n");
                        scanf("%d",&pay);
                        balance+=pay;
                        printf("Updated Balance is %d\n",balance);
                        loop=0;
                        break;
                case 0:printf(" Enter Amount to be withdrawn:\n");
                        scanf("%d",&pay);
                        if(balance>=pay)
                        {   balance-=pay;
                            printf("*************Withdrawn Successfully*************\n ");
                            printf("Updated balance is : %d\n",balance);
                        }
                        loop=0;
                        break;
                default:printf("Wrong Input\n");
            }

            }
        }

    }

    // If user enters wrong account number
    if(check){
            printf("Wrong Input");
        }
}
/////********************************** Main************************************
void main()
{

//Data for Code
struct details arr[10];
arr[0].A_num=950001,arr[0].Balance=500;
arr[1].A_num=950002,arr[1].Balance=50;
arr[2].A_num=950003,arr[2].Balance=60;
arr[3].A_num=950004,arr[3].Balance=250;
arr[4].A_num=950005,arr[4].Balance=300;
arr[5].A_num=950006,arr[5].Balance=150;
arr[6].A_num=950007,arr[6].Balance=90;
arr[7].A_num=950008,arr[7].Balance=70;
arr[8].A_num=950009,arr[8].Balance=100;
arr[9].A_num=950010,arr[9].Balance=300;
strcpy(arr[0].Name,"Cl1");
strcpy(arr[1].Name,"Cl2");
strcpy(arr[2].Name,"Cl3");
strcpy(arr[3].Name,"Cl4");
strcpy(arr[4].Name,"Cl5");
strcpy(arr[5].Name,"Cl6");
strcpy(arr[6].Name,"Cl7");
strcpy(arr[7].Name,"Cl8");
strcpy(arr[8].Name,"Cl9");
strcpy(arr[9].Name,"Cl10");




func(arr,10); // for question a
trans(arr,10);// for question b
}
//***********************************func()*********************************
 func(struct details *p,int n)
 {
    printf("Account Info for Balance less than 100 \n");
    for(int i=0;i<n;i++)
    { int balance=p->Balance;
       if(balance<100)
        printf("Account numbers:%d Name: %s Balance:%d\n",p->A_num,p->Name,balance);
        ++p;
    }
}

