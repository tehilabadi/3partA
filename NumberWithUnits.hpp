#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel{
    class NumberWithUnits{
        public: 
        double num;
        string sizeUnit;
        NumberWithUnits();
        NumberWithUnits(int num, string sizeUnit);
        static void read_units(std::ifstream &units_file);
        NumberWithUnits operator+(const NumberWithUnits& other)const;
        NumberWithUnits operator-(const NumberWithUnits& other)const;
        NumberWithUnits operator-=(const NumberWithUnits& other);
        NumberWithUnits operator+=(const NumberWithUnits& other);
        void operator++();
        void operator--();
        bool operator == (const NumberWithUnits& other)const;
        bool operator >= (const NumberWithUnits& other)const;
        bool operator <= (const NumberWithUnits& other)const;
        bool operator != (const NumberWithUnits& other)const;
        bool operator > (const NumberWithUnits& other)const;
        bool operator < (const NumberWithUnits& other)const;
        NumberWithUnits operator-();
        NumberWithUnits operator+();
        friend NumberWithUnits operator*(double other,NumberWithUnits S);
        friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c);
        friend std::istream& operator>> (std::istream& input , NumberWithUnits& c);

};
        
}