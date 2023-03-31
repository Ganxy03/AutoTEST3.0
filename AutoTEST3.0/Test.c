//CODE CREATE 2023/03/26 00:05 +0800(CST)
//CODE UPDATE 2023/03/29 09:28 +0800(CST)
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>			//转载标注下原作者Ganxy 这是对我最大的支持
#include <time.h>			//博客blog.ganxy03.cn
#include <stdlib.h>			//Github:https://github.com/Ganxy03
#include <string.h>
#include <conio.h>
#include <windows.h>
void Tm();
void ChoseMod();			//开源不易
struct ques {				//转载标注下原作者Ganxy 这是对我最大的支持
	char question[300];		//博客blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[5];
	char answer;
}a[30];						//开源不易
struct ques2 {				//转载标注下原作者Ganxy 这是对我最大的支持
	char question[300];		//博客blog.ganxy03.cn
	char select[4][200];	//Github:https://github.com/Ganxy03
	char temp[2];
	char answer;
}b[540];					//开源不易
int c[30] = { 0 };			//转载标注下原作者Ganxy 这是对我最大的支持
int count0 = 0;				//博客blog.ganxy03.cn
void Intro()				//Github:https://github.com/Ganxy03
{
	printf("Title:AutoTEST(3.0正式版)\n");
	printf("Author:Ganxy(ID：如果梦醒一分钟)\n");
	printf("Date:2023/3/29\n");
	printf("Intro:默认包含省一模拟题库里的选择题，通过修改题库地址可作其他用途,\n博客地址http://blog.ganxy03.cn/?p=123\n源码关注https://github.com/Ganxy03\n>>热爱写代码 写到世界充满爱<<\n>>免费使用 无偿分享<<\n待优化:\n1.菜单选择字母死循环\n2.开始第一题得先回车\n");
	printf("\n");			//开源不易
	printf("\n");			//转载标注下原作者Ganxy 这是对我最大的支持
	printf("\n");			//博客blog.ganxy03.cn
	printf("\n");			//Github:https://github.com/Ganxy03
	Tm();
}
void Tm()					//开源不易
{							//转载标注下原作者Ganxy 这是对我最大的支持
	time_t timep;			//博客blog.ganxy03.cn
	time(&timep);			//Github:https://github.com/Ganxy03
	struct tm* p = gmtime(&timep);
	printf("当前时间（北京时间）：%d/%d/%d", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %d:%d:%d\n", (8 + p->tm_hour), p->tm_min, p->tm_sec);
}
void Menu()
{
	printf("****  选择模式  ****\n");				//开源不易
	printf("**** 1.专项训练 ****\n");				//转载标注下原作者Ganxy 这是对我最大的支持
	printf("**** 2.随机训练 ****\n");				//博客blog.ganxy03.cn
	printf("**** 3.挑战训练 ****\n");				//Github:https://github.com/Ganxy03
	printf("**** 0.退出程序 ****\n");
	printf("********************\n");
	printf("\n");
}
void Menu2()
{
	printf("************      选择题库     ************\n");			//开源不易
	printf("**** 1.第一套 ****    **** 10.第十套   ****\n");			//转载标注下原作者Ganxy 这是对我最大的支持
	printf("**** 2.第二套 ****    **** 11.第十一套 ****\n");			//博客blog.ganxy03.cn
	printf("**** 3.第三套 ****    **** 12.第十二套 ****\n");			//Github:https://github.com/Ganxy03
	printf("**** 4.第四套 ****    **** 13.第十三套 ****\n");
	printf("**** 5.第五套 ****    **** 14.第十四套 ****\n");
	printf("**** 6.第六套 ****    **** 15.第十五套 ****\n");
	printf("**** 7.第七套 ****    **** 16.第十六套 ****\n");
	printf("**** 8.第八套 ****    **** 17.第十七套 ****\n");
	printf("**** 9.第九套 ****    **** 18.第十八套 ****\n");
	printf("*******************************************\n");
}
void Menu3()
{
	printf("**************\n");
	printf("*** 1.开始 ***\n");
	printf("*** 0.菜单 ***\n");
	printf("**************\n");
	printf("\n");
}
void Menu4()
{
	printf("**************\n");
	printf("*** 1.继续 ***\n");
	printf("*** 0.菜单 ***\n");
	printf("**************\n");
	printf("\n");
}
void Menu5()
{
	printf("**************\n");
	printf("*** 1.重来 ***\n");
	printf("*** 0.菜单 ***\n");
	printf("**************\n");
	printf("\n");
}
FILE* fp = NULL;
FILE* Open1()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第一套.txt", "r");
	return fp;
}
FILE* Open2()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第二套.txt", "r");
	return fp;
}
FILE* Open3()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第三套.txt", "r");
	return fp;
}
FILE* Open4()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第四套.txt", "r");
	return fp;
}
FILE* Open5()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第五套.txt", "r");
	return fp;
}
FILE* Open6()
{
	fp = fopen("选择模拟题库/2021上半年选择模拟题库/第六套.txt", "r");
	return fp;
}
FILE* Open7()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第一套.txt", "r");
	return fp;
}
FILE* Open8()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第二套.txt", "r");
	return fp;
}
FILE* Open9()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第三套.txt", "r");
	return fp;
}
FILE* Open10()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第四套.txt", "r");
	return fp;
}
FILE* Open11()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第五套.txt", "r");
	return fp;
}
FILE* Open12()
{
	fp = fopen("选择模拟题库/2021下半年选择模拟题库/第六套.txt", "r");
	return fp;
}
FILE* Open13()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第一套.txt", "r");
	return fp;
}
FILE* Open14()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第二套.txt", "r");
	return fp;
}
FILE* Open15()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第三套.txt", "r");
	return fp;
}
FILE* Open16()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第四套.txt", "r");
	return fp;
}
FILE* Open17()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第五套.txt", "r");
	return fp;
}
FILE* Open18()
{
	fp = fopen("选择模拟题库/2022下半年选择模拟题库/第六套.txt", "r");
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
		printf("答案;%c\n", a[i].answer);
	}
}
void Bank()
{
	if (fp == NULL)
	{
		printf("文件打开失败！请检查题库位置\n");
	}
	Read();
}
void Print_QsNum()
{
	printf("恭喜你！刷完30题\n");
	printf("错题已打印在本地Test.txt文件中 请自行复盘巩固 预祝考的都会 蒙的都对!\n");
	printf("答错%d题 分别是第 ", count0);
	for (int i = 0; i < count0; i++)
	{
		printf("%d ", c[i] + 1);
	}
	printf("题\n");

	FILE* wp = NULL;
	wp = fopen("Test.txt", "w+");
	for (int j = 0; j < count0; j++)
	{
		fprintf(wp, "%s", a[c[j]].question);
		for (int k = 0; k < 4; k++)
		{
			fprintf(wp, "%s \n", a[c[j]].select[k]);
		}
		fprintf(wp, "答案：%c \n", a[c[j]].answer);
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
		printf(">>这是第%d套选择题：\n", count3);			// input/randnum的形参返回值 提示当前是第%d题
		char an;
		printf("%s", a[count].question);
		for (int j = 0; j < 4; j++)
		{
			printf("%s", a[count].select[j]);
		}
		printf("选择：>>");
		an = getchar();
		while (getchar() != '\n')
		{
			//把缓存区中的内容全部读走
		}
		if (an >= 'a' && an <= 'd')
		{
			an -= 32;
			if (an == a[count].answer)
			{
				printf("Binggo！答对了(Enter键继续 / 任意键加Enter键退出)\n");
				count2++;
			}
			else
			{
				printf("回答错误！\n");
				printf("正确答案是：%c(Enter键继续 / 任意键加Enter键退出)\n", a[count].answer);
				c[count0] = count;
				count0++;
			}
		}
		else if (an >= 'A' && an <= 'D')
		{
			if (an == a[count].answer)
			{
				printf("Binggo！答对了(Enter键继续 / 任意键加Enter键退出)\n");
				count2++;
			}
			else
			{
				printf("回答错误！\n");
				printf("正确答案是：%c(Enter键继续 / 任意键加Enter键退出)\n", a[count].answer);
				c[count0] = count;
				count0++;
			}
		}
		else
		{
			printf("输入错误 请重新输入！");
			getch();
			goto Start;
		}

		if (count == 29)	//0-29 共30题
		{
			//Second:

			getch();
			system("cls");
			Intro();
			Menu5();
			Print_QsNum();
			int input;
			//printf("恭喜你！刷完30题\n");
			printf("答对%d题\n", count2);
			printf("选择：>>");
			scanf("%d", &input);
			if (input == 0)								//此处代码不够健壮 仅仅只是return 0一笔带过了 好在刷30题没人注意 不过得改
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
	printf("重新选择你的选项>>");
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
	printf("输入数字选择你的选项>>");
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
	printf("欢迎下次使用！再见");
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
	fp = fopen("选择模拟题库/挑战题题库.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败！请检查题库位置\n");
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
		printf(">>这是挑战题\n");
		printf("%s", b[randnum].question);
		for (int j = 0; j < 4; j++)
		{
			printf("%s", b[randnum].select[j]);
		}
		char an;
		printf("选择：>>");
		scanf("%c", &an);
		if (an >= 'a' && an <= 'd')
		{
			an -= 32;
			if (an == b[randnum].answer)
			{
				printf("Binggo！答对了(Enter键继续 / 任意键加Enter键退出)\n");
				count2++;
			}
			else
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu5();
				printf("挑战失败！");
				printf("正确答案是：%c\n", b[randnum].answer);
				printf("恭喜你已经刷了%d题 \n", count + 1);
				printf("答对%d题\n", count2);
				printf("输入数字选择你的选项>>");
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
				printf("Binggo！答对了(Enter键继续 / 任意键加Enter键退出)\n");
				count2++;
			}
			else
			{
				system("cls");
				Intro();
				printf("\n");
				//Tm();
				Menu5();
				printf("挑战失败！");
				printf("正确答案是：%c\n", b[randnum].answer);
				printf("恭喜你已经刷了%d题 \n", count + 1);
				printf("答对%d题\n", count2);
				printf("输入数字选择你的选项>>");
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
			printf("请输入正确的选项(Enter键继续 / 任意键加Enter键退出)\n");
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
				printf("恭喜你已经刷了%d题 \n", count + 1);
				printf("答对%d题\n", count2);
				printf("欢迎下次使用\n");
				printf("输入数字选择你的选项>>");
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
			printf("恭喜你已经刷了%d题 \n", count + 1);
			printf("答对%d题\n", count2);
			printf("欢迎下次使用\n");
			printf("输入数字选择你的选项>>");
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
			printf("恭喜你已经刷了%d题 \n", count + 1);
			printf("答对%d题\n", count2);
			printf("回车继续\n");
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
	printf("重新选择你的选项>>");
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
	printf("输入数字选择你的选项>>");			//输入除了数字外的字符死循环 可以尝试用数组存储input
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
	system("title AutoTest3.0");							//每次的第一题总是要先回车一下才能进行下一题 暂时还不理解原因
	Intro();
	Menu();
	ChoseMod();
	return 0;
}
