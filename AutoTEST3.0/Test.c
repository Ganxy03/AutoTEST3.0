//CODE CREATE 2023/03/26 00:05 +0800(CST)
//CODE UPDATE 2023/03/29 09:28 +0800(CST)
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>			//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
#include <time.h>			//����blog.ganxy03.cn
#include <stdlib.h>			//Github:https://github.com/Ganxy03
#include <string.h>
#include <conio.h>
#include <windows.h>
void Tm();
void ChoseMod();			//��Դ����
struct ques {				//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	char question[300];		//����blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[5];
	char answer;
}a[30];						//��Դ����
struct ques2 {				//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	char question[300];		//����blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[2];
	char answer;
}b[540];					//��Դ����
int c[30] = { 0 };			//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
int count0 = 0;				//����blog.ganxy03.cn
void Intro()				//Github:https://github.com/Ganxy03
{
	printf("Title:AutoTEST(3.0��ʽ��)\n");
	printf("Author:Ganxy(ID���������һ����)\n");
	printf("Date:2023/3/29\n");
	printf("Intro:Ĭ�ϰ���ʡһģ��������ѡ���⣬ͨ���޸�����ַ����������;,\n���͵�ַhttp://blog.ganxy03.cn/?p=123\nԴ���עhttps://github.com/Ganxy03\n>>�Ȱ�д���� д�����������<<\n>>���ʹ�� �޳�����<<\n���Ż�:\n1.�˵�ѡ����ĸ��ѭ��\n2.��ʼ��һ����Ȼس�\n");
	printf("\n");			//��Դ����
	printf("\n");			//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	printf("\n");			//����blog.ganxy03.cn
	printf("\n");			//Github:https://github.com/Ganxy03
	Tm();
}
void Tm()					//��Դ����
{							//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	time_t timep;			//����blog.ganxy03.cn
	time(&timep);			//Github:https://github.com/Ganxy03
	struct tm* p = gmtime(&timep);
	printf("��ǰʱ�䣨����ʱ�䣩��%d/%d/%d", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %d:%d:%d\n", (8 + p->tm_hour), p->tm_min, p->tm_sec);
}
void Menu()
{
	printf("****  ѡ��ģʽ  ****\n");				//��Դ����
	printf("**** 1.ר��ѵ�� ****\n");				//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	printf("**** 2.���ѵ�� ****\n");				//����blog.ganxy03.cn
	printf("**** 3.��սѵ�� ****\n");				//Github:https://github.com/Ganxy03
	printf("**** 0.�˳����� ****\n");
	printf("********************\n");
	printf("\n");
}
void Menu2()
{
	printf("************      ѡ�����     ************\n");			//��Դ����
	printf("**** 1.��һ�� ****    **** 10.��ʮ��   ****\n");			//ת�ر�ע��ԭ����Ganxy ���Ƕ�������֧��
	printf("**** 2.�ڶ��� ****    **** 11.��ʮһ�� ****\n");			//����blog.ganxy03.cn
	printf("**** 3.������ ****    **** 12.��ʮ���� ****\n");			//Github:https://github.com/Ganxy03
	printf("**** 4.������ ****    **** 13.��ʮ���� ****\n");
	printf("**** 5.������ ****    **** 14.��ʮ���� ****\n");
	printf("**** 6.������ ****    **** 15.��ʮ���� ****\n");
	printf("**** 7.������ ****    **** 16.��ʮ���� ****\n");
	printf("**** 8.�ڰ��� ****    **** 17.��ʮ���� ****\n");
	printf("**** 9.�ھ��� ****    **** 18.��ʮ���� ****\n");
	printf("*******************************************\n");
}
void Menu3()
{
	printf("**************\n");
	printf("*** 1.��ʼ ***\n");
	printf("*** 0.�˵� ***\n");
	printf("**************\n");
	printf("\n");
}
void Menu4()
{
	printf("**************\n");
	printf("*** 1.���� ***\n");
	printf("*** 0.�˵� ***\n");
	printf("**************\n");
	printf("\n");
}
void Menu5()
{
	printf("**************\n");
	printf("*** 1.���� ***\n");
	printf("*** 0.�˵� ***\n");
	printf("**************\n");
	printf("\n");
}
FILE* fp = NULL;
FILE* Open1()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/��һ��.txt", "r");
	return fp;
}
FILE* Open2()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/�ڶ���.txt", "r");
	return fp;
}
FILE* Open3()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open4()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open5()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open6()
{
	fp = fopen("ѡ��ģ�����/2021�ϰ���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open7()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/��һ��.txt", "r");
	return fp;
}
FILE* Open8()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/�ڶ���.txt", "r");
	return fp;
}
FILE* Open9()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open10()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open11()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open12()
{
	fp = fopen("ѡ��ģ�����/2021�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open13()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/��һ��.txt", "r");
	return fp;
}
FILE* Open14()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/�ڶ���.txt", "r");
	return fp;
}
FILE* Open15()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open16()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open17()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
FILE* Open18()
{
	fp = fopen("ѡ��ģ�����/2022�°���ѡ��ģ�����/������.txt", "r");
	return fp;
}
void Read()
{
	for (int i = 0; i < 30; i++)
	{
		fgets(a[i].question, 300, fp);
		printf("%s", a[i].question);
		for (int j = 0; j < 4; j++)
		{
			fgets(a[i].select[j], 200, fp);
			printf("%s", a[i].select[j]);
		}
		fgets(a[i].temp, 5, fp);
		a[i].answer = *a[i].temp;
		printf("��;%c\n", a[i].answer);
	}
}
void Bank()
{
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ��������λ��\n");
	}
	Read();
}
void Print_QsNum()
{
	printf("��ϲ�㣡ˢ��30��\n");
	printf("�����Ѵ�ӡ�ڱ���Test.txt�ļ��� �����и��̹��� Ԥף���Ķ��� �ɵĶ���!\n");
	printf("���%d�� �ֱ��ǵ� ", count0);
	for (int i = 0; i < count0; i++)
	{
		printf("%d ", c[i] + 1);
	}
	printf("��\n");

	FILE* wp = NULL;
	wp = fopen("Test.txt", "w+");
	for (int j = 0; j < count0; j++)
	{
		fprintf(wp, "%s", a[c[j]].question);
		for (int k = 0; k < 4; k++)
		{
			fprintf(wp, "%s \n", a[c[j]].select[k]);
		}
		fprintf(wp, "�𰸣�%c \n", a[c[j]].answer);
	}
	fclose(wp);
}
int SetQus_Judge(int n)
{
	int count = 0;
	int count2 = 0;
	int count3 = n;
	while (count >= 0)
	{
	Start:
		system("cls");
		Intro();
		printf("\n");
		printf(">>���ǵ�%d��ѡ���⣺\n", count3);			// input/randnum���βη���ֵ ��ʾ��ǰ�ǵ�%d��
		char an;
		printf("%s", a[count].question);
		for (int j = 0; j < 4; j++)
		{
			printf("%s", a[count].select[j]);
		}
		printf("ѡ��>>");
		an = getchar();
		while (getchar() != '\n')
		{
			//�ѻ������е�����ȫ������
		}
		if (an >= 'a' && an <= 'd')
		{
			an -= 32;
			if (an == a[count].answer)
			{
				printf("Binggo�������(Enter������ / �������Enter���˳�)\n");
				count2++;
			}
			else
			{
				printf("�ش����\n");
				printf("��ȷ���ǣ�%c(Enter������ / �������Enter���˳�)\n", a[count].answer);
				c[count0] = count;
				count0++;
			}
		}
		else if (an >= 'A' && an <= 'D')
		{
			if (an == a[count].answer)
			{
				printf("Binggo�������(Enter������ / �������Enter���˳�)\n");
				count2++;
			}
			else
			{
				printf("�ش����\n");
				printf("��ȷ���ǣ�%c(Enter������ / �������Enter���˳�)\n", a[count].answer);
				c[count0] = count;
				count0++;
			}
		}
		else
		{
			printf("������� ���������룡");
			getch();
			goto Start;
		}

		if (count == 29)	//0-29 ��30��
		{
			//Second:

			getch();
			system("cls");
			Intro();
			Menu5();
			Print_QsNum();
			int input;
			//printf("��ϲ�㣡ˢ��30��\n");
			printf("���%d��\n", count2);
			printf("ѡ��>>");
			scanf("%d", &input);
			if (input == 0)								//�˴����벻����׳ ����ֻ��return 0һ�ʴ����� ����ˢ30��û��ע�� �����ø�
			{
				system("cls");
				Intro();
				Menu();
				ChoseMod();
				getch();
			}
			return 0;
		}
		getch();
		count++;
	}
	return 0;
}

