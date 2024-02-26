#include<stdio.h>
#include<stdlib.h>
int id_pass(char *,char *);
void new_id(char *,char *);
char *i_d,*password;
int main()
{
	char check,id[10],pass[50],ans;
	i_d=id;
	password=pass;
	enter_again:
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
		ans=id_pass(i_d,password);
		if(ans)
		{
			goto access_id;
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
	flush(stdin);
	printf("Enter id: ");
	gets(i_d);
	fflush(stdin);
	printf("Enter password: ");
	gets(password);
}

int id_pass(int *i,int *p)
{
	if(*i==*i_d&&*p==password)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
