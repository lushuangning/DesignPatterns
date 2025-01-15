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
	// C++11，引入原子锁机制以解决机器指令被重新排序导致的多线程安全问题
	static std::atomic<TaskQueueLazy*> m_taskQ;
	static std::mutex m_mutex;
};

