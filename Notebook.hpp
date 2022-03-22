#include<string>
#include "Direction.hpp"
#include <unordered_map>

namespace ariel {
    class Notebook
    {
    private:
        std::unordered_map<std::string, int> note;
    public:
        Notebook();
        Notebook(double o);
        ~Notebook();
        void write(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, std::string s);
        std::string read(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, unsigned int length);
        void erase(unsigned int page, unsigned int row, unsigned int col, ariel::Direction dir, unsigned int length);
        void show(int i);
    };
}
