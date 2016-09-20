#include<stdio.h>
#include<string.h>
int main()
{
    int num=0;
    char str[32]={0};
    float salary=0;
    int i=0;
    FILE *fp=fopen("111","w");
    for(;i<2;i++)
    {
	printf("=========================\n"
		"please input number:");
	scanf("%d",&num);
	printf("please input name:");
	scanf("%s",str);
	printf("please input salary:");
	scanf("%f",&salary);
	fprintf(fp,"%d\t%s\t%.2f\n",num,str,salary);
	memset(str,0,32);
    }
    fclose(fp);
    fp=fopen("111","r");
    while(fscanf(fp,"%d",&num)!=EOF)
    {
	fscanf(fp,"%d",&num);
	fscanf(fp,"%s",str);
	fscanf(fp,"%f",&salary);
	printf("%d  %s %.2f\n",num,str,salary);
	memset(str,0,32);

    }
    fclose(fp);
    return 0;
}
