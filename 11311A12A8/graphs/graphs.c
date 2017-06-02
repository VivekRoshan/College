#include<stdio.h>
#include<stdlib.h>

typedef int elementType;

elementType readElement()
{
	elementType x;
	printf("enter an integer: ");
	scanf("%d",&x);
	return x;
}

void showElement(elementType x)
{
	printf("\n\t%5d",x);
}

struct graph
{
	int noOfNodes;
	int **adjacent;
	int *visited;
};

struct graph createGraph(int m)
{
	struct graph temp;
	int i;
	temp.noOfNodes=m;
	temp.adjacent=(int**)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
		temp.adjacent[i]=(int*)malloc(m*sizeof(int*));
	temp.visited=(int*)malloc(m*sizeof(int));
	return temp;;
}
void initGraph(struct graph *s)
{
	int i,j,m;
	m=s->noOfNodes;
	for(i=0;i<m;i++)	
	{
		for(j=0;j<m;j++)
			s->adjacent[i][j]=0;
		s->visited[i]=0;
	}
}

void refreshGraph(struct graph *s)
{
	int i;
	for(i=0;i<s->noOfNodes;i++)
		s->visited[i]=0;
}

void addEdges(struct graph *s)
{
	int i,j,m;
	char q;
	m=s->noOfNodes;
	for(i=0;i<m;i++)
	{
		printf("enter nodes adj to %d: ",i);
		scanf("%d",&j);
		while(j>=0)
		{
			s->adjacent[i][j]=1;
			scanf("%d",&j);
		}
	}
}
void DFT(struct graph *s,int v)
{
	int i;
	printf("%3d",v);
	s->visited[v]=1;
	for(i=0;i<s->noOfNodes;i++)
		if((s->adjacent[v][i]==1)&&(s->visited[i]==0
))
		DFT(s,i);
}

struct queue
{
	int maxSize;
	int front;
	int rear;
	elementType *queueElement;
};


struct queue createQueue(int m)
{
	struct queue temp;
	temp.maxSize=m;
	temp.queueElement=(elementType *)malloc(m*sizeof(elementType));
	return temp;
}
void initQueue(struct queue *s)
{
	s->front=0;
	s->rear=0;
}
int empty(struct queue *s)
{
	return(s->rear==0);
}
int full(struct queue *s)
{
		return (s->rear==s->maxSize);
}

void add(struct queue *s, elementType e)
{
	if(full(s))
		printf("error : overflow");
	else
		s->queueElement[(s->rear)++]=e;
}
elementType delete(struct queue *s)
{
	elementType e;
	int i;
	if (empty(s))
		printf("ERROR : underflow\n");
	else
	{
		e=s->queueElement[s->front];
		for(i=s->front;i<s->rear;i++)
			s->queueElement[i]=s->queueElement[i+1];
		(s->rear)--;
	}
	return e;
}
void Display(struct queue s)
{
	int i,j;
	i = s.front;
	j = s.rear;
	printf("front---->\n");
	while(i!=j)
	{
		showElement(i++);
	}
	printf("-----> rear\n");
}
void disposeQueue(struct queue *s)
{
	free(s->queueElement);
}
void BFT(struct graph *s,int v)
{
	struct queue q;
	int i,j,k;
	j=v;
	q=createQueue(s->noOfNodes);
	initQueue(&q);
	add(&q,j);
	s->visited[j]+=2;
	while(!empty(&q))
	{
		j=delete(&q);
		s->visited[j]-=2;
		printf("%3d",j);
		s->visited[j]+=1;
		for(k=0;k<s->noOfNodes;k++)
			if((s->adjacent[j][k]==1)&&(s->visited[k]==0))
			{
				add(&q,k);
				s->visited[k]+=2;
			}
	}
}
void display(struct graph s)
{
	int m,i,j;
	m = s.noOfNodes;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		printf("%4d",s.adjacent[i][j]);
		putchar('\n');
	}
}

int main()
{
	struct graph s;
	int n;
	printf("number of nodes: ");
	scanf("%d",&n);
	s=createGraph(n);
	initGraph(&s);
	addEdges(&s);
	display(s);
        printf("DFT: ");
        DFT(&s,0);
        putchar('\n');
        refreshGraph(&s);
        printf("BFT: \n");
        BFT(&s,0);
        putchar('\n');
        return 0;
}

/*OUTPUT
 number of nodes: 8
enter nodes adj to 0: 1 2 -1
enter nodes adj to 1: 3 4 0 -1
enter nodes adj to 2: 0 3 4 -1
enter nodes adj to 3: 1 2 4 -1
enter nodes adj to 4: 1 2 5 -1
enter nodes adj to 5: 4 6 7 -1
enter nodes adj to 6: 7 5 -1
enter nodes adj to 7: 5 6 -1
   0   1   1   0   0   0   0   0
   1   0   0   1   1   0   0   0
   1   0   0   1   1   0   0   0
   0   1   1   0   1   0   0   0
   0   1   1   0   0   1   0   0
   0   0   0   0   1   0   1   1
   0   0   0   0   0   1   0   1
   0   0   0   0   0   1   1   0
DFT:   0  1  3  2  4  5  6  7
BFT:
  0  1  2  3  4  5  6  7
*/	
