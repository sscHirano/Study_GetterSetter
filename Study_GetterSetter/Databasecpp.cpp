#include <iostream>
#include "Database.h"

Database::Database()
{
	// no-op
}

/// <summary>
/// DBから従業員データを読み込み返却する
/// 本関数の呼び元でEmployeeを解放すること
/// </summary>
/// <returns></returns>
Employee* Database::readEmployeeData()
{
	Employee* employee = new Employee(NO, NAME, ADDRESS);
	return employee;
}

/// <summary>
/// DBから従業員データを読み込み返却する
/// 本関数の呼び元でEmployeeを解放すること
/// </summary>
/// <returns></returns>
void Database::writeEmployeeData(Employee empoloyee)
{
	// Databaseに書いた(つもり)
	mNo = empoloyee.mNo;
	mName = empoloyee.mName;
	mAddress = empoloyee.mAddress;
}

/// <summary>
/// 内部データの出力
/// </summary>
void Database::dump()
{
	std::cout << "No:" << mNo << "\n";
	std::cout << "Name:" << mName << "\n";
	std::cout << "Address:" << mAddress << "\n";
}
