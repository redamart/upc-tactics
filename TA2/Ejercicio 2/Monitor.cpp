//
// Created by Renzo on 8/09/2017.
//
#include <iostream>
using namespace std;
#include "Monitor.h"
Monitor::Monitor() {};
void Monitor::setFeatures(std::string brand, short frequency, short resolution) {
    this->brand=brand;
    this->frequency=frequency;
    this->resolution=resolution;
}
void Monitor::setBrand(string brand) {this->brand=brand;}
void Monitor::setFrequency(short frequency) {this->frequency=frequency;}
string Monitor::getBrand() { return brand;}
int Monitor::getFrequency() { return frequency;}
void Monitor::showFeatures() {
    cout<<"La marca es: "<< brand << " y su frecuencia es: " <<frequency<<" con resolucion de: "<<resolution<< endl ;}