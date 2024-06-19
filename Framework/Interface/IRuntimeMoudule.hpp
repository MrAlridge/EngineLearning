// 定义Runtime Module都应该支持的方法
#pragma once	// 头文件在编译的时候只处理一次

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule{
public:
	// 虚析构函数,防止派生子类只调用基类的析构函数
	virtual _IRuntimeModule() {};
	// 初始化
	virtual int Initialize() = 0;
	// 模块结束后执行
	virtual void Finalize() = 0;
	// 最小单位刻
	virtual void Tick() = 0;
	};
}