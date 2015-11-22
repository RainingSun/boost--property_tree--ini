#include "file.h"

/*
* \brief���캯��
*/
file::file()
{
}

/*
* \brief��������
*/
file::~file()
{
}

/*
* \brief��ȡ�ļ���_Tree
*
* \param �ļ���
*/
void file::getFile(std::string fileName)
{
	boost::property_tree::ini_parser::read_ini(fileName, _Tree);
}

/*
* \brief��ȡ�ַ���
*
* \param �ļ�·��
*/
std::string file::getString(std::string path)
{
	return _Tree.get<std::string>(path);
}

/*
* \brief��ȡ������
*
* \param �ļ�·��
*/
float file::getFloat(std::string path)
{
	return _Tree.get<float>(path);
}

/*
* \brief��ȡ������
*
* \param �ļ�·��
*/
int file::getInt(std::string path)
{
	return _Tree.get<int>(path);
}

/*
* \brief��ȡ�ַ���
*
* \param �ļ�·���ͼ�ֵ
*/
void file::push(std::string path, std::string value)
{
	_Tree.put(path, value);
	return;
}
