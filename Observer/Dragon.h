#pragma once
#include "Subscriber.h"
class Dragon :
    public Subscriber
{
public:
    // c++11£¬¼Ì³Ð¹¹Ôìº¯Êý
    using Subscriber::Subscriber;
    void update(std::string msg) override;
};