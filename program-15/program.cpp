#include<iostream>
using namespace std;
class Seats
{
    private:
    int TotalSeats=4;
    int occupied=0;
    public:
    void setSeats(int x)
    {
        TotalSeats=x;
    }
    int getSeats()
    {
        return TotalSeats;
    }
    int getOccupied()
    {
        return occupied;
    }
    void occupySeats(int x=1)
    {
        if(x<=TotalSeats)
        {
            if(occupied<=TotalSeats)
            {
                occupied+=x;
                return;
            }
        }
        cout<<"We are full"<<endl;
    }
};
class Engine
{
    private:
    string typeOfEngine;
    public:
    void setEngine(string x)
    {
        typeOfEngine=x;
    }
    string getEngineType()
    {
        return typeOfEngine;
    }
};
class Car
{
    Engine e;
    Seats s;
    public:
    Car(int seats,string engine)
    {
        e.setEngine(engine);
        s.setSeats(seats);
    }
    void occupySeat(int x)
    {
        s.occupySeats(x);
    }
    void getSeats()
    {
        cout<<"Total seats = "<<s.getSeats()<<endl<<"Seats Occupied = "<<s.getOccupied();
    }
    void getEngineType()
    {
        cout<<"Engine Type = "<<e.getEngineType()<<endl;
    }

};
int main()
{
    Car c(5,"petrol");
    c.occupySeat(4);
    c.getEngineType();
    c.getSeats();
    return 0;
}