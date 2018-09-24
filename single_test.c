#include <stdio.h>
#include <string.h>
int main()
{
	char *test=NULL;
	
    int num=0;
    num = my_strlen(test);
	printf("num=%d\n",num);
}
int lower(char *s)
{
	int i, k=0;
	int pointer_size = strlen(s);
	for(i=0;i<=pointer_size;i++)
	{
		if(*(s+i)>=65 && *(s+i)<=90)
		{
			*(s+i)=*(s+i)+32;
			k+=1;
			printf("i=%d k=%d\n", i, k);
		} 
	}
	return k;
}

int my_strlen(char *s)
{
	int i;
	for(i=0; i<30; i++)
		if(*(s+i) == '\0')
		break;
	return i;
}
