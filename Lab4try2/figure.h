#ifndef FIGURE_H
#define FIGURE_H

#include "svg.h"
#include <string>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int newX);
    void setY(int newY);
};

class Figure {
protected:
    Point center;
    std::string stroke;
    std::string fill;
    bool selected;

public:
    Figure(const Point& center, const std::string& stroke = "black", const std::string& fill = "white", bool selected = false);
    virtual void AddTo(SVG& svg) const = 0; // Чисто виртуальный метод
    void SetFill(const std::string& newFill);
    void SetStroke(const std::string& newStroke);
    void SetSelected(bool isSelected);

    // Статические методы
    static void DrawCircle(SVG& svg, int cx, int cy, int r, const std::string& stroke = "black", const std::string& fill = "white");
    static void DrawRectangle(SVG& svg, int x, int y, int width, int height, const std::string& stroke = "black", const std::string& fill = "white");
};

#endif
