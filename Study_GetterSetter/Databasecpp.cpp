#include <iostream>
#include "Database.h"

Database::Database()
{
	// no-op
}

/// <summary>
/// DB����]�ƈ��f�[�^��ǂݍ��ݕԋp����
/// �{�֐��̌Ăь���Employee��������邱��
/// </summary>
/// <returns></returns>
Employee* Database::readEmployeeData()
{
	Employee* employee = new Employee(NO, NAME, ADDRESS);
	return employee;
}

/// <summary>
/// DB����]�ƈ��f�[�^��ǂݍ��ݕԋp����
/// �{�֐��̌Ăь���Employee��������邱��
/// </summary>
/// <returns></returns>
void Database::writeEmployeeData(Employee empoloyee)
{
	// Database�ɏ�����(����)
	mNo = empoloyee.mNo;
	mName = empoloyee.mName;
	mAddress = empoloyee.mAddress;
}

/// <summary>
/// �����f�[�^�̏o��
/// </summary>
void Database::dump()
{
	std::cout << "No:" << mNo << "\n";
	std::cout << "Name:" << mName << "\n";
	std::cout << "Address:" << mAddress << "\n";
}
