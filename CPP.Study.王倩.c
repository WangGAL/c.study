// cstudy.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

//#include<stdio.h>
//int main()
//{
//    int  i,j = 0, count = 0, letters = 0, space = 0, other = 0;
//    char str[100];
//    printf("enter string=");
//    gets_s(str);
//    for(i=0;str[i]!=0;i++)
//    {

//        if ((str[i] >= 'a' && str[i] <= 'z') ||( str[i] >= 'A' && str[i] <= 'Z'))
//            letters++;
//        else if (str[i] >= '0' && str[i] <= '9')
//            count++;
//        else if (str[i] == ' ')
//            space++;
//        else
//            other++;
//    }
//    printf("letters have %d\n", letters);
//    printf("count have % d\n", count);
//    printf("space have % d\n", space);
//    printf("other have % d", other);
//   return 0;

//#include<stdio.h>
//int main()
//{
    /*int i=1, odd = 0, enve = 0, sumo = 0, sumj = 0,aveo,avej;
    char str[200];
        printf("enter num:");
    gets_s(str);
    while (str[i] != 0)
    {
        if (str[i] % 2== 0) {
            enve++;
            sumo = sumo + str[i];
        }
        else if (str[i] % 2 != 0)
        {
            odd++;
            sumj = sumj + str[i];
        }
    }
    aveo = sumo / enve;
    avej = sumj / odd;
    printf("enve=%d\nodd=%d", enve, odd);
    printf("aveo=%d\naveo=%d", aveo, avej);
    return 0;
}*/
        /*int F, C;
        printf("������һ������");
        F = getchar();
        C = 5 * (F - 32) / 9;
        printf("Celsius=%d", C);
        return 0;
    }*/
    /*int i, score;
    char q= 'A',w= 'B',e= 'C',r= 'D',t= 'E';
    printf("enter score=");
    scanf_s("%d", &score);
    i = score / 10;
    switch (i)
    {
    case 10:
    case 9:printf("%c", 'A');break;
    case 8:printf("%c", 'B');break;
    case 7:printf("%c", 'C');break;
    case 6:printf("%c", 'D');break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:printf("%c", 'E');
    default:printf("�������");
    }
    return 0;
}*/
    /*int j, i;
    for (i = 1;i <= 9;i++)
    {
        for (j = 1;j <= i;j++)
        {
            printf("%d*%d%=%-3d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}*/
   /* float i, n = 100;
    for (i = 1; i <= 10; i++)
    {
        n = n / 2;
    }
    printf("��ʮ�η����߶�Ϊ��%f", n);
    return 0;
}*/
   /* int n, i;
    for (n = 100;n <= 200;n++)
    {
        for (i = 2;i <= n;i++) {
            if (n % i == 0)break;
        }
        if (i >=n)
            printf("%d\n", n);
    }
    return 0;
}*/
    /*int n, i, sum = 1;
    printf("enter n=");
    scanf_s("%d", &n);
    for (i = 1;i <= n;i++)
    {
        sum = i * sum;
    }
    printf("n�Ľ׳���%d", sum);
    return 0;*/
    /*int a, b, c, max;
    printf("������������int\n");
    scanf_s("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c;
    }
    else
    {
        if (b > c)
            max = b;
        else max = c;
    }
    printf("�����Ϊ;%d", max);*/
   /* float  num1, num2;
    printf("�������һ����;\n");
    scanf_s("%f", &num1);
    printf("������ڶ�����;\n");
    scanf_s("%f", &num2);
    printf("������֮��Ϊ;%.2f\n", num1 + num2);
    printf("������������;%d", int(num1) % int(num2));
    /*char symbol;
    float a, b;
    printf("������һ���������(+,-,*,/)");
        scanf_s("%c", &symbol);
        printf("��������������");
        scanf_s("%f%f", &a, &b);
        switch (symbol)
        {
        case'+':
            printf("%.2f+%.2f=%.2f", a, b, a + b);
            break;
        case'-':
            printf("%.2f-%.2f=%.2f", a, b, a - b);
            break;
        case'*':
            printf("%.2f*%.2f=%.2f", a, b, a * b);
            break;
        case'/':
            if (b != 0)
                printf("%.2f/%.2f=%.2f", a, b, a / b);
            else
                printf("��������Ϊ��");
            break;
        default:
            printf("�������");*/
   /* int i;
    printf("����һ����");
    scanf_s("%d", &i);
    if (i % 3 == 0, i % 5 == 0)
        printf("%d", i);
    else
        printf("�������");
    return 0;*/

    /*int i = 1, sum = 1;
    while (i <= 100) {
        i++;
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;*/
   /* int i, max;
    int numbers[10];
        if (numbers[i] > max)
        max = numbers[i];int numbers[10];
    for (i = 0; i < 10; i++)
    {
        printf("�������%d����:",i+1);
            scanf_s("%d", &numbers[i]);
    }
    max = numbers[0];
    for (i = 0; i < 10; i++) {
    }
    printf("��������%d", max);*/
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char str1[] = "I LOVE YOU";
//    char str2[] = "**********";
//    int left = 0;
//    int right = strlen(str1) - 1;
//    while (left <= right)
//    {
//        str2[left] = str1[left];
//        str2[right] = str1[right];
//        printf("%s\n", str2);
//        Sleep(1000);
//        system("cls");
        /*left++;
        right--;
    }
    printf("%s\n", str2);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a, b[2] = { 0 },c[2] = { 0 };
    scanf_s("%d", &a);
    while(a != 0)
    {
        if (a % 2 == 0) {
            b[0]++;
            c[0] = a + c[0];;
    }
        else{
            b[1]++;
            c[1] = c[1] + a;
        }
        scanf_s("%d", &a);
    }
    printf("ż��������%d\t��ֵΪ;%d\n��������Ϊ��%d\t��ֵΪ��%d", b[0], c[0] / b[0], b[1], c[1] / b[1]);
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    while (1)
    {
        printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�������\n");
        scanf_s("%s", input);
        if (strcmp(input, "������") == 0)
        {
            system("shutdown -a");
            break;
        }
    }
    system("color 0A");
    return 0;
  }  */
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void game();
void menu()
{
    printf("************************************\n");
    printf("*****    1.play     0.exit     *****\n");
    printf("************************************\n");
}
void game()
{
    int ret = 0;
    int guess = 0;
    long long times=time(NULL);
   // time_t time(time_t *time)
	ret = times % 10000;
    while (1)
    {
        printf("����������>");
        scanf_s("%d", &guess);
        if (guess > ret)
        printf("�´���");
        else if (guess < ret)
        printf("��С��");
        else
        printf("��ϲ��¶���");

    }
}
int main()
{
     int  input = 0;
     do {
         menu();
         printf("��ѡ��>:");
         scanf_s("%d", &input);
         switch (input)
         {
         case 1 :
             game();
             break;
         case 0 :
             printf("�˳���Ϸ\n");
             break;
         defauit:
             printf("�����\n");
             break;
         }

     } while (input);
     return 0;

}*/
/*#include<stdio.h>
int main()
{
    int  a[5][5] = { {12,23,2,83,87},{1,3,4,90,54},{12,56,67,78,96},{97,37,39,61,62},{42,36,89,19,32} };
    int i, j, max = a[0][0], min = a[0][0];
    int x, y, m, n, sum = 0;
    for (i = 0;i < 5;i++)
    {
        for (j = 0;j < 5;j++) {
            if (a[i][j] > max)
            {
                max = a[i][j];
                x = i;
                y = j;
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
                m = i;
                n = j;
            }
        }
    }
    for (i = 0;i < 5;i++) {
        sum = sum + a[i][i] + a[i][4 - i];
    }

    printf("sum=%d\n", sum);
    printf("a[%d][%d]=%d\n", x, y,max);
        printf("a[%d][%d]=%d" ,m, n,min);
        return 0;
}*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[] = "hello";
//   char str2[] = "world";
//   char  str3[] = "code";
//   char a[20] = { 0 };
//    strcat(a, str1);
//    strcat(a, str2);
//    strcat(a, str3);
//    printf("%s\n", a);
//    return 0;
//}
//#include<stdio.h>
//	int main()
//	{
//	int str[10],i,j,k;
//	printf("������ʮ����>");
//	for(i=0;i<10;i++)
//		scanf("%d",&str[i]);
//		sort(str,10);
//		printf("������һ��������������ʽ����>");
//		scanf("%d",&k);
//		sort(str,11);
//		for(i=0;i<11;i++)
//		printf("%d\n",str[i]);
//		return 0;
//}
//int sort(int *str,int n)
//	{
//		int t;
//		for(int i=0;i<n-1;i++)
//		{
//			for(int j=0;j<n-i-1;j++)
//			{
//				if(str[j]>str[j+1])
//				{
//					t=str[j+1];
//					str[j+1]=str[i];
//					str[i]=t;
//				}
//			}
//		}
//	}
/*#include<stdio.h>
int is_zhishu(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	printf("enter n>");
	scanf("%d",&n);
	if(1==is_zhihshu(n)&&n%2!=0)
	printf("%d ��ֻ����",n);
	while(0==is_zhishu(n))
	{
	for(i=2;i<n;i++)
	{
		if(n%is_zhishu(i)==0)
		printf("%d",i);
	}
	if(i%2==0)
		printf("%d����ֻ����\n");
	else
	printf("%d��ֻ����");
	}
return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n, i;
    int is_prime();
    printf("enter n>");
    scanf_s("%d", &n);
    if (is_prime(n)==1){
    printf("%d is prime",n);}
    else{
    printf("%d not is prime",n);}
    return 0;
}
int is_prime(int n)
{
    int i;
    for (i = 2;i < n;i++)
    {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}*/
