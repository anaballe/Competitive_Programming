# include <stdio.h>
# include <sys/types.h>
int main(int argc, char const *argv[])
{
	
	printf("Enter the source file\n");
	char source[100],dest[100];
	scanf("%s",source);
	printf("Enter the destination \n");
	scanf("%s",dest);
	FILE *fp1,*fp2;
	int c;
	if((fp2 = fopen(dest,"w")) && (fp1 = fopen(source,"r"))){
		while((c = getc(fp1)) != EOF)
			putc(c,fp2);
		fclose(fp2);
		fclose(fp1);
	}
	printf("Work done successfully !!");
	return 0;
}