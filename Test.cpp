  
#include "doctest.h"
using namespace doctest;
#include <iostream>
#include <stdexcept>
using namespace std;
#include "NumberWithUnits.hpp"
using ariel::NumberWithUnits;

TEST_CASE("same units size") {
    NumberWithUnits a{1,"m"};
    NumberWithUnits b{3,"m"};
    CHECK_EQ(4,(a+b).num);
    CHECK_EQ(2,(b-a).num);
    CHECK_EQ(-3,(-b).num);
    a+=b;
    CHECK_EQ(a.num,4);
    a-=b;
    CHECK_EQ(a.num,1);
    NumberWithUnits c{1,"km"};
    NumberWithUnits d{3,"km"};
    CHECK_EQ(4,(c+d).num);
    CHECK_EQ(2,(c-d).num);
    CHECK_EQ(-3,(-d).num);
    c+=d;
    CHECK_EQ(c.num,4);
    c-=d;
    CHECK_EQ(c.num,1);
}

TEST_CASE("same units wighet") {
    NumberWithUnits a{1,"kg"};
    NumberWithUnits b{3,"kg"};
    CHECK_EQ(4,(a+b).num);
    CHECK_EQ(2,(b-a).num);
    CHECK_EQ(-3,(-b).num);
    a+=b;
    CHECK_EQ(a.num,4);
    a-=b;
    CHECK_EQ(a.num,1);
    NumberWithUnits c{1,"ton"};
    NumberWithUnits d{3,"ton"};
    CHECK_EQ(4,(c+d).num);
    CHECK_EQ(2,(c-d).num);
    CHECK_EQ(-3,(-d).num);
    c+=d;
    CHECK_EQ(c.num,4);
    c-=d;
    CHECK_EQ(c.num,1);
}
TEST_CASE("same units time") {
    NumberWithUnits a{1,"hour"};
    NumberWithUnits b{3,"hour"};
    CHECK_EQ(4,(a+b).num);
    CHECK_EQ(2,(b-a).num);
    CHECK_EQ(-3,(-b).num);
    a+=b;
    CHECK_EQ(a.num,4);
    a-=b;
    CHECK_EQ(a.num,1);
    NumberWithUnits c{1,"min"};
    NumberWithUnits d{3,"min"};
    CHECK_EQ(4,(c+d).num);
    CHECK_EQ(2,(c-d).num);
    CHECK_EQ(-3,(-d).num);
    c+=d;
    CHECK_EQ(c.num,4);
    c-=d;
    CHECK_EQ(c.num,1);
}

TEST_CASE("same units money") {
    NumberWithUnits a{1,"USD"};
    NumberWithUnits b{3,"USD"};
    CHECK_EQ(4,(a+b).num);
    CHECK_EQ(2,(b-a).num);
    CHECK_EQ(-3,(-b).num);
    a+=b;
    CHECK_EQ(a.num,4);
    a-=b;
    CHECK_EQ(a.num,1);
}
TEST_CASE("diffrent units wighet") {
    NumberWithUnits a{1,"kg"};
    NumberWithUnits b{1,"ton"};
    NumberWithUnits c = a + b;
    CHECK_EQ(1001,c.num);
    CHECK_EQ("kg",c.sizeUnit);
    NumberWithUnits d = b + c;
    CHECK_EQ(1.001,d.num);
    CHECK_EQ("ton",d.sizeUnit);
    NumberWithUnits f = b - a;
    CHECK_EQ(999,f.num);
    CHECK_EQ("ton",f.sizeUnit);
    NumberWithUnits e = a - b;
    CHECK_EQ(-999,e.num);
    CHECK_EQ("kg",e.sizeUnit);
    a+=b;
    CHECK_EQ(a.num,c.num);
    CHECK_EQ(a.sizeUnit,c.sizeUnit);
    b-=a;
    CHECK_EQ(-0.001,b.num);
    CHECK_EQ("ton",b.sizeUnit);
    -b;
    CHECK_EQ(0.001,b.num);
    b=1000*b;
    CHECK_EQ(1,b.num);
}
TEST_CASE("diffrent units size") {
    NumberWithUnits a{1,"m"};
    NumberWithUnits b{1,"km"};
    NumberWithUnits c = a + b;
    CHECK_EQ(1001,c.num);
    CHECK_EQ("m",c.sizeUnit);
    NumberWithUnits d = b + c;
    CHECK_EQ(1.001,d.num);
    CHECK_EQ("km",d.sizeUnit);
    NumberWithUnits f = b - a;
    CHECK_EQ(999,f.num);
    CHECK_EQ("km",f.sizeUnit);
    NumberWithUnits e = a - b;
    CHECK_EQ(-999,e.num);
    CHECK_EQ("m",e.sizeUnit);
    a+=b;
    CHECK_EQ(a.num,c.num);
    CHECK_EQ(a.sizeUnit,c.sizeUnit);
    b-=a;
    CHECK_EQ(-0.001,b.num);
    CHECK_EQ("km",b.sizeUnit);
    -b;
    CHECK_EQ(0.001,b.num);
    b=1000*b;
    CHECK_EQ(1,b.num);
}