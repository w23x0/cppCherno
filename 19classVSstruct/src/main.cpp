//类
#include <iostream>

#define LOG(x) std::cout << x << std::endl

#define sturct class
//对于c与c++兼容性，可以通过哈希值替换


	struct Player
	{
	

		int x = 0, y = 0;
		int speed = 1;
	
		void Move(int xa, int ya)
		{
			x += xa * speed;
			y += ya * speed;
		}
	};

	struct Vec2
	{
		float x = 0, y = 0;

		void Add(const Vec2& other)//常量引传递，避免不必要的复制
		{
			x += other.x;
			y += other.y;
		}
	};



	int main()
	{
		Player wzh;
		wzh.x = 1;
		wzh.y = 1;
		wzh.Move(2, 2);
		LOG(wzh.x);
		LOG(wzh.y);

		Vec2 v1;
		v1.x = 1.3f, v1.y = 2.4f;
		Vec2 v2;
		v2.x = 3.5f, v2.y = 4.6f;
		v1.Add(v2);
		LOG(v1.x), LOG(v1.y);





	}
	


