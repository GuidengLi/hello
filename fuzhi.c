#include <stdio.h>

int main()
{
	char ch;
	int ret;
	FILE *fp1;
	FILE *fp2;
	fp1 = fopen("file1.c", "r");
	fp2 = fopen("file2.c", "w");
	
	while(1)
	{
	ret = fscanf(fp1, "%c", &ch);
	
	if(ret<=0)
	{
	    break;
	 }
    fprintf(fp2,"%c", ch);
	}
	
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
