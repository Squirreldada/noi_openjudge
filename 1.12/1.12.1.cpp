#include <iostream>
#include <cstdio>
using namespace std;
int read(int &num1, int &num2, char &method)
{
	//scanf("%d%c%d", &num1, &method, &num2);
	cin >> num1 >> method >> num2;
}

int doit(int num1, int num2, char method)
{
	switch(method)
	{
		case '+':return num1 + num2;break;
		case '-':return num1 - num2;break;
		case '*':return num1 * num2;break;
		case '/':return num1 / num2;break;
		case '%':return num1 % num2;break;
	}
}
int main()
{
	int num1, num2;
	char method;
	read(num1, num2, method);
	printf("%d\n",doit(num1, num2, method));
}
