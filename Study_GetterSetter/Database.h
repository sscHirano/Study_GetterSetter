#pragma once

#include <string>
#include "Employee.h"

// Database内のデータ(初期値)
static int NO = 10;
static std::string NAME = "ソルバ 太郎";
static std::string ADDRESS = "小伝馬町";

class Database {

public:
	/// <summary>
	/// 従業員番号
	/// </summary>
	int mNo = NO;

	/// <summary>
	/// 名前
	/// </summary>
	std::string mName;

	/// <summary>
	/// 住所
	/// </summary>
	std::string mAddress;

public:
	Database();

	Employee* readEmployeeData();
	void writeEmployeeData(Employee);
	void dump();
};

