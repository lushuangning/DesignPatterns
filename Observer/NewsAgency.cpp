#include "NewsAgency.h"

void NewsAgency::attach(Subscriber* sub) {
	m_list.push_back(sub);
}

void NewsAgency::deatch(Subscriber* sub) {
	m_list.remove(sub);
}