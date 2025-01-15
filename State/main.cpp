#include <iostream>
#include "Sanji.h"
#include <vector>

using namespace std;

int main()
{
    Sanji* sanji = new Sanji;
    // Ê±¼äµã
    vector<int> date{ 7, 10, 12, 14, 16, 18, 22 };
    for (const auto& item : date)
    {
        sanji->setClock(item);
        sanji->working();
    }
    delete sanji;
    return 1;
}