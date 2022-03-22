#include <string>
#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"
#include <stdexcept>
#include <vector>

namespace ariel {
    
    Notebook::Notebook(){
        std::unordered_map<std::string, int> note;
    }
    Notebook::Notebook(double o)
    {
        std::unordered_map<std::string, char> note;
    }
    
    Notebook::~Notebook()
    {
        //delete[]arr;
    }
    void Notebook::write(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, std::string s){
        // if(col>100 || row<0){
        //     throw invalid_argument{"Mat size is always odd"};
        // }
    }
    std::string Notebook::read(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, unsigned int length){
        return "f";
    }
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, unsigned int length){

    }
    void Notebook::show(int i){

    }
    
}