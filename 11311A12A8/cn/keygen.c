/*PROGRAM TO IMPLEMENT KEYGENERATION FOR S-DES ALGORITHM  */

#include<stdio.h>
int main()
{
	int a[10],ip[10],tk1[10],afp[10],p1[10],p2[10],fk1[10],cr[4],perk1[10],fk2[10];
	int i,x,s,d;
	printf("Enter 10 bit key:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("Enter the 10 bit initial permutation:\n");
	for(i=0;i<10;i++)
		scanf("%d",&ip[i]);
	 for(i=0;i<10;i++)
		afp[i]=a[ip[i]];
	 for(i=0;i<5;i++)
		p1[i]=afp[i];
	 for(i=0;i<5;i++)
		p2[i]=afp[5+i];
	d=p1[0];
	 for(i=0;i<5;i++)
		p1[i]=p1[i+1];
	p1[i-1]=d;
	d=p2[0];
	for(i=0;i<5;i++)
                p2[i]=p2[i+1];
        p2[i-1]=d;
	for(i=0;i<5;i++)
		afp[i]=p1[i];
	for(i=0;i<5;i++)
		afp[5+i]=p2[i];
	for(i=0;i<10;i++)
		printf("%d",afp[i]);
	printf("Enter the position of bits to be removed(only 2) :\n");
	 for(i=0;i<2;i++)
		scanf("%d",&cr[i]);
	s=0;
	for(i=0;i<10;i++)
		if(i!=cr[0]&&i!=cr[i])
			tk1[s++]=afp[i];
	for(i=0;i<8;i++)
		printf("%d",tk1[i]);
	printf("Enter the 8 bit permutation for keys :\n");
	for(i=0;i<8;i++)
		scanf("%d",&perk1[i]);
	for(i=0;i<8;i++)
		fk1[i]=tk1[perk1[i]];
	printf("\n key 1 is:\n");
	for(i=0;i<8;i++)
		printf("%d",fk1[i]);
	printf("\n key 2 is :\n");
	d=p1[0];
	for(i=0;i<5;i++)
		p1[i]=p1[i+1];
	p1[i-1]=d;
	d=p2[0];
	for(i=0;i<5;i++)
                p2[i]=p2[i+1];
        p2[i-1]=d;
	 d=p1[0];
        for(i=0;i<5;i++)
                p1[i]=p1[i+1];
        p1[i-1]=d;
        d=p2[0];
        for(i=0;i<5;i++)
                p2[i]=p2[i+1];
        p2[i-1]=d;
	for(i=0;i<5;i++)
		afp[i]=p1[i];
	for(i=0;i<5;i++)
		afp[5+i]=p2[i];
	s=0;
	for(i=0;i<10;i++)
		if(i!=cr[0]&&i!=cr[i])
		tk1[s++]=afp[i];
	for(i=0;i<8;i++)
		fk2[i]=tk1[perk1[i]];
	for(i=0;i<8;i++)
		printf("%d",fk2[i]);
	return 0;
}
/*output
 * Enter 10 bit key:
 * 1
 * 0
 * 1
 * 0
 * 1
 * 1
 * 0
 * 0
 * 1
 * 1
 * Enter the 10 bit initial permutation:
 * 7
 * 2
 * 4
 * 9
 * 0
 * 5
 * 3
 * 6
 * 1
 * 8
 * 1111000011Enter the position of bits to be removed(only 2) :
 * 5
 * 9
 * 11110001Enter the 8 bit permutation for keys :
 * 5
 * 0
 * 4
 * 6
 * 1
 * 3
 * 7
 * 2
 *
 *  key 1 is:
 *  01001111
 *   key 2 is :
 *   11111100
 */

	

	
