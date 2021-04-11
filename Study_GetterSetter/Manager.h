#pragma once

#include "Employee.h"
#include "Database.h"

/// <summary>
/// 従業員情報管理クラス
/// </summary>
class Manager {

public:
	Database mDatabase;

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <returns></returns>
	Manager();


	/// <summary>
	/// 処理実行
	/// </summary>
	void execute();
};
