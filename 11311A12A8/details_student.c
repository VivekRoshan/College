#include<stdio.h>
#include<string.h>

#define MAX 5

struct student
{
        int rollno;
        char name[20];
        float marks;
};
struct student readdata(int i)
{
        struct student s;
        s.rollno=i+1;
        printf("enter name of the student %d :",i+1);
        scanf("%s",&s.name);
        printf("Marks obtained:");
        scanf("%f",&s.marks);
        return s;
}
void printdata(struct student s)
{
        printf("Roll number =%20d\n",s.rollno);
        printf("Name =%20s\n",s.name);
        printf("Marks =%20.2f\n",s.marks);
         if(s.marks<12)
                printf("fail\n");
        else
                printf("pass\n");
        putchar('\n');

}
int moderate(struct student s)
{
        if(s.marks<12 && s.marks>10)
                s.marks=12;
        putchar('\n');
        return s.marks;
}
int main()
{
        struct student it[MAX];
        int i;
        for(i=0;i<MAX;i++)
          it[i]=readdata(i);
        for(i=0;i<MAX;i++)
          printdata(it[i]);
        printf("After moderation\n");
         for(i=0;i<MAX;i++)
                it[i].marks=moderate(it[i]);
         for(i=0;i<MAX;i++)

        printdata(it[i]);
        return 0;
}

