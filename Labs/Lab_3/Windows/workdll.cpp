// workdll.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Header.h"


std::string func(std::string text,int n)
{
	std::string input = text;
	std::string result = "";
	for (int i = 0; i < input.length(); i += n)
	{
		result += input[i];
	}
	return result;

}