/*#include<stdio.h>
int main()
{
    int str[10][10],i,j;
    for (i = 0;i < 10;i++)
    {
        for (j = 0;j <= i;j++)
        {
            if ( j == 0 || j == i )
                str[i][j] = 1;
            else
                str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
        }
    }
    for (i = 0;i < 10;i++)
    {
        for (j = 0;j <=i;j++)
        {
            printf("%-11d", str[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int gcf(int,int);
int lcm(int,int);
int main()
{
	int a,b;
	printf("rnter a,b>");
	scanf("%d%d",&a,&b);
	printf("���Լ����%d\n��С��������%d",gcf(a,b),lcm(a,b));
	return 0;
}
int gcf(int a,int b)
{
	int r;
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	return a;
}
int lcm(int a,int b)
{
	return(a*b/gcf(a,b));
}*/
/*#include<stdio.h>
void sort(int *,int);
int find_num(int *arr,int n,int size);
int main()
{
	int arr[]={23,45,69,141,32,54,89,85,24,10},i,j,n,size;
	sort(arr,10);
	size=sizeof(arr)/sizeof(arr[0]);
		for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
}
	printf("����һ������������Ƿ��������д���");
    scanf("%d",&n);
	if(1==find_num(arr,n,size))
	{
		printf("�ҵ��ˣ�����������%d\n",n);
	}
	else{
	printf("û�ҵ���û������%d",n);}
	return 0;
}
void sort(int *arr,int n)
{
	int t,i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
		if(arr[j]>arr[j+1])
		{
		t=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=t;
		}
}
}
}
int find_num(int*arr,int n,int size)
{
	int left=0,right,mid;
	right=size-1;
	while(left<=right)
	{
	mid=(right+left)/2;
	if(arr[mid]>n)
	{
		right=mid-1;
	}
	else if(arr[mid]==n)
	return 1;
	else
	{
		left=mid+1;
	}
}
	return 0;
}*/
/*#include<stdio.h>
int find_num(int k,int* nums,int sz);
int main()
{
	int i,target=9,nums[4]={2,7,11,5},k,mid,sz;
	sz=sizeof(nums)/sizeof(nums[0]);
	printf("%d",sz);
	for(i=0;i<4;i++)
	{
		k=target-nums[i];
		if(1==find_num(k,nums,sz))
		{
			int n=mid;
			printf("[%d,%d]\n",i,n);
		}
	}
	return 0;
}
int find_num(int k,int* nums,int sz)
{
	int l=0,r,mid,i;
	r=sz-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(nums[mid]>k)
		{r=mid-1;}
			else if(nums[mid]=k)
		{
		return 1;
		return mid;
  }
  else
	l=mid+1;
	}
}*/
/*#include<stdio.h>
void sort(char*);
int main()
{
	int n,i,j;
	char str[11];
	printf("enter str:");
	for(i=0;i<10;i++)
	{
		scanf("%c",&str[i]);
}
	sort(str);
	for(i=0;i<9;i++)
	{
		printf("%c\n",str[i]);
}
return 0;
}
void sort(char*str)
{
	int t,i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		if(str[j]<str[j+1])
		t=str[j];str[j]=str[j+1];str[j+1]=t;
	}
}*/
#include<stdio.h>
int f(int* str,int cz,int yz);
int main()
{
	int i,x,sum=0;
	int str[8];
	sum=duck(str,8,4);
	for(i=0;i<8;i++){

	printf("������%����ׯ����Ѽ�ӣ�%d\n",i,str[i]);
	printf("Ѽ������Ϊ��%d",sum);
	return 0;
}
}
int f(int* str)
{
	int i,sum;
	sum=sum+(yz+1)*2
	if(cz>1)
	
 	int str[7]=4;
	for(i=0;i<8;i++)
	{
	if(i==7)
 	return 4;
	else
	return 4*(f(i+1)+1);
	}
}



























































































