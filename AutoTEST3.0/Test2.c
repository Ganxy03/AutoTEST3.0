#include <stdio.h>

struct ques {				//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	char question[300];		//����blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[5];
	char answer;
}a[30];
int main()
{
	FILE* fp=NULL;
	fp=fopen("��һ��.txt","r");
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
		//printf("��;%c\n", a[i].answer);
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
		fprintf(wp,"�𰸣�%c \n",a[c[j]].answer);
	}
	printf("�ļ�д��ɹ���\n");
	fclose(wp);
	return 0;
}
