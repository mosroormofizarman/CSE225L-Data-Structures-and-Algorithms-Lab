 #include <iostream>

using namespace std;

class Box
{
    private:
        double height, width, depth;

    public:
        Box(double height, double width, double depth)
        {
            this->height = height;
            this->width = width;
            this->depth = depth;
        }

        double volume()
        {
            return height * width * depth;
        }
};
