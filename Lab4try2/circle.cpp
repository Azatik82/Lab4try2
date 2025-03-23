#include "circle.h"

Circle::Circle(const Point& center, int radius, const std::string& stroke, const std::string& fill, bool selected)
    : Figure(center, stroke, fill, selected), radius(radius) {}

void Circle::AddTo(SVG& svg) const {
    std::string currentFill = selected ? "yellow" : fill;
    svg.getFile() << "<circle cx=\"" << center.getX() << "\" cy=\"" << center.getY()
        << "\" r=\"" << radius << "\" stroke=\"" << stroke
        << "\" fill=\"" << currentFill << "\" />\n";
}