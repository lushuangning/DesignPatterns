#pragma once

class AbstractSmile
{
public:
	virtual ~AbstractSmile() {}
	virtual void transform() = 0;
	virtual void ability() = 0;
};

class SheepSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};


class LionSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};

class BatSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};