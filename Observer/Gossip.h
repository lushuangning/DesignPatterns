#pragma once
#include "NewsAgency.h"

class Gossip :
    public NewsAgency
{
public:
    void notify(std::string msg) override;
};

