#include <string>
#include <iostream>
#include "Direction.hpp"
#include "Notebook.hpp"
#include <stdexcept>
#include <unordered_map>
using namespace std;

const int limit = 100;

    int strlen(const string &s){
        int count=0;
        for(int i=0;i<s.length();i++){
            count++;
        }return count;
    }

namespace ariel {
    
    Notebook::Notebook(){
        unordered_map<std::string, char> note;
    }
    
    Notebook::~Notebook()
    {
        
    }


    void Notebook::write(int page, int row, int col, ariel::Direction dir, string str){
        if(col>limit || col<0 || row<0 || page<0){
            throw invalid_argument{"out of range"};
        }
        if(col+strlen(str)-1>limit && dir==Direction::Horizontal){
            throw invalid_argument{"out of range"};
        }
        string tilda="~";
        if (str.find(tilda) != string::npos){
            throw invalid_argument{"Illegal char"};
        }
        char ch=0;
        if(dir==Direction::Horizontal){
            for(unsigned int i=0;i<str.length();i++){
                if(this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]!=0){
                    throw invalid_argument{"you can't write here"};
                }
                ch=str.at(i);
                this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]=ch;
                col++;
                }
        }
        else if(dir==Direction::Vertical){
            for(unsigned int i=0;i<str.length();i++){
                if(this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]!=0){
                    throw invalid_argument{"you can't write here"};
                }
                ch=str.at(i);
                this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]=ch;
                row++;
            }
        }
    }


    string Notebook::read(int page, int row, int col, ariel::Direction dir, int length){
        if(col>limit || col<0 || row<0 || page<0 || length<0){
            throw invalid_argument{"out of range"};
        }
        if(col+length-1>limit && dir==Direction::Horizontal){
            throw invalid_argument{"out of range"};
        }
        string textForRead;
        if(dir==Direction::Horizontal){
            for(int i=0;i<length;i++){
                if(this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]==0){
                    textForRead+='_';
                    col++;
                    continue;
                }
                textForRead+=this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)];
                col++;
            }
        }
        else if(dir==Direction::Vertical){
            for(int i=0;i<length;i++){
                if(this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]==0){
                    textForRead+='_';
                    row++;
                    continue;
                }
                textForRead+=this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)];
                row++;
            }
        }
        return textForRead;
    }


    void Notebook::erase(int page, int row, int col, ariel::Direction dir, int length){
        if(col>limit || col<0 || row<0 || page<0 || length<0){
            throw invalid_argument{"out of range"};
        }
        if(col+length-1>limit && dir==Direction::Horizontal){
            throw invalid_argument{"out of range"};
        }
        if(dir==Direction::Horizontal){
            for(int i=0;i<length;i++){
                this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]='~';
                col++;
            }
        }
        else if(dir==Direction::Vertical){
            for(int i=0;i<length;i++){
                this->note[""+to_string(page)+","+to_string(row)+","+to_string(col)]='~';
                row++;
            }
        }
    }
    void Notebook::show(int i){

    }
    
}