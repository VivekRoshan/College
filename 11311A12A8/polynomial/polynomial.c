                                 POLYNOMIAL
/*
 *NAME: S.Vivek Roshan                                        CLASS:IT F2
 * ROLL:11311A12A8*/
#include<stdio.h>
#include<stdlib.h>

struct term
{
	float coefficient;
	int exponent;
	struct term *next;
	struct term *prev;
};

struct polynomial
{
	struct term *first;	
};

void initPoly(struct polynomial *p)
{
	p->first = NULL;
}
void addTerm(struct polynomial *p,float c,int e)
{
	struct term *temp,*mover;
	temp = (struct term*)malloc(sizeof(struct term));
	temp->coefficient = c;
	temp->exponent = e;
	temp->prev = NULL;
	temp->next = NULL;
	if(p->first == NULL)
		p->first = temp;
	else
	{
		mover = p->first;
		if(mover->exponent <e)
		{
			p->first = temp;
			temp->next = mover;
			mover->prev = temp;
		}
		else
		{
			while(mover!=NULL)
			{
				if(mover->exponent <=e)
					break;
				mover = mover->next;
			}
			if(mover == NULL)
			{
				mover = p->first;
				while(mover->next !=NULL)
					mover = mover->next;
				temp->prev = mover;
				mover->next = temp;
			}
			else if(mover->exponent==e)
				mover->coefficient += c;
			else
			{
				temp->prev = mover->next;
				temp->next = mover;
				mover->prev->next = temp;
				mover->prev = temp;
			}
		}
	}
}

struct polynomial readPoly()
{
	struct polynomial p;
	float c;
	int e;
	initPoly(&p);
	printf("Enter coefficient: ");
	scanf("%f",&c);
	while(c)
	{
		printf("Enter exponent: ");
		scanf("%d",&e);
		addTerm(&p,c,e);
		printf("Enter Coefficient: ");
		scanf("%f",&c);
	}
	return p;
}

void display(struct polynomial p)
{
	struct term *temp;
	temp = p.first;
	while(temp!=NULL)
	{
		printf("(%.2f x^%d)+ ", temp->coefficient,temp->exponent);
		temp = temp->next;
	}
	printf("\b\b\n");
}

struct term product(struct term u,struct term v)
{
	struct term t;
	t.coefficient = u.coefficient * v.coefficient;
	t.exponent = u.exponent + v.exponent;
	t.next = NULL;
	t.prev = NULL;
	return t;
}

struct polynomial sum(struct polynomial p,struct polynomial q)
{
	struct polynomial r;
	initPoly(&r);
	struct term *t;
	t = p.first;
	while(t!=NULL)
	{
		addTerm(&r,t->coefficient,t->exponent);
		t = t->next;
	}
	return r;
}

struct polynomial polyProduct(struct polynomial p,struct polynomial q)
{
	struct polynomial r;
	struct term *pterm,*qterm,rterm;
	initPoly(&r);
	pterm = p.first;
	while(pterm!=NULL)
	{
		qterm = q.first;
		while(qterm!=NULL)
		{
			rterm = product(*pterm,*qterm);
			addTerm(&r,rterm.coefficient,rterm.exponent);
			qterm = qterm->next;
		}
		pterm = pterm->next;
	}
	return r;
}

int main()
{
	struct polynomial p,q,r,s;
	printf("Ist polynomial: \n");
	p = readPoly();
	printf("IInd Polynomial: \n");
	q = readPoly();
	r = sum(p,q);
	s = polyProduct(p,q);
	display(p);
	display(q);
	display(r);
	display(s);
	return 0;
}







/*         OUTPUTS
[11311A12A8@itlab polynomial]$ gcc polynomial.c
[11311A12A8@itlab polynomial]$ ./a.out
Ist polynomial:
Enter coefficient: 4
Enter exponent: 3
Enter Coefficient: 2
Enter exponent: 2
Enter Coefficient: 5
Enter exponent: 1
Enter Coefficient: 7
Enter exponent: 0
Enter Coefficient: 0
IInd Polynomial:
Enter coefficient: 6
Enter exponent: 7
Enter Coefficient: 5
Enter exponent: 4
Enter Coefficient: 2
Enter exponent: 3
Enter Coefficient: 5
Enter exponent: 2
Enter Coefficient: 5
Enter exponent: 0
Enter Coefficient: 0
(4.00 x^3)+ (2.00 x^2)+ (5.00 x^1)+ (7.00 x^0)+
(6.00 x^7)+ (5.00 x^4)+ (2.00 x^3)+ (5.00 x^2)+ (5.00 x^0)+
(4.00 x^3)+ (2.00 x^2)+ (5.00 x^1)+ (7.00 x^0)+
(24.00 x^10)+ (12.00 x^9)+ (30.00 x^8)+ (62.00 x^7)+ (18.00 x^6)+ (49.00 x^5)+ (55.00 x^4)+ (59.00 x^3)+ (45.00 x^2)+ (25.00 x^1)+ (35.00 x^0)+
[11311A12A8@itlab polynomial]$
*/
