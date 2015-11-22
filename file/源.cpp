#include<io.h>
#include<string.h>
#include <boost/property_tree/ptree.hpp>
#include<boost/property_tree/ini_parser.hpp>
#include <iostream>     
#include"file.h"

int main()
{
	file ini;
	char temp[1000], path[1000], key[1000], value[1000];
	int choice, choice2, i;
	std::cout << "请输入文件路径" << std::endl;
	gets(temp);
	if (_access(temp, 04) == -1)
	{
		std::cout << "文件不存在" << std::endl;
		return 0;
	}
	else
		ini.getFile((std::string)temp);
	std::cout << "1.读取文件     2.写入文件     0.退出程序" << std::endl;
	std::cin >> choice;
	getchar();
	if (1 == choice)
	{
		std::cout << "分行输入希望读取的Section Key" << std::endl;
		gets(path); 
		gets(key); 
		strcat(path, ".");
		strcat(path, key);
		std::cout << "输出格式:1.整型    2.浮点型    3.字符型" << std::endl;
		std::cin >> choice2;
		getchar();
		if (1 == choice2)
		{
			std::cout << ini.getInt(path) << std::endl;
		}
		else if (2 == choice2)
		{
			std::cout << ini.getFloat(path) << std::endl;
		}
		else if (3 == choice2)
		{
			std::cout << ini.getString(path) << std::endl;
		}
		else
		{
			std::cout << "Wrong choice" << std::endl;
		}
	}
	else if (2 == choice)
	{
		std::cout << "分行输入希望写入的Section Key Vlaue" << std::endl;
		gets(path); 
		gets(key);
		gets(value);
		strcat(path, ".");
		strcat(path, key);
		ini.push(path, value);
	}
	else if (0 == choice)
		return 0;
	else
		std::cout << "Wrong choice" << std::endl;

	system("pause");
}