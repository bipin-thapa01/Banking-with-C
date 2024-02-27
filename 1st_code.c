#include<stdio.h>
#include<stdlib.h>
int id_pass(char *,char *);
void new_id(char *,char *);
void access_id(char *,char *);
int main()
{
	char check,id[10],pass[50],ans;
	char *i_d,*password;
	i_d=id;
	password=pass;
	enter_again:
	printf("Do you already have an account[y/n]?: ");
	scanf("%c",&check);
	if(check=='y'||check=='Y')
	{
		try_again:
		ans=id_pass(i_d,password);
		if(ans)
		{
			access_id(i_d,password);
		}
		else
		{
			printf("wrong id or password.\nTry again.\n");
			goto try_again;
		}
	}
	else if(check=='n'||check=='N')
	{
		new_id(i_d,password);
		goto enter_again;
	}
	access_id:
		
	return 0;
}

void new_id(char *i_d,char *password)
{
	fflush(stdin);
	printf("Enter id: ");
	gets(i_d);
	fflush(stdin);
	printf("Enter password: ");
	gets(password);
}

int id_pass(char *i,char *p)
{
	char id[10],pass[50];
	fflush(stdin);
	printf("Enter id: ");
	gets(id);
	fflush(stdin);
	printf("Enter password: ");
	gets(pass);
	if(*i==id&&*p==pass)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

void access_id(char *i_d,char *password)
{
	printf("Welcome! User %s.\n",*i_d);
}
