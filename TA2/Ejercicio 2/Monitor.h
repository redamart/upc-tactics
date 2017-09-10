//
// Created by Renzo on 8/09/2017.
//

#ifndef UNTITLED_MONITOR_H
#define UNTITLED_MONITOR_H

#include <string>

class Monitor {
private:
    std::string brand;
    short frequency;
    short resolution;
public:
    void setFeatures(std::string,short,short);
    void setBrand(string);
    void setFrequency(short);
    std::string getBrand();
    int getFrequency();
    Monitor();
    void showFeatures();

};


#endif //UNTITLED_MONITOR_H
