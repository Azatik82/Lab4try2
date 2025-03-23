#ifndef SVG_H
#define SVG_H

#include <fstream>
#include <string>

class SVG {
private:
    std::ofstream file;
    std::string filename;

public:
    SVG(const std::string& filename);
    ~SVG();
    std::ofstream& getFile();
};

#endif
