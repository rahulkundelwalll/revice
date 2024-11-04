#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Printer{
    public:
    virtual void print(const string & data)= 0;
    virtual ~Printer() = default;
};

class LegacyPrinter{
    public:
    void print(const string& data) {
       cout << "Printing with LegacyPrinter: " << data << endl;
    }
};

class PrinterAdatpter :public Printer{
    private:
    LegacyPrinter &l;
    public :
    PrinterAdatpter(LegacyPrinter & p): l(p){}
    void print(const string & text ) override {
        l.print(text);
    }
};

int main() {
    LegacyPrinter oldPrinter;
    PrinterAdatpter adapter(oldPrinter);

    // Client uses the adapter as if it's a Printer
    adapter.print("Hello, Adapter Pattern!");  // Output: Printing with LegacyPrinter: Hello, Adapter Pattern!

    return 0;
}