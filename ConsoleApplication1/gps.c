#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
int main(void)
{
	char cha[N], chb[N] ;
	char ch[N];
	int count=0;
	while (gets_s(ch, N) != "END")
	{
		for (int i = 0;ch[i]!='\0'; i++)
			if(ch[i]=='$'&& ch[i+1]=='G'&&ch[i+2]=='P'&&ch[i+3]=='R'&&ch[i+4]=='M'&&ch[i+5]=='C')
				cha[i] = ch[i];
		int re = 'G';
		for (int i = 0; cha[i] != '*'; i++)
		{
			re ^=cha[i];
			count++;
		}
		count++;
		char number[10];
		for (int i = count, j = 0; cha[count]!='\0'; count++, j++)
			number[j] = ch[count];
		int numbers;

	}

	return 0;

}