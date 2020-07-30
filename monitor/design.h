#include <iostream>
#include <list>

using namespace std;

class Observer{
public:
    virtual void update() = 0;
};

class Subject{
public:
    virtual void notify() = 0;
};

class StockObserver : public Observer
{
public:
    virtual void update()
    {
        cout << "I'm stock observer; " << std::endl;
    }
};

class NBAObserver : public Observer
{
public:
    virtual void update()
    {
        cout << "I'm NBA Observer; " << std::endl;
    }
};

class boss : public Subject
{
public:
    list<Observer*> bossbserver;
    void attach(Observer* observer)
    {
        bossbserver.push_back(observer);
    }
    virtual void notify()
    {
        for (auto i : bossbserver)
        {
            i->update();
        }
    }

    
};

class secret : public Subject
{
public:
    void attach(Observer* observer);
    list<Observer*> observer;
};

