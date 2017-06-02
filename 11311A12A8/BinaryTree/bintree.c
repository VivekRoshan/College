#include<stdio.h>
#include<stdlib.h>
#include"bintreeADT.h"
int main()
{

	elementType x;
	struct BinSerTree t;
	initBST(&t);
	buildBST(&t);
	inOrder(t);
	printf("\nenter a value to delete:\n");
	scanf("%d",&x);
	t.root=delete(t.root,x);
	inOrder(t);
	printf("\n");
	return 0;
}



/*       OUTPUTS:
[11311A12A8@itlab BinaryTree]$ gcc bst.c binAdt.c element.c
[11311A12A8@itlab BinaryTree]$ ./a.out
enter next integer: 2
enter next integer: 4
enter next integer: 6
enter next integer: 8
enter next integer: 7
enter next integer: 5
enter next integer: 3
enter next integer: 1
enter next integer: 0

            1
            2
            3
            4
            5
            6
            7
            8
enter a value to delete:
6

            1
            2
            3
            4
            5
            7
            8
*/
