#include "Graph.h"
#include <iostream>

Graph::Graph() {}

vector<string> Graph::getAirports() const {
    vector<string> airports;
    for (Node n : this->airports){
        airports.push_back(n.airportCode);
    }
    return airports;
}

string Graph::getAirportCode(int node) const {
    return airports[node].airportCode;
}

string Graph::getAirportName(int node) const {
    return airports[node].airportName;
}

string Graph::getAirportCity(int node) const {
    return airports[node].city;
}

string Graph::getAirportCountry(int node) const {
    return airports[node].country;
}

string Graph::getAirportLatitude(int node) const {
    return airports[node].latitude;
}

string Graph::getAirportLongitude(int node) const {
    return airports[node].longitude;
}

