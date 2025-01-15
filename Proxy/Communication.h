#pragma once

class Communication
{
public:
	virtual void communicate() = 0;
	virtual ~Communication() {}
};

class Speaker : public Communication
{
public:
	void communicate() override;
};

class DenDenMushi : public Communication
{
public:
	DenDenMushi();
	~DenDenMushi();
	bool isStart();
	void communicate() override;

private:
	bool m_isStart = false;
	Speaker* m_speaker = nullptr;
};