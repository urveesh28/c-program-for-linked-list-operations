#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*new,*head,*temp,*tail;

int main()
{
	
	int value,choice;
	do{
		printf("\n1. to create new node.\n   \n2.To display.\n  \n3.To insert element at beginning\n    \n4.To insert element at end\n     \n5.To insert node at specific position\n     \n6.To delete first node\n     \n7.To delete last node\n    \n8.To delete specific node\n");
		printf("\n Please enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : {	//LL CREATION
						printf("\nEnter the element :\n");
						scanf("%d",&value);
						new=(struct node*)malloc(sizeof(struct node));
						new->data=value;
						new->next=NULL;
						printf("\n========>Node created.<==========\n");
						if(head==NULL)
						{
							head=new;
							tail=new;
						}
						else{
							tail->next=new;
							tail=new;
						}
						break;
					}
				
			case 2 : {	//DISPLAY
						temp=head;
						printf("\n========> LINKED LIST <=========\n\n");
						while(temp->next!=NULL)
						{
							printf("|%d|%d|->",temp->data,temp->next);
							temp=temp->next;
						}
						printf("|%d|%d|",temp->data,temp->next);
						break;
					}
			case 3 : {	//INSERTION AT BEGINNING
						int ele;
						printf("\n To insert element at beginning ,\n Enter the element : ");
						scanf("%d",&ele);
						new=(struct node*)malloc(sizeof(struct node));
						new->data=ele;
						new->next=head;
						head=new;
						printf("\n========> ELEMENT INSERTED\n");
						break;
						
					}
			case 4 : {	//INSERTION AT END 
						int ele1;
						printf("\n To insert element at end , \n Enter the element : ");
						scanf("%d",&ele1);
						new=(struct node*)malloc(sizeof(struct node));
						new->data=ele1;
						new->next=NULL;
						tail->next=new;
						tail=new;
						printf("\n========> ELEMENT INSERTED\n");
						break;
					}
			case 5: {
						//INSERTION IN LL AT SPECIFIC POSITION
						int ele2,pos;
						printf("\n Enter the value and position : ");
						scanf("%d %d",&ele2,&pos);
						new=(struct node*)malloc(sizeof(struct node));
						new->data=ele2;
						temp=head;
						for(int i=0;i<pos-1;i++)
						{
							temp=temp->next;
						}
						new->next=temp->next;
						temp->next=new;
						printf("\n=======> NODE INSERTED\n");
						
						break;
					}
			case 6 : {
						//DELETION AT BEGINNING
						temp=head;
						head=head->next;
						temp->next=NULL;
						free(temp);
						printf("\n========> FIRST NODE DELETED SUCCESSFULLY\n");
						break;
					}
			
			case 7 :{
						//DELETION AT END OF LL
						temp=head;
						while(temp->next->next!=NULL)
						{
							temp=temp->next;
						}
						temp->next=NULL;
						tail=temp;
						//free()
						printf("\n=========> LAST NODE DELETED SUCCESSFULLY\n");
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
						printf("\n========> NODE DELETED SUCCESSFULLY\n");
						break;
					}
			
		}
		
	}
	while(choice<=8);
	return 0;
}              