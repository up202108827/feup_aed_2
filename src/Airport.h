//
// Created by Nuno Silva on 26/12/2022.
//

#ifndef CLION_AIRPORT_H
#define CLION_AIRPORT_H

class Airport {
private:
    string code;
    string name;
    string city;
    string country;
    string latitude;
    string longitude;

public:
    Airport(string code,string name,string city,string country,string latitude,string longitude);
};


#endif //CLION_AIRPORT_H
