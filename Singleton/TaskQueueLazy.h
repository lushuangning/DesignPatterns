#pragma once
#include <iostream>
#include <mutex>

class TaskQueueLazy
{
public:
	TaskQueueLazy(const TaskQueueLazy& obj) = delete;
	TaskQueueLazy& operator=(const TaskQueueLazy& obj) = delete;
	static TaskQueueLazy* getInstance();
private:
	TaskQueueLazy() = default;
	// C++11������ԭ���������Խ������ָ����������µĶ��̰߳�ȫ����
	static std::atomic<TaskQueueLazy*> m_taskQ;
	static std::mutex m_mutex;
};

