#include <arc/engine/arc_engine.hpp>
#include <iostream>

using namespace std;
using namespace arc;

int main(){
    Transform transform(1, 3);
    Vector2 cac(-3, -2);
    transform.translate(cac);

    cout << transform.position.x << transform.position.y; 
}
