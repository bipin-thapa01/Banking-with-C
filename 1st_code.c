#include<stdio.h>
void id_pass(char *,char *);
void new_id(char *,char *);
int main()
{
	char check,id[10],pass[50],*i_d,*password;
	printf("Do you already have an account[y/n]?: ");
	scanf("%c",&check);
	if(check=='y'||check'Y')
	{
		fflush(stdin);
		printf("Enter id: ");
		gets(id);
		fflush(stdin);
		printf("Enter password: ");
		gets(pass);
		id_pass(i_d,password);
	}
	else if(check=='n'||check=='N')
	{
		flush(stdin);
		printf("Enter id: ");
		gets(id);
		fflush(stdin);
		printf("Enter password: ");
		gets(pass);
		new_id(i_d,password);
	}
	return 0;
}

void new_id(char *i_d,char *password)
{
	
}
