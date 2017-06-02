#include<stdio.h>	
#include<stdlib.h>
#include"linkedlistADT.h"
int menu()
{
  	int choice;
  	printf("\t1. add at head\n\t2.add attail\n\t3.insert after\n");
  	printf("\t4.insert before\n\t5.delete head\n\t6.delete tail\n");
  	printf("\t7.delete node\n\t8.search\n\t9.delete by search\n");
  	printf("\t10.edit node\n\t11.replaceby\n\t12.display\n\t13.exit\n\t");
  	printf("enter your choice:\n");
  	scanf("%d",&choice);
  	return choice;
}
int main()
{
  	struct linkedlist s;
  	int choice;
  	elementtype e,e1;
  	initlinkedlist(&s);
  	while((choice=menu())!=13)
  	{
    	switch(choice)
    	{
     		case 1: e=readelement();
            	        addathead(&s,e);
			break;
     		case 2: e=readelement();
                        addattail(&s,e);
			break;
     		case 3: e=readelement();
                        insertafter(&s,e);
			break;
     		case 4: e=readelement();
                        insertbefore(&s,e);
			break;
     		case 5: deleteathead(&s);
			break;
    		case 6: deleteattail(&s);
			break;
   	  	case 7: deletenode(&s);
			break;
     		case 8: if(search(&s,e=readelement()))
        	        printf("search successfull \n");
		else
			printf("search not successfull\n");
			break;
     		case 9: deletebysearch(&s,search(&s,e));
			break;
     		case 10: editnode(&s);
			break;
   	  	case 11:e1=readelement();
       	 	        replaceby(&s,search(&s,e),e1);
			break;
     		case 12:display(s);
			break;
     		case 13:printf("\n");
            	default:printf("illegal choice\n");
    }
}
   return 0;
}






/*     OUTPUTS
[11311A12A8@itlab linked_list]$ ./a.out
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
1
enter the integer1
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
1
enter the integer2
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
2
enter the integer3
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
8
enter the integer2
search successfull
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
3
enter the integer5
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
4
enter the integer6
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
5
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
6
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
12
            2
            5
            1
        1. add at head
        2.add attail
        3.insert after
        4.insert before
        5.delete head
        6.delete tail
        7.delete node
        8.search
        9.delete by search
        10.edit node
        11.replaceby
        12.display
        13.exit
        enter your choice:
13
*/
