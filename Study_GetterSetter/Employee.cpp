#include "Employee.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
/// <param name="no"></param>
/// <param name="name"></param>
/// <param name="address"></param>
/// <returns></returns>
Employee::Employee(int no, std::string name, std::string address)
	: mNo(no),
	  mName(name),
	  mAddress(address)
{
	// no-op
}
