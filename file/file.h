/**********************************************************************
*
*	@file		file.cpp
*	@brief		�Զ�ȡini�ļ���ʵ��
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
	* \brief���캯��
	*/
	file();
	/*
	* \brief��������
	*/
	~file();
	/*
	* \brief��ȡ�ļ���_Tree
	*
	* \param �ļ���
	*/
	void getFile(std::string fileName);
	/*
	* \brief��ȡ�ַ���
	*
	* \param �ļ�·��
	*/
	std::string getString(std::string path);
	/*
	* \brief��ȡ������
	*
	* \param �ļ�·��
	*/
	int getInt(std::string path);
	/*
	* \brief��ȡ������
	*
	* \param �ļ�·��
	*/
	float getFloat(std::string path);
	/*
	* \brief��ȡ�ַ���
	*
	* \param �ļ�·���ͼ�ֵ
	*/
	void push(std::string paht, std::string value);
private:
	boost::property_tree::ptree _Tree; /**<�ļ��洢*/
};

