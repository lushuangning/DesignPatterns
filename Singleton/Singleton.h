#pragma once

class Singleton
{
public:
	// = delete 代表函数禁用, 也可以将其访问权限设置为私有
	Singleton(const Singleton& obj) = delete;
	Singleton& operator=(const Singleton& obj) = delete;
	static Singleton* getInstance();
private:
	Singleton() = default;
	static Singleton* m_obj;
};
