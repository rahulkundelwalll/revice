#include <bits/stdc++.h>
using namespace std;
#define ll long long

class game
{
public:
    void game1()
    {
        intialized();
        startplaying();
        stopPlaying();
    }

protected:
    virtual void intialized() = 0;
    virtual void startplaying() = 0;
    virtual void stopPlaying() = 0;
};

class cricket : public game{
    public:
    void intialized() override{
        cout<<"criket inistialized \n";
    }
    void startplaying() override{
        cout<<"criket start \n";
    }
    void stopPlaying() override{
        cout<<"criket end \n";
    }
};

class footBall : public game{
    public:
    void intialized() override{
        cout<<"footBall inistialized \n";
    }
    void startplaying() override{
        cout<<"footBall start \n";
    }
    void stopPlaying() override{
        cout<<"footBall end \n";
    }
};

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    game* g = new cricket();
    g->game1();
    g = new footBall();
    g->game1();
    return 0;
}