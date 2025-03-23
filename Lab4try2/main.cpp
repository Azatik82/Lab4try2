#include "svg.h"
#include "rectangle.h"
#include "circle.h"
#include "circleinquare.h"

int main() {
    SVG svg("output.svg");

    Point center1(100, 100);
    Point center2(200, 200);

    Rectangle rect1(center1, 80, 60);
    Circle circle1(center2, 50);
    CircleInSquare circleInSquare(center1, 100);

    rect1.AddTo(svg);
    circle1.AddTo(svg);
    circleInSquare.AddTo(svg);

    return 0;
}