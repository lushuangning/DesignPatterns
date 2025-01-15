#pragma once
#include "Subscriber.h"
class Bartolomeo :
    public Subscriber
{
public:
    // c++11£¬¼Ì³Ð¹¹Ôìº¯Êý
    using Subscriber::Subscriber;
    void update(std::string msg) override;
};

