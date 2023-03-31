#include <stdio.h>

struct ques {				//转载标注下原作者Ganxy 这是对我最大的支持
	char question[300];		//博客blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[5];
	char answer;
}a[30];
int main()
{
	FILE* fp=NULL;
	fp=fopen("第一套.txt","r");
	for (int i = 0; i < 30; i++)
	{
		fgets(a[i].question, 300, fp);
		//printf("%s", a[i].question);
		for (int j = 0; j < 4; j++)
		{
			fgets(a[i].select[j], 200, fp);
			//printf("%s", a[i].select[j]);
		}
		fgets(a[i].temp, 5, fp);
		a[i].answer = *a[i].temp;
		//printf("答案;%c\n", a[i].answer);
	}
	
	int c[10]={0,2,5,9,11,13,15,16,18,20};
	for(int i=0;i<10;i++)
	{
		printf("%d ",c[i]+1);
	}
	FILE* wp=NULL;
	wp=fopen("Test.txt","w");
	for(int j=0;j<10;j++)
	{
		fprintf(wp,"%s \n",a[c[j]].question);
		for(int k=0;k<4;k++)
		{
			fprintf(wp,"%s \n",a[c[j]].select[k]);
		}
		fprintf(wp,"答案：%c \n",a[c[j]].answer);
	}
	printf("文件写入成功！\n");
	fclose(wp);
	return 0;
}
