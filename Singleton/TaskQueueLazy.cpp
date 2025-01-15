#include "TaskQueueLazy.h"

std::atomic<TaskQueueLazy*> TaskQueueLazy::m_taskQ;
std::mutex TaskQueueLazy::m_mutex;

TaskQueueLazy* TaskQueueLazy::getInstance() 
{
	TaskQueueLazy* queue = m_taskQ.load();
	// ȷ�����̰߳�ȫ�����������ƺ�˫�ؼ������
	if (nullptr == queue)
	{
		//m_mutex.lock();		// ��������ʽ1
		std::lock_guard<std::mutex> locker(m_mutex);		// ��������ʽ2
		if (nullptr == queue)
		{
			queue = new TaskQueueLazy;
			m_taskQ.store(queue);
		}
		//m_mutex.unlock();
	}
	return queue;
}