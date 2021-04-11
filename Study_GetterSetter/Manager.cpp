#include "Manager.h"

Manager::Manager()
{
	// no-op
}

void Manager::execute()
{
    // データベースから従業員情報を取得
    Employee* employee = mDatabase.readEmployeeData();

    // 従業員情報を更新(苗字変更)
    employee->mName = "平野 太郎";
    // 従業員情報を更新(住所変更)
    employee->mAddress = "大阪市中央区";

    // データベースへ書き込み
    mDatabase.writeEmployeeData(*employee);
    // データベースの内容を出力
    mDatabase.dump();

    // 終了処理
    delete employee;
}
