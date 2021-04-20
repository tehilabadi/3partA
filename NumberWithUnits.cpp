#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"
namespace ariel{

    NumberWithUnits::NumberWithUnits(int num, string sizeUnit){
        this->num = num;
        this->sizeUnit = sizeUnit;
    }
    void NumberWithUnits::read_units(std::ifstream &units_file){
        int x = 0;
    }
    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& other) const {
        NumberWithUnits a{(num+other.num),sizeUnit};
    return a;
    }
    NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& other){
        NumberWithUnits a{(num-other.num),sizeUnit};
        return a;
    }
    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& other) const {
        NumberWithUnits a{(num-other.num),sizeUnit};
    return a;
    }
    NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& other){
        NumberWithUnits a{(num-other.num),sizeUnit};
        return a;
    }
    void NumberWithUnits::operator++(){

    }
    void NumberWithUnits::operator--(){

    }
    bool NumberWithUnits::operator == (const NumberWithUnits& other)const{
        return true;
    }
    bool NumberWithUnits::operator >= (const NumberWithUnits& other)const{
        return true;
    }
    bool NumberWithUnits::operator <= (const NumberWithUnits& other)const{
        return true;
    }
    bool NumberWithUnits::operator != (const NumberWithUnits& other)const{
        return true;
    }
    bool NumberWithUnits::operator > (const NumberWithUnits& other)const{
        return true;
    }
    bool NumberWithUnits::operator < (const NumberWithUnits& other)const{
        return true;
    }
    NumberWithUnits operator*(double other,ariel::NumberWithUnits S){
         NumberWithUnits a{1,"t"};
        return a;
    }
    NumberWithUnits NumberWithUnits::operator-(){
        NumberWithUnits a{1,"t"};
        return a;
    }
    NumberWithUnits NumberWithUnits::operator+(){
        NumberWithUnits a{1,"t"};
        return a;
    }
    std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
        return output;
    }
    std::istream& operator>> (std::istream& input , NumberWithUnits& c){
        return input;
    }
}