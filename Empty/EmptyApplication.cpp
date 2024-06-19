// 代表无平台的App实例
#include "BaseApplication.hpp"

namespace My {
	BaseApplication g_App;
	IApplication* g_pApp = &g_App;
}