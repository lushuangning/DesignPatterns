#pragma once
class TaskQueueEager
{
public:
	TaskQueueEager(const TaskQueueEager& obj) = delete;
	TaskQueueEager& operator=(const TaskQueueEager& obj) = delete;
	static TaskQueueEager* getInstance();
private:
	TaskQueueEager() = default;
	static TaskQueueEager* m_taskQ;
};
