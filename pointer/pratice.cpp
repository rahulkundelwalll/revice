// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ios::sync_with_stdio(0), cin.tie(0);
//     int *p; //Contains garbage value
// int *p = NULL; //NULL is constant with vaue 0
// int *q = 0; // Same as above
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     // Null Pointer
//     int * ptr = NULL;
//     cout << "The value of ptr is " << ptr;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     int * p = & a; //pointer
//     int ** q = & p; //pointer-to-pointer
//     /* Next three statements will print same value i.e. address of a */
//     cout << & a << endl;
//     cout << p << endl;
//     cout << * q << endl;
//     /* Next two statements will print same value i.e. address of p */
//     cout << & p << endl;
//     cout << q << endl;
//     /* Next three statements will print same value i.e. value of a */
//     cout << a << endl;
//     cout << * p << endl;
//     cout << ** q << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     void * ptr;
//     int i = 10;
//     // assign int address to void
//     ptr = & i;
//     cout << "Address of variable i " << & i << endl;
//     cout << "Address where the void pointer is pointing " << ptr <<  endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p;
//     *p = 5;
//     cout << p << " " << *p << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int * func()
// {
//     int x = 10;
//     return &x;
// }
// int main()
// {
//     int * p = func();

//     cout<<*p<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     //dynamic memory allocation.
   

//     int *p = (int*) malloc(sizeof(int));
//     //after calling free() p becomes a dangling pointer
//     free(p);
//     //now p no more a dangling pointer.
//     p = NULL;
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    int * ptr;
    //any code statements
    if(true){   int ch;
        ptr = & ch;
    }
    return 0;




    // Here ptr is dangling pointer
}



// soource - https://www.naukri.com/code360/guided-paths/pointers?nps=true