#include<stdio.h>
#include<stdlib.h>
char message[100],ch;
int i,key;
void inputmessage()
	{
		printf("enter the message:\n");
		scanf("%s",message);
	}
void key_input()
{
	printf("enter the key:\n");
	scanf("%d",&key);
}
void encryption()
{
	for(i=0;message[i]!='\0';++i)
	{
		ch=message[i];
		if (ch>='a'&&ch<='z')
		{
			ch=ch+key;
			if(ch<'a')
			{
				ch=ch-'z'+'a'-1;
			}
			message[i]=ch;
		}
		else if(ch>='A'&&ch<='Z')
		{
			ch=ch+key;
			if(ch<'A')
			{
				ch=ch-'Z'+'A'-1;
			}
			message[i]=ch;
		}
	}
	printf("the encrypted message is:%s\n",message);
}
void decryption()
{
	for(i=0;message[i]!='\0';++i)
	{
		ch=message[i];
		if(ch>='a'&&ch<='z')
		{
			ch=ch-key;
			if(ch<'a')
			{
				ch=ch+'z'-'a'+1;
			}
			message[i]=ch;
		}
		else if(ch>='A'&&ch<='Z')
		{
			ch=ch-key;
			if(ch<'A')
			{
				ch=ch+'Z'-'A'+1;
			}
			message[i]=ch;
		}
	}
	printf("the decrypted message is:%s",message);
}
int main()
{
	int choice;
	inputmessage();
	key_input();
	while(1)
	{
		printf("1.encryption\n2.decryption\n3.exit\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: encryption();
			        break;
			case 2: decryption();
			        break;
			case 3: exit(0);
				break;
			default: printf("invalid option\n");
		}
	}
	printf("\n");
	return 0;
}



