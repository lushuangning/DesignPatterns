#include "TaskQueueEager.h"
// ��̬��Ա��ʼ���ŵ����ⲿ����
TaskQueueEager *TaskQueueEager::m_taskQ = new TaskQueueEager;

TaskQueueEager *TaskQueueEager::getInstance() { return m_taskQ; }
