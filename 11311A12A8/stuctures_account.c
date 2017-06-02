/*program to exwcute the account details in structures
 * name:s.vivek roshan
 * roll num:11311A12A8
 * class:F2*/
#include<stdio.h>
struct account
{
	int account_num;
	char account_name[20];
	float balance;
};
int menu();
float bal_enq();
float deposit();
float withdraw();
main()
{
	int choice;
	float amt;
	int ch;
	struct account a;
	printf("enter acc no:\n");
        scanf("%d",&a.account_num);
        printf("enter acc holder name:\n");
        scanf("%s",&a.account_name);
        printf("enter acc bal:\n");
        scanf("%f",&a.balance);
	while((choice=menu())!=4)
{
	switch(choice)
	{
		case 1:bal_enq();break;
		case 2:deposit();break;
		case 3:withdraw();break;
		case 4:printf("exit");break;
	}
}
return 0;
}
int menu()
{
	int option;
	printf("1.balance enquiry\n 2.deposit\n 3.withdraw\n 4.exit");
        printf("enter ur choice:\n");
	scanf("%d",&option);
	return option;
}
float bal_enq(struct account a)
{
	printf("the available balance is %f\n",a.balance);
return a.balance;
}
float deposit(struct account a)
{
	float amt;
	printf("enter amt:\n");
        scanf("%f",&amt);
	a.balance=a.balance+amt;
	printf("balance is %f\n",a.balance);
return a.balance;
}
float withdraw(struct account a)
{
	float amt;
	printf("enter amt:\n");
	scanf("%f",&amt);
	a.balance=a.balance-amt;
	printf("balance is %f\n",a.balance);
return a.balance;
}

