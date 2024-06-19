#include "BaseApplication.hpp"

// 解析命令行、读取配置、初始化所有子模块
int My::BaseApplication::Initialize()
{
	m_bQuit = false;

	return 0;
}

// 完成所有子模块并清理所有运行时临时文件。
void My::BaseApplication::Finalize()
{

}

// 主循环的一个周期
void My::BaseApplication::Tick()
{

}

bool My::BaseApplication::IsQuit()
{
	return m_bQuit;
}