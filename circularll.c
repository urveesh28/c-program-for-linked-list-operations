#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*new,*temp,*head,*tail;

//using typedef keyword
typedef struct node node;

int main()
{
	int choice,value;
	void addbeg();
	do
	{
		printf("=============================================================================");
		printf("\n1. To create node\n     \n2.To display circular C.L.\n   \n3.To insert a node in the beginning of C.L.\n  \n4.To insert a node at end of the C.L.\n \n5.To insert a node at a specific position of C.L.\n     \n6.To delete first node of C.L.\n    \n7.To delete last node\n    \n8.To delete any specific node\n ");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :{	//C.L. CREATION
						printf("\nEnter the element : ");
						scanf("%d",&value);
						new=(node*)malloc(sizeof(node));
						new->data=value;
						new->next=NULL;
						if(head==NULL)
						{
							head=new;
							tail=new;
						}
						else
						{
							tail->next=new;
							tail=new;
							new->next=head;
						}
						printf("\n=======> NODE CREATED ");
						break;
					} 
			case 2 : {	//DISPLAYING THE C.L.
						printf("\n=======> CIRCULAR L.L. <=======\n");
						temp=head;
						while(temp->next!=head)
						{
							printf("%d->",temp->data);
							temp=temp->next;
						}
						printf("%d ",temp->data);
						break;
					}
			case 3 : {	//INSERTION AT BEGINNING
						addbeg();
						break;
					}
			case 4 : {	//INSERTION AT END OF C.L.
						int ele2;
						printf("\n Enter the value : ");
						scanf("%d",&ele2);
						
						/*while(temp->next!=head);
						{
							temp=temp->next;
						}*/
						new=(node*)malloc(sizeof(node));
						new->data=ele2;
						new->next=head;
						tail->next=new;
						tail=new;
						printf("\n -=-=-=====>NODE INSERTED ");
						break;
					}
			case 5 : {
						//INSERTION AT SPECIFIC POSITION IN C.L.
						int ele3,pos;
						printf("\n Enter the value and position : ");
						scanf("%d %d",&ele3,&pos);
						new=(struct node*)malloc(sizeof(struct node));
						new->data=ele3;
						temp=head;
						for(int i=0;i<pos-1;i++)
						{
							temp=temp->next;
						}
						new->next=temp->next;
						temp->next=new;
						printf("\n=======> NODE INSERTED");
						
						break;
						
					}
			case 6 : {
						//DELETION AT BEGINNING
						temp=head;
						head=head->next;
						tail->next=head;
						temp->next=NULL;
						//free(temp);
						printf("\n-=-=-=-=> NODE DELETED");
						break;
						
					}
			case 7 : {
						//DELETION OF LAST NODE
						temp=head;
						while(temp->next->next!=head)
						{
							temp=temp->next;
						}
						
						tail->next=NULL;
						temp->next=head;
						tail=temp;
						printf("\n -=-==-=-=-> NODE DELETED");
						break;
					}
			case 8 : {
						//DELETION AT SPECIFIC POSITION
						int pos1;
						printf("\n Enter the position : ");
						scanf("%d",&pos1);
						temp=head;
						for(int i=0;i<pos1-1;i++)
						{
							temp=temp->next;
						}
						temp->next=temp->next->next;
						printf("\n=======> NODE DELETED ");
						
						break;
					}
		}
	}
	while(choice<=8);
	return 0;
}

void addbeg()
{
	//INSERTION AT BEGINNING OF C.L.
						int ele1;
						printf("\n Enter the value to insert : ");
						scanf("%d",&ele1);
						new=(node*)malloc(sizeof(node));
						new->data=ele1;
						new->next=head;
						head=new;
						tail->next=head;
						printf("\n-=-=-=-=-==> NODE INSERTED ");
}


