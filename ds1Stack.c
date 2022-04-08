#include<stdio.h>
#include<conio.h>

int stack[100], top, n, choice, x, i;
void push();
void pop();
void display();
void exit();

int main(){
	top=-1;
	printf("Enter the size of stack: Limit 100\n");
	scanf("%d", &n);
	printf("Press \n1for Push\n2 for Pop\n3 for Display\n4 for Exit\n");
	do {
		printf("Enter your choice");
		scanf("%d", &choice);
		switch(choice){
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit();
			default: printf("Oops, enter a valid choice from 1 to 4");
		}
	} while(choice!=4);
	return 0;
}

void push(){
	if(top>n){
		printf("OOPS, Looks like the stack is overflow\n");
	}else{
		printf("Please enter the value to be entered\n");
		scanf("%d", &x);
		top++;
		stack[top]=x;
		printf("Well, %d is entered", stack[top]);
	}
}

void pop(){
	if(top==-1){
		printf("OOPS, Looks like the stack is empty");
	}else{
		printf("Pop element is %d", stack[top]);
		top--;
		
	}
}

void display(){
	printf("The elements are\n");
	for(i=top; i>=0; i--){
		printf("\n\t%d\n", stack[i]);
	}
}
