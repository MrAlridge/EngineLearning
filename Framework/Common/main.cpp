#include <stdio.h>
#include "IApplication.hpp"

using namespace My;

namespace My {
	extern IApplication* g_pApp;
}

int main(int argc, char** argv) {
	int ret;

	// 调用接口进行初始化
	if ((ret = g_pApp -> Initialize()) != 0)
	{
		printf("App Initialize failed, will exit now.");
		return ret;
	}
	
	// 只要App不结束就运行Tick
	while (!g_pApp->IsQuit())
	{
		g_pApp->Tick();
	}

	g_pApp->Finalize();
	return 0;
}