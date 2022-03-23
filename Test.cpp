//  * AUTHORS: <Eitan Shenkolevski>
//  * 
//  * Date: 2021-03
//  */
#include <string>
//#include <algorithm>
#include "doctest.h"
#include "Notebook.hpp"
//using namespace ariel;
using namespace std;


TEST_CASE("Good input") {
    ariel::Notebook nb;
    nb.write(100,4,56,ariel::Direction::Vertical,"abcd");
    CHECK(nb.read(100,3,56,ariel::Direction::Vertical,2)=="_a");
    CHECK(nb.read(100,5,56,ariel::Direction::Vertical,2)=="bc");
    CHECK(nb.read(100,5,56,ariel::Direction::Vertical,3)=="bcd");
    CHECK(nb.read(100,4,56,ariel::Direction::Vertical,5)=="abcd_");
    nb.erase(57,8,6,ariel::Direction::Horizontal,5);
    CHECK(nb.read(57,8,5,ariel::Direction::Horizontal,3)=="_~~");
    nb.write(35,4,100,ariel::Direction::Vertical,"abcdefg");
    CHECK(nb.read(35,6,97,ariel::Direction::Horizontal,4)=="___c");
    CHECK(nb.read(35,9,100,ariel::Direction::Vertical,3)=="fg_");

}


TEST_CASE("bad input"){
    ariel::Notebook nb2;
    CHECK_THROWS(nb2.write(-1,8,7,ariel::Direction::Vertical,"abc"));
    CHECK_THROWS(nb2.write(1,-8,7,ariel::Direction::Vertical,"abc"));
    CHECK_THROWS(nb2.write(1,8,-7,ariel::Direction::Vertical,"abc"));
    CHECK_THROWS(nb2.read(-1,8,7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.read(1,-8,7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.read(1,8,-7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.read(-1,8,7,ariel::Direction::Vertical,-4));
    CHECK_THROWS(nb2.erase(-1,8,7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.erase(1,-8,7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.erase(1,8,-7,ariel::Direction::Vertical,4));
    CHECK_THROWS(nb2.erase(-1,8,7,ariel::Direction::Vertical,-4));
    nb2.write(100,4,56,ariel::Direction::Vertical,"abcd");
    CHECK_THROWS(nb2.write(100,5,56,ariel::Direction::Vertical,"vbvbv"));
    CHECK_THROWS(nb2.write(57,4,56,ariel::Direction::Vertical,"a~cd"));
}