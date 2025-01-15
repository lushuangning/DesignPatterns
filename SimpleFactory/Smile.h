#pragma once

class AbstractSmile
{
public:
    virtual void transform() {}
    virtual void ability() {}
    virtual ~AbstractSmile() {}
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