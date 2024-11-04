#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Amplifier{
    public:
    void on()
    {
        cout<<"amplifier on\n";
    }
    void off()
    {
        cout<<"amplifier off\n";
    }
};

class DVDPlayer{
    public:
    void on(){
        cout<<"DVD Player on \n";
    }
    void off()
    {
        cout<<"DVD Player off \n";

    }
    void play()
    {
        cout<<"DVD Player playing \n";
    }

    void stop()
    {
        cout<<"DVD Player stopping \n";
    }
};

class Projector{
    public:
    void on(){
        cout<<"Projector on \n";
    }
    void off()
    {
        cout<<"projector off \n";
    }
};

class TheaterLights {
public:
    void dim() { std::cout << "Lights dimmed\n"; }
    void on() { std::cout << "Lights on\n"; }
};

class HomeTheaterFacade{
    private:
    Amplifier &amp;
    DVDPlayer &dvd;
    Projector &projector;
    TheaterLights &light;
    public:
    HomeTheaterFacade(Amplifier & a,DVDPlayer &d,Projector &p,TheaterLights &l): amp(a),dvd(d),projector(p),light(l){}

    void watchMovie(){
        cout << "Getting ready to watch a movie...\n";
        amp.on();
        light.dim();
        dvd.on();
        dvd.play();
        projector.on();
    }

    void endMovie(){
        std::cout << "Shutting down movie theater...\n";
        dvd.stop();
        dvd.off();
        light.on();
        projector.off();
        amp.off();
    }
};


int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    Amplifier amp;
    Projector projector;
    TheaterLights light;
    DVDPlayer dvd;

    HomeTheaterFacade thater(amp,dvd,projector,light);
    thater.watchMovie();
    thater.endMovie();
    return 0;
}