void ReChoseBank()
{
	system("cls");
	Intro();
	Menu2();
	int input;
	printf("����ѡ�����ѡ��>>");
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			system("cls");
			Intro();
			printf("\n");
			Open1();
			Bank();
			SetQus_Judge(input);

			system("pause");
			break;
		case 2:
			system("cls");
			Intro();
			printf("\n");
			Open2();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 3:
			system("cls");
			Intro();
			printf("\n");
			Open3();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 4:
			system("cls");
			Intro();
			printf("\n");
			Open4();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 5:
			system("cls");
			Intro();
			printf("\n");
			Open5();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 6:
			system("cls");
			Intro();
			printf("\n");
			Open6();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 7:
			system("cls");
			Intro();
			printf("\n");
			Open7();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 8:
			system("cls");
			Intro();
			printf("\n");
			Open8();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 9:
			system("cls");
			Intro();
			printf("\n");
			Open9();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 10:
			system("cls");
			Intro();
			printf("\n");
			Open10();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 11:
			system("cls");
			Intro();
			printf("\n");
			Open11();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 12:
			system("cls");
			Intro();
			printf("\n");
			Open12();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 13:
			system("cls");
			Intro();
			printf("\n");
			Open13();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 14:
			system("cls");
			Intro();
			printf("\n");
			Open14();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 15:
			system("cls");
			Intro();
			printf("\n");
			Open15();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 16:
			system("cls");
			Intro();
			printf("\n");
			Open16();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 17:
			system("cls");
			Intro();
			printf("\n");
			Open17();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 18:
			system("cls");
			Intro();
			printf("\n");
			Open18();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		default:
			system("cls");
			Intro();
			printf("\n");
			ReChoseBank();
			break;
		}
	} while (input);
}
void ChoseBank()
{
	system("cls");
	Intro();
	Menu2();
	int input;
	printf("��������ѡ�����ѡ��>>");
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 1:
			system("cls");
			Intro();
			printf("\n");
			Open1();
			Bank();
			SetQus_Judge(input);

			system("pause");
			break;
		case 2:
			system("cls");
			Intro();
			printf("\n");
			Open2();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 3:
			system("cls");
			Intro();
			printf("\n");
			Open3();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 4:
			system("cls");
			Intro();
			printf("\n");
			Open4();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 5:
			system("cls");
			Intro();
			printf("\n");
			Open5();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 6:
			system("cls");
			Intro();
			printf("\n");
			Open6();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 7:
			system("cls");
			Intro();
			printf("\n");
			Open7();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 8:
			system("cls");
			Intro();
			printf("\n");
			Open8();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 9:
			system("cls");
			Intro();
			printf("\n");
			Open9();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 10:
			system("cls");
			Intro();
			printf("\n");
			Open10();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 11:
			system("cls");
			Intro();
			printf("\n");
			Open11();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 12:
			system("cls");
			Intro();
			printf("\n");
			Open12();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 13:
			system("cls");
			Intro();
			printf("\n");
			Open13();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 14:
			system("cls");
			Intro();
			printf("\n");
			Open14();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 15:
			system("cls");
			Intro();
			printf("\n");
			Open15();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 16:
			system("cls");
			Intro();
			printf("\n");
			Open16();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 17:
			system("cls");
			Intro();
			printf("\n");
			Open17();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		case 18:
			system("cls");
			Intro();
			printf("\n");
			Open18();
			Bank();
			SetQus_Judge(input);
			system("pause");
			break;
		default:
			system("cls");
			Intro();
			printf("\n");
			ReChoseBank();
			break;
		}
	} while (input);
}
void Quit()
{
	system("cls");
	Intro();
	printf("��ӭ�´�ʹ�ã��ټ�");
	getch();
	exit(0);
}
void RamSetQ()
{
	system("cls");
	Intro();
	printf("\n");
	srand((unsigned int)time(NULL));
	int randnum;
	randnum = rand() % 18 + 1;
	switch (randnum)
	{
	case 1:
		system("cls");
		Intro();
		Open1();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 2:
		system("cls");
		Intro();
		Open2();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 3:
		system("cls");
		Intro();
		Open3();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 4:
		system("cls");
		Intro();
		Open4();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 5:
		system("cls");
		Intro();
		Open5();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 6:
		system("cls");
		Intro();
		Open6();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 7:
		system("cls");
		Intro();
		Open7();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 8:
		system("cls");
		Intro();
		Open8();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 9:
		system("cls");
		Intro();
		Open9();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 10:
		system("cls");
		Intro();
		Open10();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 11:
		system("cls");
		Intro();
		Open11();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 12:
		system("cls");
		Intro();
		Open12();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 13:
		system("cls");
		Intro();
		Open13();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 14:
		system("cls");
		Intro();
		Open14();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 15:
		system("cls");
		Intro();
		Open15();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 16:
		system("cls");
		Intro();
		Open16();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 17:
		system("cls");
		Intro();
		Open17();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	case 18:
		system("cls");
		Intro();
		Open18();
		Bank();
		SetQus_Judge(randnum);
		system("pause");
		break;
	default:
		break;
	}
}
void Challenge()
{
	system("cls");
	Intro();
	printf("\n");
	//Tm();
	FILE* fp = NULL;
	fp = fopen("ѡ��ģ�����/��ս�����.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ��������λ��\n");
	}
	for (int i = 0; i < 540; i++)
	{
		fgets(b[i].question, 300, fp);
		for (int j = 0; j < 4; j++)
		{
			fgets(b[i].select[j], 200, fp);
		}
		fgets(b[i].temp, 5, fp);
		b[i].answer = *b[i].temp;
	}
	int count = 0;
	int count2 = 0;
	while (count >= 0)
	{
		int randnum;
		int pan[30] = { 0 };
		srand((unsigned int)time(NULL));
		randnum = rand() % 540 + 1;
	Start:
		system("cls");
		Intro();
		printf("\n");
		//Tm();
		if (pan[randnum] == 1)
		{
			continue;
			pan[randnum]++;
		}
		printf(">>������ս��\n");
		printf("%s", b[randnum].question);
		for (int j = 0; j < 4; j++)
		{
			printf("%s", b[randnum].select[j]);
		}
		char an;
		printf("ѡ��>>");
		scanf("%c", &an);
		if (an >= 'a' && an <= 'd')
		{
			an -= 32;
			if (an == b[randnum].answer)
			{
				printf("Binggo�������(Enter������ / �������Enter���˳�)\n");
				count2++;
			}
			else
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu5();
				printf("��սʧ�ܣ�");
				printf("��ȷ���ǣ�%c\n", b[randnum].answer);
				printf("��ϲ���Ѿ�ˢ��%d�� \n", count + 1);
				printf("���%d��\n", count2);
				printf("��������ѡ�����ѡ��>>");
				int input;
				scanf("%d", &input);
				if (input == 0)
				{
					system("cls");
					Intro();
					printf("\n");
					//Tm();
					Menu();
					ChoseMod();
				}
				else if (input == 1)
				{
					Challenge();
				}
			}
		}
		else if (an >= 'A' && an <= 'D')
		{
			if (an == b[randnum].answer)
			{
				printf("Binggo�������(Enter������ / �������Enter���˳�)\n");
				count2++;
			}
			else
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu5();
				printf("��սʧ�ܣ�");
				printf("��ȷ���ǣ�%c\n", b[randnum].answer);
				printf("��ϲ���Ѿ�ˢ��%d�� \n", count + 1);
				printf("���%d��\n", count2);
				printf("��������ѡ�����ѡ��>>");
				int input;
				scanf("%d", &input);
				if (input == 0)
				{
					system("cls");
					Intro();
					printf("\n");
					//Tm();
					Menu();
					ChoseMod();
				}
				else if (input == 1)
				{
					Challenge();
				}
			}
		}
		else
		{
			printf("��������ȷ��ѡ��(Enter������ / �������Enter���˳�)\n");
			char flag1;
			char temp1;
			scanf("%c", &temp1);
			flag1 = getchar();
			if (flag1 != '\n')
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu4();
				printf("��ϲ���Ѿ�ˢ��%d�� \n", count + 1);
				printf("���%d��\n", count2);
				printf("��ӭ�´�ʹ��\n");
				printf("��������ѡ�����ѡ��>>");
				int input;
				scanf("%d", &input);
				if (input == 0)
				{
					system("cls");
					Intro();
					printf("\n");
					//Tm();
					Menu();
					ChoseMod();
				}
			}
			goto Start;
		}
		count++;
		char flag2;
		char temp2;
		scanf("%c", &temp2);
		flag2 = getchar();
		if (flag2 != '\n')
		{
			system("cls");
			Intro();
			printf("\n");
			//Tm();
			Menu4();
			printf("��ϲ���Ѿ�ˢ��%d�� \n", count + 1);
			printf("���%d��\n", count2);
			printf("��ӭ�´�ʹ��\n");
			printf("��������ѡ�����ѡ��>>");
			int input;
			scanf("%d", &input);
			if (input == 0)
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu();
				ChoseMod();
			}
		}
		if (count == 2 || count == 3 || count == 30 || count == 40 || count == 50 || count == 60 || count == 70 || count == 80 || count == 90 || count == 100 || count == 110)
		{
			system("cls");
			Intro();
			printf("\n");
			//Tm();
			printf("��ϲ���Ѿ�ˢ��%d�� \n", count + 1);
			printf("���%d��\n", count2);
			printf("�س�����\n");
		}
	}
	//return 0;
}
void ReChoseMod()
{
	system("cls");
	Intro();
	Menu();
	int input;
	printf("����ѡ�����ѡ��>>");
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 3:
			Challenge();
			break;
		case 2:
			RamSetQ();
			break;
		case 1:
			ChoseBank();
			break;
		case 0:
			Quit();
			break;
		default:
			ReChoseMod();
			break;
		}
	} while (input);
	system("pause");
}
void ChoseMod()
{
	int input;
	printf("��������ѡ�����ѡ��>>");			//���������������ַ���ѭ�� ���Գ���������洢input
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case 3:
			Challenge();
			break;
		case 2:
			RamSetQ();
			break;
		case 1:
			ChoseBank();
			break;
		case 0:
			Quit();
			break;
		default:
			ReChoseMod();
			break;
		}
	} while (input);
	system("pause");
}
int main()
{
	system("title AutoTest3.0");							//ÿ�εĵ�һ������Ҫ�Ȼس�һ�²��ܽ�����һ�� ��ʱ�������ԭ��
	Intro();
	Menu();
	ChoseMod();
	return 0;
}
