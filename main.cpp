#include <iostream>
#include <math.h>

using namespace std;

float dist(float x1, float y1, float x2, float y2) {
    float distance = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
    return distance; 
}

int main() {
    cout << dist(1, 1, 8, 8) << endl;
}