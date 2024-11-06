#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    double getArea() const;
    double getCircum() const;

    double getWidth() const;
    void setWidth(const double newWidth);
    double getHeight() const;
    void setHeight(const double newHeight);
};

#endif // RECTANGLE_H
