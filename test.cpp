#include <iostream>
#include "arc_engine.h"

using namespace std;
int main(){
    Transform transform(1, 3);
    Vector2 cac(-3, -2);
    transform.translate(cac);

    cout << transform.position.x << transform.position.y; 
}