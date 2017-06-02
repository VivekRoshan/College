#include<stdio.h>
#include<math.h>

typedef struct
{
        float real;
        float imag;
}comp;
comp add(comp a,comp b)
{
        comp c;
        c.real = a.real + b.real;
        c.imag = a.imag + b.imag;
        return c;
}
comp negative(comp a)
{
        comp b;
        b.real = -a.real;
        b.imag = -a.imag;
        return b;
}
comp conjugate(comp a)
{
        comp b;
        b.real = -a.real;
        b.imag = -a.imag;
        return b;
}
comp subtract(comp a,comp b)
{
        return(add(a,negative(b)));
}
comp multiply(comp a,comp b)
{
        comp c;
        c.real = ((a.real*b.real)-(a.imag*b.imag));
        c.imag = ((a.real*b.imag)+(a.imag*b.real));
        return c;
}

int menu()
{
        int option;
        printf("1.Addition\n");
        printf("2.Negative\n");
        printf("3.Subtraction\n");
        printf("4.Conjugate\n");
        printf("5.Multiplication\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&option);
        return option;
}

int main()
{
        comp c,a,b;
        int choice;
        while((choice=menu()) != 6)
        {
                switch(choice)
                {
                        case 1: printf("Enter real part of a: ");
                                scanf("%f",&a.real);
 printf("Enter imaginary part of a: ");
                                scanf("%f",&a.imag);
                                printf("Enter real part of b: ");
                                scanf("%f",&b.real);
                                printf("Enter imaginary part of b: ");
                                scanf("%f",&b.imag);
                                c = add(a,b);
                                printf("Addition of 2 complex numbers is %f+i%f\n",c.real,c.imag);
                                break;
                        case 2: printf("Enter real part of a: ");
                                scanf("%f",&a.real);
                                printf("Enter imaginary part of a: ");
                                scanf("%f",&a.imag);
                                c = negative(a);
                                printf("Negative of complex number is %f+i%f\n",c.real,c.imag);
                                break;
                        case 3: printf("Enter real part of a: ");
                                scanf("%f",&a.real);
                                printf("Enter imaginary part of a: ");
                                scanf("%f",&a.imag);
                                printf("Enter real part of b: ");
                                scanf("%f",&b.real);
                                printf("Enter imaginary part of b: ");
                                scanf("%f",&b.imag);
                                c = subtract(a,b);
                                printf("Subtraction of 2 complex numbers is %f+i%f\n",c.real,c.imag);
                                break;
                        case 4: printf("Enter real part of a: ");
                                scanf("%f",&a.real);
                                printf("Enter imaginary part of a: ");
                                scanf("%f",&a.imag);
                                c = conjugate(a);
  printf("Conjugate of complex number is %f+i%f\n",c.real,c.imag);
                                break;
                        case 5: printf("Enter real part of a: ");
                                scanf("%f",&a.real);
                                printf("Enter imaginary part of a: ");
                                scanf("%f",&a.imag);
                                printf("Enter real part of b: ");
                                scanf("%f",&b.real);
                                printf("Enter imaginary part of b: ");
                                scanf("%f",&b.imag);
                                c = multiply(a,b);
                                printf("Multiplication is %f+i%f\n",c.real,c.imag);
                                break;
                        default: printf("Invalid option\n");
                }
        }
        return 0;
}
