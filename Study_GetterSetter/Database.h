#pragma once

#include <string>
#include "Employee.h"

// Database���̃f�[�^(�����l)
static int NO = 10;
static std::string NAME = "�\���o ���Y";
static std::string ADDRESS = "���`�n��";

class Database {

public:
	/// <summary>
	/// �]�ƈ��ԍ�
	/// </summary>
	int mNo = NO;

	/// <summary>
	/// ���O
	/// </summary>
	std::string mName;

	/// <summary>
	/// �Z��
	/// </summary>
	std::string mAddress;

public:
	Database();

	Employee* readEmployeeData();
	void writeEmployeeData(Employee);
	void dump();
};

