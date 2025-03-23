#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure {
private:
    int radius;

public:
    Circle(const Point& center, int radius, const std::string& stroke = "black", const std::string& fill = "white", bool selected = false);
    void AddTo(SVG& svg) const override;
};

#endif
