#include <stdio.h>


int main(void)
{

	char words[100];

	FILE *f = fopen("birth2.txt", "w");
	

	int year = 1900; // 1900 ~ 2020
	int month = 1; // 01 ~ 12
	int day = 1; // 01 ~ 31


	for(int year = 1900; year <= 2020; year++)
	{
		for(month = 1; month <= 12; month++)
		{
			for(day = 1; day <= 31; day++)
			{
				sprintf(words, "%d%02d%02d\n", year, month, day);
				fprintf(f, words);
			}	
		}
		
	}


	fclose(f);

	return 0;
}
