#include<stdio.h>

int stack[100], top, choice, x, i;
void push();
void display();
void exit();
int main() {
	top=-1;
	printf("Press\n1.Generate 10 roll numbers\n2.Display Roll Numbers\n3.Exit\n");
	do {
		printf("Enter the choice from 1-3\n");
		scanf("%d", &choice);
		switch(choice){
			case 1: push();
			break;
			case 2: display();
			break;
			case 3: exit();
			default : printf("Sorry, wrong choice");
		}
	} while(choice!=3);
}

void push(){
	if(top>9){
		printf("OOPS, Looks like the stack is overflow\n");
	}else{
		for(i=0;i<10;i++){
			top++;
			stack[top]=top;
		}
		printf("Roll numbers are generated\n");
	}
}

void display(){
	printf("The elements are\n");
	for(i=0; i<=9; i++){
		if(stack[i]<9){
			printf("\nME21D00%d\n", stack[i]+1);
		}else{
			printf("\nME21D0%d\n", stack[i]+1);
		}
	}
}
