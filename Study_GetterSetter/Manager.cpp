#include "Manager.h"

Manager::Manager()
{
	// no-op
}

void Manager::execute()
{
    // �@ �Ǘ��҃N���X�́A�f�[�^�x�[�X�A�N�Z�X�N���X����A�]�ƈ����N���X���擾
    Employee* employee = mDatabase.readEmployeeData();

    // �A �Ǘ��҃N���X�́A�]�ƈ����N���X�̏�����������
    // �]�ƈ������X�V(�c���ύX)
    employee->mName = "���� ���Y";
    // �]�ƈ������X�V(�Z���ύX)
    employee->mAddress = "���s������";

    // �B �Ǘ��҃N���X�́A�����������]�ƈ����N���X�ŁA�f�[�^�x�[�X�A�N�Z�X�N���X�ɁA�f�[�^�x�[�X���X�V��v��
    mDatabase.writeEmployeeData(*employee);
    // �C �Ǘ��҃N���X�́A�f�[�^�x�[�X�A�N�Z�X�N���X�ɁA���݂̏����o�͂���悤�Ɉ˗�
    mDatabase.dump();

    // �I������
    delete employee;
}
