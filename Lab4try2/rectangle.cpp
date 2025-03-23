#include "rectangle.h"

Rectangle::Rectangle(const Point& center, int width, int height, const std::string& stroke, const std::string& fill, bool selected)
    : Figure(center, stroke, fill, selected), width(width), height(height) {}

void Rectangle::AddTo(SVG& svg) const {
    std::string currentFill = selected ? "yellow" : fill;
    svg.getFile() << "<rect x=\"" << center.getX() - width / 2 << "\" y=\"" << center.getY() - height / 2
        << "\" width=\"" << width << "\" height=\"" << height
        << "\" stroke=\"" << stroke << "\" fill=\"" << currentFill << "\" />\n";
}