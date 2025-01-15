#include "TaskQueueEager.h"
// 静态成员初始化放到类外部处理
TaskQueueEager *TaskQueueEager::m_taskQ = new TaskQueueEager;

TaskQueueEager *TaskQueueEager::getInstance() { return m_taskQ; }
