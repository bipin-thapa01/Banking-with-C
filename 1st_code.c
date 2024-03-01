#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int id_pass(char [],char []);
void new_id(char [],char []);
void access_id(char [],char []);
FILE *ptr;
int name_cnt=0,pass_cnt=0;
int main()
{
	char check,id[10],pass[50],ans;
	ptr = fopen("User.txt","a+");
	i_d=id;
	password=pass;
	enter_again:
	wrong_input:
	printf("Do you already have an account[y/n]?: ");
	scanf("%c",&check);
	if(check=='y'||check=='Y')
	{
		try_again:
		ans=id_pass(id,pass);
		if(ans)
		{
			access_id(id,pass);
		}
		else
		{
			printf("wrong id or password.\nTry again.\n");
			goto try_again;
		}
	}
	else if(check=='n'||check=='N')
	{
		new_id(id,pass);
		goto enter_again;
	}
	else
	{
		printf("wrong input!Try again\n");
		goto wrong_input;
	}
		
	return 0;
}

void new_id(char id[],char password[])
{
	int i;
	fflush(stdin);
	printf("Enter id: ");
	gets(id);
	for(i=0;id[i]!='\0';i++)
	{
		name_cnt++;
	}
	fgets(ptr,name_cnt,id);
	fflush(stdin);
	printf("Enter password: ");
	gets(password);
	for(i=0;id[i]!='\0';i++)
	{
		pass_cnt++;
	}
	fgets(ptr,pass_cnt,password);
}

int id_pass(char i[],char p[])
{
	char id[10],pass[50];
	fflush(stdin);
	printf("Enter id: ");
	gets(id);
	fflush(stdin);
	printf("Enter password: ");
	gets(pass);
	if((strcmp(id,i)==0)&&(strcmp(pass,p)==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

void access_id(char id[],char pass[])
{
	printf("Welcome! User %s.\n",id);
}
