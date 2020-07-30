#include <unistd.h>

#include "design.h"


int main(int argc, char **argv)
{
    StockObserver stock;
    NBAObserver   nba;
    boss          liu;

    liu.attach(&stock);
    liu.attach(&nba);

    while(1)
    {
        sleep(1);
        liu.notify();
    }
    cout << "test design" << endl;
    return 0;
}