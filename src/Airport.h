#ifndef CLION_AIRPORT_H
#define CLION_AIRPORT_H

class Airport {
private:
    string code;
    string name;
    string city;
    string country;
    double latitude;
    double longitude;

public:
    Airport(string code,string name,string city,string country,float latitude,float longitude);
};


#endif