#include <iostream>

class Human
{
	public:
    //仮想関数
    virtual void speak() const
    {
        std::cout << "Hello." << std::endl;
    }
};

// class Japanese : public Human
// {
// public:
//     //仮想関数をオーバーライド
//     void speak() const override
//     {
//         std::cout << "こんにちは。" << std::endl;
//     }
// };

// class Kor :public Human{
// 	public:
// 	void speak( ) const
// 	{
// 		std::cout << "fhoai\n";
// 	}
// };

class Jap :public Human
{
	public :
	virtual void speak() const
	{
        std::cout << "chimpo。" << std::endl;
	}
};

class U : public Human
{
	public :
	virtual  void speak() const
	{
        std::cout << "gyao000。" << std::endl;
	}
};

//引数を基底クラスの参照で受け取る
void action(const Human &human)
{
    human.speak();
}

int main()
{
    Human john;
    Jap taro;
    U Yuri;
	// Kor unchi;
    action(john);
    action(taro);
    action(Yuri);
    // action(unchi);

    std::cin.get();
}