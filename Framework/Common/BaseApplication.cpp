#include "BaseApplication.hpp"

// ���������С���ȡ���á���ʼ��������ģ��
int My::BaseApplication::Initialize()
{
	m_bQuit = false;

	return 0;
}

// ���������ģ�鲢������������ʱ��ʱ�ļ���
void My::BaseApplication::Finalize()
{

}

// ��ѭ����һ������
void My::BaseApplication::Tick()
{

}

bool My::BaseApplication::IsQuit()
{
	return m_bQuit;
}