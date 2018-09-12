// sudo.cpp : 定义控制台应用程序的入口点。
//


#include "windows.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc==1 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "/?") == 0)
	{
		printf(("Usage: \nsudo  commandA  commandB\n"), argv[0]);
		printf(("It will run one after another !\n"));
		getchar();
	}
	for (int i = 1; i < argc; i++)
	{
		system(argv[i]);
		Sleep(1000);
	}
	
	//getchar();
	return 0;
}

