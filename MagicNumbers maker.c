#include <stdio.h>
#include <conio.h>
#include <String.h>


void ReadFile(char * filename)
{
	unsigned long int size;
	
	FILE *fp = fopen(filename, "r");
	
	fseek(fp, 0, SEEK_END);
	size = ftell(fp);
	
	printf("\n\n%s's Size => %d Byte\n", filename, size);
	
	fclose(fp);
	
	return;
}


void TypeM(void)
{
	char words[100];
	int i, j;
	
	FILE *fp = fopen("MagicNumbers.txt", "w");
		
		
	printf("\n\noutput name => MagicNumbers.txt");	
	
	printf("\n\n");
		
	printf("\nMaking...\n");
	
	 

	for(i=0; i<=9999; i++)
	{
		for(j=0; j<=9999; j++)
		{
			sprintf(words,"%04d%04d\n", i, j);
			fprintf(fp, words);
					
		}
	}

	printf("\ndone.\a\n");
	
	fclose(fp);
	
	
	ReadFile("MagicNumbers.txt");
	
	return;
}


void TypeA(void)
{
	
	char filename[100];
	
	char character;
	
	
	
	
	printf("\n[#]00000000 * 유니코드 지원 안함.\n");
	printf("출력할 문자 $> ");
	
	fflush(stdin);
	character = getchar();
	
	
	char temp[2];
	temp[0] = character;
	temp[1] = '\0';
	
	strcpy(filename, "[");
	
	strcat(filename, temp);
	
	strcat(filename, "]MagicNumbers.txt");
	
	printf("\n\noutput name => %s", filename);
	
	
	
	char words[100];
	int i, j;
	
	FILE *fp = fopen(filename, "w");
	
	printf("\n\n");
		
	printf("\nMaking...\n");
	
	 

	for(i=0; i<=9999; i++)
	{
		for(j=0; j<=9999; j++)
		{
			sprintf(words,"%c%04d%04d\n", character, i, j);
			fprintf(fp, words);
		
		
		}
	}

	printf("\ndone.\a\n");
	
	fclose(fp);
	
	
	ReadFile(filename);
	
	
	
	return;
}


void TypeG(void)
{
	
	char filename[100];
	
	char character;
	
	
	
	
	printf("\n00000000[#] * 유니코드 지원 안함.\n");
	printf("출력할 문자 $> ");
	
	fflush(stdin);
	character = getchar();
	
	
	char temp[2];
	temp[0] = character;
	temp[1] = '\0';
	
	strcpy(filename, "MagicNumbers[");
	
	strcat(filename, temp);
	
	strcat(filename, "].txt");
	
	printf("\n\noutput name => %s", filename);
	
	
	
	char words[100];
	int i, j;
	
	FILE *fp = fopen(filename, "w");
	
	printf("\n\n");
		
	printf("\nMaking...\n");
	
	 

	for(i=0; i<=9999; i++)
	{
		for(j=0; j<=9999; j++)
		{
			sprintf(words,"%04d%04d%c\n", i, j, character);
			fprintf(fp, words);
				
		}
	}

	printf("\ndone.\a\n");
	
	fclose(fp);
	
	
	ReadFile(filename);
	
	
	
	return;
}



void TypeI(void)
{
	
	char filename[100] = "[AtoB]MagicNumbers.txt";
	
	char character;
	
	
	int start = 1, end = 0;
	
	while(start > end)
	{
	
	printf("시작 값 $> ");
	scanf("%d", &start);
	
	printf("끝 값 $> ");
	scanf("%d", &end);
	
	if(start > end)
		printf("시작 값이 끝 값보다 큰 수입니다.\n");
	}
	
	

	

	printf("\n\noutput name => %s", filename);
	
	
	
	char words[100];
	int i, j;
	
	FILE *fp = fopen(filename, "w");
	
	printf("\n\n");
		
	printf("\nMaking...\n");
	
	 

	for(i=start; i<=end; i++)
	{

		sprintf(words,"%d\n", i);
		fprintf(fp, words);

	
	}

	printf("\ndone.\a\n");
	
	fclose(fp);
	
	
	ReadFile(filename);
	
	
	
	return;
}




int main(void)
{
	char choice = 0;
	
	printf("매직 넘버즈 메이커 (MagicNumbers maker)v1.0\n\n");	

	printf("(m) 00000000 ~ 99999999 \t 8자리 숫자들\n\n");
	printf("(a) [#]00000000 ~ [#]99999999 \t 앞에 기호 혹은 문자와 8자리 숫자들\n\n");
	printf("(g) 00000000[#] ~ 99999999[#] \t 뒤에 기호 혹은 문자와 8자리 숫자들\n\n");
	printf("(i) A ~ B \t 임의의 시작 값과 끝 값\n\n");
	printf("(c) 종료\n\n");
	
	printf("\n선택 $> ");
	
	choice = getchar();
	
	switch(choice)
	{
		case 'm':
			TypeM();
			break;
		case 'a':
			TypeA();
			break;
		case 'g':
			TypeG();
			break;
		case 'i':
			TypeI();
			break;
		case 'c':
			return 0;
			break;
			
		default:
			printf("존재하지 않는 선택.\n");
			break;

	}
	
		
	return 0;
}
