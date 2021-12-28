#include <iostream>
#define pi 3.14159

using namespace std;

float callculate_circle(float rad);
float callculate_rectangal(float height, float width);
float callculate_squre(float width);

int main(){

float greenarea;

greenarea = callculate_rectangal(28,15) - callculate_circle(5) -callculate_rectangal(3,7) - callculate_squre(4);

cout << greenarea << endl;

}

float callculate_circle(float rad){

    return pi*rad*rad;
}

float callculate_rectangal(float height, float width){

    return height*width;
}

float callculate_squre(float width){

    return width*width;
}