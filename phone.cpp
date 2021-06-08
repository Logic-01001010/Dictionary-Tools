#include <stdio.h>


int main(void)
{

	char words[100];

	FILE *f = fopen("phone.txt", "w");
	

	int first, second;


	for(first = 0; first <= 9999; first++)
	{
		for(second = 0; second <= 9999; second++)
		{
			sprintf(words, "010%04d%04d\n", first, second);
			fprintf(f, words);
		}	
	}
		



	fclose(f);

	return 0;
}
