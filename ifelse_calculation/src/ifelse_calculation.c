/*
 ============================================================================
 Name        : ifelse_calculation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

/*	int fnum,snum,choice,ans;

	printf("Please enter first number :");
	scanf("%d",&fnum);
	printf("Please enter second number :");
	scanf("%d",&snum);
	printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n=============== \n");
	printf("Please choose your choice \n");
	scanf("%d",&choice);


		if(choice==1){
		ans=fnum+snum;
		printf("Your Answer is : %d ",ans);
	}
	else if(choice==2){
			ans=fnum-snum;
			printf("Your Answer is : %d",ans);
		}
	else if(choice==3){
			ans=fnum*snum;
			printf("Your Answer is : %d",ans);
		}
	else if(choice==4){
			ans=fnum/snum;
			printf("Your Answer is : %d",ans);
		}
	else{
		printf("Your entered invalid choice \n \n");
		
	}
*/

/*
//WEEK DAYS SELECTION THROUGH SWITCH COMMAND
int choice;
printf("1. SUNDAY \n2. MONDAY \n3. TUESDAY \n4. WEDNESDAY \n5. THURSDAY \n6. FRIDAY \n7. SATURDAY \n========================\n");
printf("Please choose a choice from abouve list \n");
scanf("%d",&choice);
switch (choice) {
case 1:
printf("SUNDAY");
break;
case 2:
printf("MONDAY");
break;
case 3:
printf("TUESDAY");
break;
case 4:
printf("WEDNESDAY");
break;
case 5:
printf("THURSDAY");
break;
case 6:
printf("FRIDAY");
break;
case 7:
printf("SATURDAY");
break;
default : 
printf("invalid entry");
}
*/

//==========================================
//FIND A GRADE VALUE USING IF..ELSE IF..
/*
float mark;

printf("Please enter your total mark percentage :");
scanf("%f",&mark);
if (mark>=90){
	printf("Your Grade is : A");
}
else if(mark>=70){
	printf("Your Grade is : B");
}
else if (mark>=50){
	printf("Your Grade is : C");
}
else{
	printf("You are failed !!!");
}
*/

// =============================================
//PRINT 1-100 OR USER DEFINED
int fnum,lnum,i;

printf("PLEASE ENTER YOUR FIRST NUMBER : ");
scanf("%d",&fnum);
printf("PLEASE ENTER YOUR LAST NUMBER :");
scanf("%d",&lnum);

for (i=fnum;i<=lnum;i++){
	printf("%d \n",i);
}


	return EXIT_SUCCESS;
}

