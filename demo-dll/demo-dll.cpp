// demo-dll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

int returnNumber2(void) {
	return 2;
}

char* returnString(void) {
	static char value[20];
	strcpy_s(value, "returnString");
	return value;
}

int sum(int a, int b) {
	return a + b;
}


