/* 				PIZZA CORNER
 NAME: S.VIVEK ROSHAN		CLASS: IT F2		ROLL NO: 11311A12A8
				Date: 09-05-12*/
#include<stdio.h>
#include<iostream>

using namespace std;

class Pizza
{
	int noOfPizza;
	int noOfSandw;
	int noOfCokes;
	int cash;
public:
	Pizza()
	{
		noOfPizza=50;
		noOfSandw=100;
		noOfCokes=200;
		cash=0;
	}
	void display();
	void pizzaSale(int);
	void sandwSale(int);
	void cokeSale(int);
	void comboSale(int);
	void sales(int,int,int);
	int cashOnHand();
	int menu();
};

void Pizza::pizzaSale(int n)
{
	int money,cokes;
	if(noOfPizza>0)
	{
		if(n>noOfPizza)
		{
			cout<<n<<"pizzas are not available "<<endl;
			cout<<"can you adjust with "<<noOfPizza<<"? (Y/N): ";
			char q;
			cin>>q;
			if((q=='Y')||(q=='y'))
			{
				cout<<"serve "<<noOfPizza<<"Pizza(s)"<<endl;
				money=noOfPizza*50;
				cout<<"collect Rs."<<money<<endl;
				n=noOfPizza;
				cash+=money;
				cokes=n/2;
				if(cokes>0)
					if(noOfCokes>=cokes)
					{
						cout<<"also serve "<<cokes<<"cokes"<<endl;
						noOfCokes-=cokes;
					}
					else
					{
						cout<<"also serve "<<noOfCokes<<"cokes "<<endl;
						noOfCokes=0;
					}
				else
					cout<<"sorry cokes not available"<<endl;				}
			}
			else
			{
				cout<<"serve "<<n<<"pizza(s)"<<endl;
				money=n*50;
				cout<<"collect Rs."<<money<<endl;
				noOfPizza-=n;
				cash+=money;
				cokes=n/2;
				if(cokes>0)
					if(noOfCokes>=cokes)
					{
						cout<<"also serve "<<cokes<<"cokes"<<endl;
						noOfCokes-=cokes;
					}
					else
					{
						cout<<"also serve"<<noOfCokes<<"cokes"<<endl;
						noOfCokes=0;
					}
				else
					cout<<"sorry cokes out of stock"<<endl;
				}
			}
			else
				cout<<"sorry pizza is not available"<<endl;
}

void Pizza::sandwSale(int n)
{
        int money,cokes;
        if(noOfSandw>0)
        {
                if(n>noOfSandw)
                {
                        cout<<n<<"sandwiches are not available "<<endl;
                        cout<<"can you adjust with "<<noOfSandw<<"? (Y/N): ";
                        char q;
			cin>>q;
                        if((q=='Y')||(q=='y'))
                        {
                                cout<<"serve "<<noOfSandw<<"Sandwiches"<<endl;
                                money=noOfSandw*20;
                                cout<<"collect Rs."<<money<<endl;
                                n=noOfPizza;
                                cash+=money;
                                cokes=n/5;
                                if(cokes>0)
                                        if(noOfCokes>=cokes)
                                        {
                                                cout<<"also serve "<<cokes<<"cokes"<<endl;
                                                noOfCokes-=cokes;
                                        }
                                        else
                                        {
                                                cout<<"also serve "<<noOfCokes<<"cokes "<<endl;
                                                noOfCokes=0;
                                        }
                                else
                                        cout<<"sorry cokes not available"<<endl;                                }
                        }
                        else
                        {
   				cout<<"serve "<<n<<"sandwiches"<<endl;
                                money=n*20;
                                cout<<"collect Rs."<<money<<endl;
                                noOfSandw-=n;
                                cash+=money;
                                cokes=n/5;
                                if(cokes>0)
                                        if(noOfCokes>=cokes)
                                        {
                                                cout<<"also serve "<<cokes<<"cokes"<<endl;
                                                noOfCokes-=cokes;
                                        }
                                        else
                                        {
                                                cout<<"also serve"<<noOfCokes<<"cokes"<<endl;
                                                noOfCokes=0;
                                        }
                                else
                                        cout<<"sorry cokes out of stock"<<endl;
                                }
                        }
                        else
                                cout<<"sorry sandwiches is not available"<<endl;
}

void Pizza::cokeSale(int n)
{
	int money,cokes;
	if(noOfCokes>0)
	{
		if(n>noOfCokes)
		{
			cout<<"cokes not available as poer order"<<endl;
			cout<<"can you adjust with "<<noOfCokes<<"? (y/n)"<<endl;
			char q;
			cin>>q;
			if((q=='Y')||(q=='y'))
			{
				cout<<"serve "<<noOfCokes<<"Cokes";
				money=noOfCokes*25;
				cout<<"Collect Rs."<<money<<endl;
				cash+=money;
				noOfCokes=0;
			}
		else
		{
			cout<<"serve "<<n<<" cokes";
			money=n*25;
			cout<<"Collect Rs. "<<money<<endl;
			cash+=money;
			noOfCokes-=n;
		}
	}
	else
		cout<<"sorry no cokes available"<<endl;
	}
}
	

