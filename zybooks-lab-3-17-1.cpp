// Summary: Given integer values for red, green, and blue, subtract the gray from each value.

// Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range from 0 to 255. Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. (In other words, equal amounts of red, green, blue yield gray).

// Given values for red, green, and blue, remove the gray part.

// Ex: If the input is:

// 130 50 130
// the output is:

// 80 0 80
// Find the smallest value, and then subtract it from all three values, thus removing the gray.

// Compile and run
// g++ zybooks-lab-3-17-1.cpp && ./a.out < <(echo '130 50 130') && rm ./a.out


#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int r;
   int g;
   int b;
   cin >> r >> g >> b;

   // Find the smallest value, and then subtract it from all three values, thus removing the gray.
   // find min;
   int min = r;
   if(g < min) {
    min = g;
   }
   if(b < min) {
    min = b;
   }

    // subtract it from all three values
    r = r - min; 
    g = g - min;
    b = b - min;

    cout << r << ' ' << g << ' ' << b << endl;

   return 0;
}
