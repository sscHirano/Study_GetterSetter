#include "Manager.h"

Manager::Manager()
{
	// no-op
}

void Manager::execute()
{
    // �f�[�^�x�[�X����]�ƈ������擾
    Employee* employee = mDatabase.readEmployeeData();

    // �]�ƈ������X�V(�c���ύX)
    employee->mName = "���� ���Y";
    // �]�ƈ������X�V(�Z���ύX)
    employee->mAddress = "���s������";

    // �f�[�^�x�[�X�֏�������
    mDatabase.writeEmployeeData(*employee);
    // �f�[�^�x�[�X�̓��e���o��
    mDatabase.dump();

    // �I������
    delete employee;
}
