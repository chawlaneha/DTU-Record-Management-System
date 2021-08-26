#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variable to keep track of
// number of students
int i = 0;

// Structure to store the student
struct sinfo {
	char fname[50];
	char lname[50];
	int roll;
	float cgpa;
	int cid[10];
} st[50];

// Function to add the student
void add_student()
{
	printf("Add the Students Details\n");
	printf("-------------------------\n");
	printf("Enter the first name of student\n");
	scanf("%s", st[i].fname);
	printf("Enter the last name of student\n");
	scanf("%s", st[i].lname);
	printf("Enter the Roll Number\n");
	scanf("%d", &st[i].roll);
	printf("Enter the CGPA you obtained\n");
	scanf("%f", &st[i].cgpa);
	printf("Enter the course ID of each course\n");
	for (int j = 0; j < 5; j++)
	 {
		scanf("%d", &st[i].cid[j]);
	}

	i++;
}

// Function to find the student
// by the roll number
void find_rl()
{
	int x,j;
	printf("Enter the Roll Number of the student\n");
	scanf("%d",&x);
	for (j = 0; j < i; j++) {
		if (x == st[j].roll) {
			printf("The Students Details are\n");
			printf("The First name is %s\n",
				st[j].fname);
			printf(
				"The Last name is %s\n",
				st[j].lname);
			printf(
				"The CGPA is %f\n",
				st[j].cgpa);
			printf(
				"Enter the course ID of each course\n");
			for (int k = 0; k < 5; k++) {
			printf( "The course ID are %d\n", st[j].cid[k]);
		}
		break;
		}

	}if(i==j){

	printf("Roll number not found\n");}
}

// Function to find the student
// by the first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name of the student\n");
	scanf("%s", a);
	int c = 0;
	int j;

	for (j = 0; j < i; j++) {
		if (!strcmp(st[j].fname, a)) {

			printf(
				"The Students Details are\n");
			printf(
				"The First name is %s\n",
				st[j].fname);
			printf(
				"The Last name is %s\n",
				st[j].lname);
			printf(
				"The Roll Number is %d\n ",
				st[j].roll);
			printf(
				"The CGPA is %f\n",
				st[j].cgpa);

			for (int k = 0; k < 5; k++) {
				printf(
					"The course ID are %d\n",
					st[j].cid[k]);
			}
			break;
		}

	}
	if(j==i){
	printf("First name not found\n");}
}


// Function to print the total
// number of students
void tot_s()
{
	printf("The total number of Students are %d\n", i);
	printf("\n you can have a max of 50 students\n");
	printf("you can have %d more students\n",50 - i);
}

// Function to delete a student
// by the roll number
void del_s()
{
	int a;
	printf("Enter the Roll Number which you want to delete\n");
	scanf("%d", &a);
	for (int j = 0; j < i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < i-1; k++)
				{st[k] = st[k + 1];}
			i--;
		}
	}
	printf("The Roll Number is removed Successfully\n");
}

// Function to update a students data
void up_s()
{

	printf("Enter the roll number"
		" to update the entry : ");
	 int x,j;
	scanf("%d", &x);
	for (j = 0; j < i; j++) {
		if (st[j].roll == x) {
			printf("1. first name\n"
				"2. last name\n"
				"3. roll no.\n"
				"4. CGPA\n"
				"5. courses\n");
			int z;
			scanf("%d", &z);
			switch (z) {
			case 1:
				printf("Enter the new "
					"first name : \n");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new "
					"last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new "
					"roll numnber : \n");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				scanf("%f", &st[j].cgpa);
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf(
					"%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
			break;
		}

	}
	if(j==i){
	printf("Roll number not found\n");}
}

// Driver code
int main()

{
	int choice;
	while (1) {

		printf("\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                    TO                     =");
    printf("\n\t\t\t        =            DTU Student Record             =");
    printf("\n\t\t\t        =                 MANAGEMENT                =");
    printf("\n\t\t\t        =                   SYSTEM                  =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
		printf("\nThe Task that you want to perform\n\n");
		printf("1. Add the Student Details\n");
		printf("2. Find the Student Details by Roll Number\n");
		printf("3. Find the Student Details by First Name\n");
		printf("4. Find the Total number of Students\n");
		printf("5. Delete the Students Details by Roll Number\n");
		printf("6. Update the Students Details by Roll Number\n");
		printf("7. To Exit\n");
		printf("Enter your choice to find the task\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			add_student();
			break;
		case 2:
			find_rl();
			break;
		case 3:
			find_fn();
			break;
		case 4:
			tot_s();
			break;
		case 5:
			del_s();
			break;
		case 6:
			up_s();
			break;
		case 7:
			exit(0);
			break;
		}

	}
}
