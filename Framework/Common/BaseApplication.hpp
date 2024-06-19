#pragma once
#include "IApplication.hpp"

namespace My {
	class BaseApplication : implements IApplication
	{
	public:
		virtual int Initialize();
		virtual void Finalize();
		// 主循环的一个周期 One cycle of the main loop
		virtual void Tick();

		virtual bool IsQuit();
	protected:
		// 标志着App是否需要退出主循环
		bool m_bQuit;
	};
}