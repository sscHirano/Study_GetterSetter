#pragma once

#include "Employee.h"
#include "Database.h"

/// <summary>
/// �]�ƈ����Ǘ��N���X
/// </summary>
class Manager {

public:
	Database mDatabase;

public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <returns></returns>
	Manager();


	/// <summary>
	/// �������s
	/// </summary>
	void execute();
};
