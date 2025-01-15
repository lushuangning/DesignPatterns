#pragma once
#include "NewsAgency.h"

class Morgans :
    public NewsAgency
{
public :
    void notify(std::string msg) override;
};

