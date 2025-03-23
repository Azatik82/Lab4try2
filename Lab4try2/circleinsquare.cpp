#include "circleinquare.h"

CircleInSquare::CircleInSquare(const Point& center, int side, const std::string& stroke, const std::string& fill, bool selected)
    : Rectangle(center, side, side, stroke, fill, selected),
    circle(center, side / 2, stroke, fill, selected) {}

void CircleInSquare::AddTo(SVG& svg) const {
    Rectangle::AddTo(svg);
    circle.AddTo(svg);
}