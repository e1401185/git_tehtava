#include "string.h"


int my_strlen(char *c)
{
	int l=0;
	while(*(c+l) !='\0')
	{
		l++;
	}
	return l;
}

void mystrcpy(char *d,char *s)
{
	int l=0;

	while(*(s+l) !='\0')
	{
		*(d+l)= *(s+l);
		l++;
	}
	*(d+l)='\0';
}

int mystrcmp (char *s, char *d)
{

int j=0;

while(*(s+j)==*(d+j) && (*(s+j)!='\0' || *(d+j)!='\0'))j++;

if(*(s+j) =='\0' &&  *(d+j)=='\0')
return 0;

else if(*(s+j) < *(d+j))
return -1;


else if(*(s+j) > *(d+j))
return 1;

}




int str2upper(char *s)
{

int i=0;
int counter=0;

while(*(s+i)!='\0')
{

if(*(s+i) >= 'a' && *(s+i) <= 'z')
{
*(s+i) = *(s+i) - 'a' + 'A';
counter++;
}
i++;
}
return counter;
}

int str2lower(char *s)
{

int i=0;
int counter=0;

while(*(s+i)!='\0')
{

if(*(s+i) >= 'A' && *(s+i) <= 'Z')
{
*(s+i) = *(s+i) - 'A' + 'a'; 
counter++;
}
i++;
}
return counter;
}


int str_strip_numbers(unsigned char *s)
{}


char * strdupl(char *s)
{

char* i;

i = (char*)malloc(sizeof(char)*my_strlen(s));

i=s;
return i;
}
