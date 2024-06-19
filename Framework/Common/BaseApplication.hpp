#pragma once
#include "IApplication.hpp"

namespace My {
	class BaseApplication : implements IApplication
	{
	public:
		virtual int Initialize();
		virtual void Finalize();
		// ��ѭ����һ������ One cycle of the main loop
		virtual void Tick();

		virtual bool IsQuit();
	protected:
		// ��־��App�Ƿ���Ҫ�˳���ѭ��
		bool m_bQuit;
	};
}