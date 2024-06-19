#pragma once
#include "Interface.hpp"
#include "IRuntimeMoudule.hpp"

namespace My {
	Interface IApplication : implements IRuntimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Finalize() = 0;
		virtual void Tick() = 0;
		// ����ӿ�������ѯApp�Ƿ���Ҫ�˳�
		virtual bool IsQuit() = 0;
	};
}