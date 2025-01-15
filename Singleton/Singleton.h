#pragma once

class Singleton
{
public:
	// = delete ����������, Ҳ���Խ������Ȩ������Ϊ˽��
	Singleton(const Singleton& obj) = delete;
	Singleton& operator=(const Singleton& obj) = delete;
	static Singleton* getInstance();
private:
	Singleton() = default;
	static Singleton* m_obj;
};
