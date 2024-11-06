#include "rectangle.h"


double Rectangle::getArea() const
{
    double area=width*height;
    return area;
}

double Rectangle::getCircum() const
{
    double circum= 2 *(width + height);
    return circum;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width=newWidth;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height=newHeight;
}

