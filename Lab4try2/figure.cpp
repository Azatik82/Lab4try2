#include "figure.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }

void Point::setX(int newX) { x = newX; }
void Point::setY(int newY) { y = newY; }

Figure::Figure(const Point& center, const std::string& stroke, const std::string& fill, bool selected)
    : center(center), stroke(stroke), fill(fill), selected(selected) {}

void Figure::SetFill(const std::string& newFill) {
    fill = newFill;
}

void Figure::SetStroke(const std::string& newStroke) {
    stroke = newStroke;
}

void Figure::SetSelected(bool isSelected) {
    selected = isSelected;
}

void Figure::DrawCircle(SVG& svg, int cx, int cy, int r, const std::string& stroke, const std::string& fill) {
    svg.getFile() << "<circle cx=\"" << cx << "\" cy=\"" << cy
        << "\" r=\"" << r << "\" stroke=\"" << stroke
        << "\" fill=\"" << fill << "\" />\n";
}

void Figure::DrawRectangle(SVG& svg, int x, int y, int width, int height, const std::string& stroke, const std::string& fill) {
    svg.getFile() << "<rect x=\"" << x << "\" y=\"" << y
        << "\" width=\"" << width << "\" height=\"" << height
        << "\" stroke=\"" << stroke << "\" fill=\"" << fill << "\" />\n";
}