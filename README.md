### ARC ENGINE
    là một game engine trên nền tảng arduino R3 chipset ATmega328 
## Một namespace chứa các class của Game Engine cho việc gọi xây dựng game bên trong ino file

**
>  Game engine bao gồm nhiều class nhưng hiện tại cần 3 class chính: GameObject, Scene, Compoment

## Class GameObject
	 Class game Object chứa các thuộc tính cơ bản của một đối tượng như Position, HP, Damge, ... phụ thuộc vào game mà các Game Developer mong muốn.
	Tương tác được với các compoment.
	
Sprite: một hàm đọc file ảnh bmp xuất ra mảng spriteData để render ra màn hình.
Position: chứa poisition.x, position.y (Global Position hoặc View Positon)
Compoment interactor: một hoặc nhiều call back cho phép thêm các compoment tương tác với game object như Collision, Gravity, Input Controller, Audio,... 

## Class Camera

Class camera chứa các thuộc tính như height, width, position,... mục đích để xác định vùng cần render lên màn hình

> Position của một  game object có 2 loại Gloabal Position và View Position

Camera Position là vịa trí của Camera trong Game Scene, khi một Game Object được render lên màn hình thì nó có 1 thuộc tính View Position cho biết vịa trí của nó trên màn hình
View position là 1 hệ trục x, y lấy góc dưới bên trái của màn hình làm gốc toạ độ, trục hoành là x, trục tung là y.

## Game Scene

Class chứa tất cả Game Object trong một scene, có thể hiểu scene là một màn chơi. Khi thiết kế level, các Game Dev sẽ  thiết lập  Global Position cho từng Game Object, hay BackGround, Enemy Boss....

    > Không như View Position giới hạn bởi độ phân giản màn hình, Global Position không bị giới hạn bởi màn hình nhung bị giới hạn về phần cứng (sram, dynamic memmory, CPU clock, ....)
