#pragma once

#include <string>

/// <summary>
/// �]�ƈ����
/// </summary>
class Employee {

public:
	/// <summary>
	/// �]�ƈ��ԍ�
	/// </summary>
	int mNo;

	/// <summary>
	/// ���O
	/// </summary>
	std::string mName;

	/// <summary>
	/// �Z��
	/// </summary>
	std::string mAddress;

public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="no">�]�ƈ��ԍ�</param>
	/// <param name="name">���O</param>
	/// <param name="address">�Z��</param>
	/// <returns>�C���X�^���X</returns>
	Employee(int no, std::string name, std::string address);
};

