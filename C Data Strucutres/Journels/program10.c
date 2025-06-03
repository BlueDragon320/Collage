#include<stdio.h> 
#include<stdlib.h> 


struct node{
	int data;
	struct node *link;
};

struct node *first=NULL,*temp=NULL,*last=NULL;
int count=0,pos,i=1;

void create_Node()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	printf("NODE CREATED SUCCESSFULLY\n");
	printf("Entered data is %d\n\n",temp->data);
}

void insert_beg()
{
	if(first==NULL)
	{
		create_Node();
		first=temp;
		last=temp;
		count++;
	}
	else
	{
		create_Node();
		temp->link=first;
		first=temp;
		count++;
	}
}

void insert_end()
{
	if(first==NULL)
	{
		create_Node();
		first=temp;
		last=first;
		count++;
	}
	else
	{
		create_Node();
		last->link=temp;
		last=temp;
		count++;
	}
}

void insert_random()
{
	struct node *temp1;
	int pos,i=1;
	printf("Enter the position:\n");
	scanf("%d",&pos);
	if(pos>count)
	printf("Invalid position:\n");
	else
	{
		create_Node();
		temp1=first;
		while(i<pos)
	    {
		    temp1=temp1->link;
		    i++;
	    }
	temp->link=temp1->link;
	temp1->link=temp;
	count++;
	printf("Node inserted...\n");
	}	
}

void traverse()
{
	struct node *temp1;
	if(first==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp1=first;
	printf("After traversing the contents of SLL are:\n");
	while(temp1!=NULL)
	{
		printf("%d->",temp1->data);
		temp1=temp1->link;	
	}
	printf("\nNumber of nodes : %d\n",count);	
}

void delete_beg()
{
	struct node *temp1;
	temp1=first;
	if(first==NULL)
	{
		printf("List is empty\n");
		return;
	}
	else if(temp1->link==NULL)
	{
		printf("The Deleting element from list is %d\n",temp1->data);
		free(temp1);
		first=temp1=NULL;
		count--;
	}
	else
	{
		first=temp1->link;
		printf("The Deleting element from list is %d\n",temp1->data);
		free(temp1);
		count--;
	}
	printf("Node Deleted Successfully..!\n");
}

void delete_end()
{
	struct node *prev;
	last=first;
	prev=NULL;
	if(first==NULL)
	{
		printf("List is empty\n");
		return;
	}
	else if(last->link==NULL)
	{
		printf("The Deleting element from list is %d\n",last->data);
		free(last);
		first=last=NULL;
		count--;
	}
	else
	{
		while(last->link!=NULL)
		{
			prev=last;
		    last=last->link;	
		}
		prev->link=NULL;
		printf("The Deleting element from list is %d\n",last->data);
		free(last);
		count--;
	}
	printf("Node Deleted Successfully..!\n");
}

void delete_random()
{
    struct node *next = NULL, *last = NULL;
    int pos, i = 1;

    if (first == NULL) {
        printf("List is empty. No node to delete.\n");
        return;
    }

    printf("Enter the position:\n");
    scanf("%d", &pos);

    if (pos < 1 || pos > count) {
        printf("Invalid position.\n");
        return;
    }

    // Special case: deleting the first node
    if (pos == 1) {
        next = first;
        first = first->link;
    } else {
        last = first;
        while (i < pos - 1) {
            last = last->link;
            i++;
        }
        next = last->link;
        last->link = next->link;
    }

    printf("The deleting element from list is %d\n", next->data);
    free(next);
    count--;
    printf("Node Deleted Successfully...!\n");
}
void search()
{
    struct node *temp1;
    int key, flag = 0, position = 1; // Position starts from 1
    printf("Enter key element to be searched:\n");
    scanf("%d", &key);
    
    if (first == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp1 = first;
    while (temp1 != NULL)
    {
        if (key == temp1->data)
        {
            printf("Search successful! Element found at position: %d\n", position);
            flag = 1;
            break;
        }
        temp1 = temp1->link;
        position++; // Increment position as we move to the next node
    }

    if (flag == 0)
    {
        printf("Search unsuccessful.. Element not found.\n");
    }
}


main()
{
	int ch;
	printf("****OPERATIONS ON SLL****\n");
	while(1)
	{
		printf("\n1.INSERT AT BEGINNING\n2.INSERT AT END\n3.INSERT AFTER ANY random\n4.TRAVERSE LIST\n5.DELETE AT BEGINNING\n6.DELETE AT END\n7.DELETE AT ANY random\n8.SEARCH LIST\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_beg();
			       break;
			case 2:insert_end();
			       break;
			case 3:insert_random();
			       break;
			case 4:traverse();
			       break;
			case 5:delete_beg();
			       break;
			case 6:delete_end();
			       break;
			case 7:delete_random();
			       break; 
			case 8:search();
			       break;
			default:printf("Invalid choice\n");
			        exit(1);
		}
	}
}