void Pizza::display()
{
	cout<<"	ITEMS      STOCK AVAILABLE	        CHARGES"<<endl;
	cout<<"1. Pizzzas    "<<noOfPizza<<"   	      @Rs.50/- each"<<endl;
        cout<<"2. Sandwiches "<<noOfSandw<<"  	      @Rs.20/- each"<<endl;
        cout<<"3. Cokes      "<<noOfCokes<<"	      @Rs.25/- each"<<endl;
	cout<<"4.       	COMBO SALE				   "<<endl;
	cout<<" 2 pizzas + 5 sandwiches + 2 cokes"<<" @Rs.175/- only"<<endl;
	cout<<"		BONUS OFFER				    "<<endl;
	cout<<" Buy 2 Pizza's get a Coke free"<<endl;
	cout<<" Buy 5 sandwiches get a coke free"<<endl;
}

int Pizza::cashOnHand()
{
	return cash;
}

void Pizza::comboSale(int n)
{
	int money,p,c,s,min;
	if((noOfPizza>=n*2) && (noOfSandw>=n*5) && (noOfCokes>=n))
	{
		cout<<"serve "<<n<<" combo packs "<<endl;
		money=n*175;
		cout<<"collect Rs."<<money<<endl;
		cash+=money;
		noOfPizza-=2*n;
		noOfSandw-=5*n;
		noOfCokes-=n;
	}
	else
	{
		p=noOfPizza/2;
		s=noOfSandw/5;
		c=noOfCokes;
		min=((p<=s)?((p<=c)?p:c):((s<=c)? s:c));
		cout<<"sorry only  "<<min<<" combo's are available "<<endl;
		cout<<"can you adjust with "<<min<<" combo's  ?(y/n)"<<endl;
		char q;
		cin>>q;
		if((q=='Y')||(q=='y'))
		{
			cout<<"serve "<<min<<" combo packs"<<endl;
			money=min*175;
			cout<<"collect Rs. "<<money<<endl;
			cash+=money;
			noOfPizza-=min*2;
			noOfSandw-=min*5;
			noOfCokes-=min;
		}
	}
}

int Pizza::menu()
{
	int choice;
	display();
	cout<<"\n\n\t\t Menu Card"<<endl;
	cout<<"Place your order: "<<endl;
	cin>>choice;
	return choice;
}

int main()
{
	int ch,b;
	Pizza B;
	while((ch=B.menu())!=5)
	{
	switch(ch)
	{
		case 1: cout<<"enter the order of pizzas: ";
			cin>>b;
			B.pizzaSale(b);
			cout<<"\n";break;
                case 2: cout<<"enter the order of sandwiches: ";
                        cin>>b;
			B.sandwSale(b);
                        cout<<"\n";break;
                case 3: cout<<"enter the order of cokes: ";
                        cin>>b;
			B.cokeSale(b);
                        cout<<"\n";break;
                case 4: cout<<"enter the order of combo packs: ";
                        cin>>b;
			B.comboSale(b);
                        cout<<"\n";break;
                case 5:cout<<"\nThank you visit again\n"<<endl;break;
		default : cout<<"\n";
	}
	}
	return 0;
}

/*OUTPUT
         ITEMS      STOCK AVAILABLE              CHARGES
1. Pizzzas    50              @Rs.50/- each
2. Sandwiches 100             @Rs.20/- each
3. Cokes      200             @Rs.25/- each
4.              COMBO SALE
 2 pizzas + 5 sandwiches + 2 cokes @Rs.175/- only
                BONUS OFFER
 Buy 2 Pizza's get a Coke free
 Buy 5 sandwiches get a coke free


                 Menu Card
Place your order:
1
enter the order of pizzas: 3
serve 3pizza(s)
collect Rs.150
also serve 1cokes

        ITEMS      STOCK AVAILABLE              CHARGES
1. Pizzzas    47              @Rs.50/- each
2. Sandwiches 100             @Rs.20/- each
3. Cokes      199             @Rs.25/- each
4.              COMBO SALE
 2 pizzas + 5 sandwiches + 2 cokes @Rs.175/- only
                BONUS OFFER
 Buy 2 Pizza's get a Coke free
 Buy 5 sandwiches get a coke free


                 Menu Card
Place your order:
4
enter the order of combo packs: 8
serve 8 combo packs
collect Rs.1400

        ITEMS      STOCK AVAILABLE              CHARGES
1. Pizzzas    31              @Rs.50/- each
2. Sandwiches 60              @Rs.20/- each
3. Cokes      191             @Rs.25/- each
4.              COMBO SALE
 2 pizzas + 5 sandwiches + 2 cokes @Rs.175/- only
                BONUS OFFER
 Buy 2 Pizza's get a Coke free
 Buy 5 sandwiches get a coke free


                 Menu Card
Place your order:
5
*/

