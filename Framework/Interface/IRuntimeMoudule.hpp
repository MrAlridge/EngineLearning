// ����Runtime Module��Ӧ��֧�ֵķ���
#pragma once	// ͷ�ļ��ڱ����ʱ��ֻ����һ��

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule{
public:
	// ����������,��ֹ��������ֻ���û������������
	virtual _IRuntimeModule() {};
	// ��ʼ��
	virtual int Initialize() = 0;
	// ģ�������ִ��
	virtual void Finalize() = 0;
	// ��С��λ��
	virtual void Tick() = 0;
	};
}