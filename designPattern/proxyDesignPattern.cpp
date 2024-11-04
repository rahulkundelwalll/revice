#include <iostream>
#include <memory>
#include <string>
using namespace std;
#define ll long long
class Image{
    public:
    virtual void display() = 0;
    virtual ~Image() =default;
};
class RealImage : public Image{
    private:
    string filename;
    void LoadingfromDesk()
    {
        cout<<"Loading from disk\n";
    }
    public:
    RealImage(const string & filename1): filename(filename1){ LoadingfromDesk();}
    void display() override {
        cout << "Displaying image: " << filename << endl;
    }

};

class ProxyImage : public Image{
    private:
    string filename;
    unique_ptr<RealImage> realimage;
    public:
    ProxyImage(const string &  filename):filename(filename),realimage(nullptr){}
    void display() override
    {
        if(!realimage)
        {
            realimage = make_unique<RealImage>(filename);
        }
        realimage->display();
    }
};


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    ProxyImage image("rahul.txt");
    image.display();
    image.display();
    return 0;
}