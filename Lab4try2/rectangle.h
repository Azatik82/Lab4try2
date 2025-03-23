#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
private:
    int width, height;

public:
    Rectangle(const Point& center, int width, int height, const std::string& stroke = "black", const std::string& fill = "white", bool selected = false);
    void AddTo(SVG& svg) const override;
};

#endif
