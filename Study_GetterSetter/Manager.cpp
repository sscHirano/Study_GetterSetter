#include "Manager.h"

Manager::Manager()
{
	// no-op
}

void Manager::execute()
{
    // ① 管理者クラスは、データベースアクセスクラスから、従業員情報クラスを取得
    Employee* employee = mDatabase.readEmployeeData();

    // ② 管理者クラスは、従業員情報クラスの情報を書き換え
    // 従業員情報を更新(苗字変更)
    employee->mName = "平野 太郎";
    // 従業員情報を更新(住所変更)
    employee->mAddress = "大阪市中央区";

    // ③ 管理者クラスは、書き換えた従業員情報クラスで、データベースアクセスクラスに、データベースを更新を要求
    mDatabase.writeEmployeeData(*employee);
    // ④ 管理者クラスは、データベースアクセスクラスに、現在の情報を出力するように依頼
    mDatabase.dump();

    // 終了処理
    delete employee;
}
