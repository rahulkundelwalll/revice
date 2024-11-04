#include <iostream>
#include <memory>
#include <string>
using namespace std;
class Shape{
    public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle: public Shape{
    public:
    void draw() const override{
        cout<<"circle"<<endl;
    }
};
class Square: public Shape{
    public:
    void draw() const override{
        cout<<"Square"<<endl;
    }
};
class Reactangle: public Shape{
    public:
    void draw() const override{
        cout<<"Reactangle"<<endl;
    }
};

class ShapeFactory {
    public :
    unique_ptr<Shape> createShape(const string & shapeType)
    {
        if(shapeType=="circle")
        {
            return make_unique<Circle>();
        }
        else if(shapeType=="squire")
        {
            return make_unique<Square>();
        }
        else if(shapeType=="reactangle")
        {
            return make_unique<Reactangle>();
        }
        else
        {
            return nullptr;
        }
    }
};

int main()
{
    ShapeFactory factory;
    auto circle  = factory.createShape("circle");
    if(circle)
    {
        circle->draw();
    }
     auto square  = factory.createShape("squire");
    if(square)
    {
        square->draw();
    }
     auto reactangle  = factory.createShape("reactangle");
    if(reactangle)
    {
        reactangle->draw();
    }
    auto unknown = factory.createShape("triangle");
    if (!unknown) {
        std::cout << "Unknown shape type requested!" << std::endl;
    }
    
    return 0;
}