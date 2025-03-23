#ifndef CIRCLEINSQUARE_H
#define CIRCLEINSQUARE_H

#include "rectangle.h"
#include "circle.h"

class CircleInSquare : public Rectangle {
private:
    Circle circle;

public:
    CircleInSquare(const Point& center, int side, const std::string& stroke = "black", const std::string& fill = "white", bool selected = false);
    void AddTo(SVG& svg) const override;
};

#endif
