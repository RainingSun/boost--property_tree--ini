#include "file.h"

/*
* \brief构造函数
*/
file::file()
{
}

/*
* \brief析构函数
*/
file::~file()
{
}

/*
* \brief读取文件到_Tree
*
* \param 文件名
*/
void file::getFile(std::string fileName)
{
	boost::property_tree::ini_parser::read_ini(fileName, _Tree);
}

/*
* \brief读取字符串
*
* \param 文件路径
*/
std::string file::getString(std::string path)
{
	return _Tree.get<std::string>(path);
}

/*
* \brief读取浮点数
*
* \param 文件路径
*/
float file::getFloat(std::string path)
{
	return _Tree.get<float>(path);
}

/*
* \brief读取整型数
*
* \param 文件路径
*/
int file::getInt(std::string path)
{
	return _Tree.get<int>(path);
}

/*
* \brief读取字符串
*
* \param 文件路径和键值
*/
void file::push(std::string path, std::string value)
{
	_Tree.put(path, value);
	return;
}
