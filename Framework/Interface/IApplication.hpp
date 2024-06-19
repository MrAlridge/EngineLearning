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
		// 这个接口用来查询App是否需要退出
		virtual bool IsQuit() = 0;
	};
}