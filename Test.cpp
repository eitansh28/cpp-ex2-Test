//  * AUTHORS: <Eitan Shenkolevski>
//  * 
//  * Date: 2021-03
//  */

#include "doctest.h"
#include "Notebook.hpp"
using namespace ariel;

#include <string>
//#include <algorithm>

TEST_CASE("Good input") {
    Notebook nb;//= Notebook::Notebook(5.5);
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
    CHECK(nb.read(1,1,1,Direction::Vertical,5)=="f");
}