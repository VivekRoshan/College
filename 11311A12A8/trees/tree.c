#include<stdio.h>
#include<stdlib.h>
#include"treeADT.h"

int main()
{
	struct tree t;
	initTree(&t);
	buildTree(&t);
	printf("Preorder tree traversal is \n");
	preOrder(t);
        printf("Inorder tree traversal is \n");
        inOrder(t);

        printf("Postorder tree traversal is \n");
        postOrder(t);
	
	return 0;
}


/*         OUTPUTS
[11311A12A8@itlab trees]$ gcc tree.c treeADT.c element.c
[11311A12A8@itlab trees]$ ./a.out
Enter data at node: enter an integer: 3
enter data left of:     3
enter an integer: 4
enter data left of:     4
enter an integer: 5
enter data left of:     5
enter an integer: 6
enter data left of:     6
enter an integer: 4
enter data left of:     4
enter an integer: 0
enter data right of:     4
enter an integer: 5
enter data left of:     5
enter an integer: 6
enter data left of:     6
enter an integer: 7
enter data left of:     7
enter an integer: 0
enter data right of:     7
enter an integer: 0
enter data right of:     6
enter an integer: 0
enter data right of:     5
enter an integer: 0
enter data right of:     6
enter an integer: 0
enter data right of:     5
enter an integer: 0
enter data right of:     4
enter an integer: 0
enter data right of:     3
enter an integer: 0
Preorder tree traversal is
    3
    4
    5
    6
    4
    5
    6
    7
Inorder tree traversal is
    4
    7
    6
    5
    6
    5
    4
    3
Postorder tree traversal is
    7
    6
    5
    4
    6
    5
    4
    3
*/
