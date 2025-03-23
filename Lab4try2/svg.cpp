#include "svg.h"

SVG::SVG(const std::string& filename) : filename(filename) {
    file.open(filename);
    if (file.is_open()) {
        file << "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">\n";
    }
}

SVG::~SVG() {
    if (file.is_open()) {
        file << "</svg>";
        file.close();
    }
}

std::ofstream& SVG::getFile() {
    return file;
}