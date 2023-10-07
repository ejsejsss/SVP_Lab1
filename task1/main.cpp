#include <iostream>

using namespace std;

enum TYPE{
    DISTANCE = 0,SPEED = 1,TIME = 2
};
double speed(double dist, double time) {
    return dist/time;
}

double time(double dist, double speed) {
    return dist/speed;
}

double dist(double speed, double time) {
    return speed * time;
}

int main()
{
    double _speed{0},_dist{0},_time{0};
    int menu;
    cout << "1.DISTANCE\n2.SPEED\n3.TIME\n";
    cin >> menu;
	
	TYPE type = static_cast<TYPE>(menu-1);

    switch(type){
    case DISTANCE:
        cout << "TIME - ";
        cin >> _time;
        cout << "SPEED - ";
        cin >> _speed;
        cout << "DISTANCE = " << dist(_speed, _time);
        break;
    case SPEED:
		cout << "TIME - ";
        cin >> _time;
        cout << "DISTANCE - ";
        cin >> _dist;
        cout << "SPEED = " << speed(_dist, _time);
        break;
    case TIME:
		cout << "DISTANCE - ";
        cin >> _dist;
        cout << "SPEED - ";
        cin >> _speed;
        cout << "TIME = " << time(_dist, _speed);
        break;
    }
    return 0;
}
