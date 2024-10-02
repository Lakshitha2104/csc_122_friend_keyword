#include <iostream>

using namespace std;

class Rectangle
{
private:
  int width;
  int height;

public:
  Rectangle(int w, int h) : width(w), height(h) {}

  int get_width()
  {
    return this->width;
  }

  int get_height()
  {
    return this->height;
  }

  void set_width(int w)
  {
    this->width = w;
  }

  void set_height(int h)
  {
    this->height = h;
  }
 
int area()
  {
    return this->width * this->height;
  }
};

Rectangle scale(Rectangle rectangle, int factor)
{
  int width = rectangle.get_width() * factor;
  int height = rectangle.get_height() * factor;
  return Rectangle(width, height);
}

Rectangle swap(Rectangle rectangle)
{
 int temp_width = rectangle.get_width();
  int temp_height = rectangle.get_height();
  
  rectangle.set_width(temp_height);
  rectangle.set_height(temp_width);

  return rectangle;
}

int main()
{
  Rectangle r1(2, 3);
  cout << "Area of Rectangle 1: " << r1.area() << endl;

  Rectangle r2 = scale(r1, 2);
  cout << "Area of Rectangle 2: " << r2.area() << endl;

  Rectangle r3 = swap(r1);
  cout << "After swap, area of Rectangle 3: " << r3.area() << endl;
  
  return 0;
}
