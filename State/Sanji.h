#pragma once
#include "State.h"

class Sanji
{
private:
	int m_clock = 0;
	AbstractState* m_state = nullptr;

public:
	Sanji()
	{
		m_state = new ForenoonState;
	}

	void working()
	{
		m_state->working(this);
	}

	void setState(AbstractState* state)
	{
		if (m_state)
		{
			delete m_state;
		}
		m_state = state;
	}

	void setClock(int time)
	{
		m_clock = time;
	}

	int getClock()
	{
		return m_clock;
	}

	~Sanji()
	{
		delete m_state;
	}
};