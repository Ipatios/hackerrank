#include <stdio.h>
struct student
{
	int age,standard;
	char name[50],last_name[50];
};
int main ()
{
	student stud1;
	scanf("%d",&stud1.age);
	scanf("%d",&stud1.name);
	 
	scanf("%d",&stud1.last_name);
	
	scanf("%d",&stud1.standard);
	printf("\n%d %s %s %d",stud1.age,stud1.name,stud1.last_name,stud1.standard);
}
