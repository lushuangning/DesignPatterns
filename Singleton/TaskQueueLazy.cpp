#include "TaskQueueLazy.h"

std::atomic<TaskQueueLazy*> TaskQueueLazy::m_taskQ;
std::mutex TaskQueueLazy::m_mutex;

TaskQueueLazy* TaskQueueLazy::getInstance() 
{
	TaskQueueLazy* queue = m_taskQ.load();
	// 确保多线程安全，引入锁机制和双重检查锁定
	if (nullptr == queue)
	{
		//m_mutex.lock();		// 加锁，方式1
		std::lock_guard<std::mutex> locker(m_mutex);		// 加锁，方式2
		if (nullptr == queue)
		{
			queue = new TaskQueueLazy;
			m_taskQ.store(queue);
		}
		//m_mutex.unlock();
	}
	return queue;
}