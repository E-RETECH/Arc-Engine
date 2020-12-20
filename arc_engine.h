namespace arc{
    class Vector2{
    public:
        int x;
        int y;

        Vector2(int x = 0, int y = 0){
            this -> x = x;
            this -> y = y;
        }

        Vector2 operator+(Vector2 vector2){
            Vector2 result = Vector2();
            result.x = this->x + vector2.x;
            result.y = this->y + vector2.y;
            return result;
        }

        Vector2 operator-(Vector2 vector2){
            Vector2 result = Vector2();
            result.x = this->x - vector2.x;
            result.y = this->y - vector2.y;
            return result;
        }
    };

    class Transform{
    public:
        Vector2 position;
        void translate(Vector2 translateVector){
            position = position + translateVector;
        }

        Transform(int x = 0, int y = 0){
            this->position.x = x;
            this->position.y = y;
        }
    };
}