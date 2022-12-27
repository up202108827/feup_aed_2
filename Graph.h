#ifndef FEUP_AED_2_GRAPH_H
#define FEUP_AED_2_GRAPH_H

#include <string>
#include <vector>
#include <list>

class Graph {
    struct Edge {
        string airlineCode;
        double weight;
        int destiny;
    };
    struct Node {
        string airportCode;
        string airportName;
        string city;
        string country;
        double latitude;
        double longitude;
    };
    int n;
    vector<Node> airports;

public:
    Graph();

    vector<string> getAirports() const;
    string getAirportCode(int node) const;
    string getAirportName(int node) const;
    string getAirportCity(int node) const;
    string getAirportCountry(int node) const;
    string getAirportLatitude(int node) const;
    string getAirportLongitude(int node) const;
};

#endif //FEUP_AED_2_GRAPH_H
