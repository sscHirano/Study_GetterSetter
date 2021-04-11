#pragma once

#include <string>

/// <summary>
/// 従業員情報
/// </summary>
class Employee {

public:
	/// <summary>
	/// 従業員番号
	/// </summary>
	int mNo;

	/// <summary>
	/// 名前
	/// </summary>
	std::string mName;

	/// <summary>
	/// 住所
	/// </summary>
	std::string mAddress;

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="no">従業員番号</param>
	/// <param name="name">名前</param>
	/// <param name="address">住所</param>
	/// <returns>インスタンス</returns>
	Employee(int no, std::string name, std::string address);
};

