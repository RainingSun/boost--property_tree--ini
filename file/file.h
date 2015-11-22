/**********************************************************************
*
*	@file		file.cpp
*	@brief		对读取ini文件的实现
*
*	Date                 Name              Description
*	11/22/15				SYT  				Creation.
*
*********************************************************************/
#pragma once
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include<string>
class file
{
public:
	/*
	* \brief构造函数
	*/
	file();
	/*
	* \brief析构函数
	*/
	~file();
	/*
	* \brief读取文件到_Tree
	*
	* \param 文件名
	*/
	void getFile(std::string fileName);
	/*
	* \brief读取字符串
	*
	* \param 文件路径
	*/
	std::string getString(std::string path);
	/*
	* \brief读取整型数
	*
	* \param 文件路径
	*/
	int getInt(std::string path);
	/*
	* \brief读取浮点数
	*
	* \param 文件路径
	*/
	float getFloat(std::string path);
	/*
	* \brief读取字符串
	*
	* \param 文件路径和键值
	*/
	void push(std::string paht, std::string value);
private:
	boost::property_tree::ptree _Tree; /**<文件存储*/
};

