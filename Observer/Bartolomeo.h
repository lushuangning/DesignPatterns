#pragma once
#include "Subscriber.h"
class Bartolomeo :
    public Subscriber
{
public:
    // c++11���̳й��캯��
    using Subscriber::Subscriber;
    void update(std::string msg) override;
};

