#include <iostream>

// 例外を表すクラス
class some_exception
{
private:
    const char* msg;   // 例外を説明するメッセージ
public:
    some_exception(const char* msg) : msg(msg) { }  // コンストラクタ
    const char* what() { return msg; }  // メッセージを返す
};

int main()
{
    try
    {
        throw some_exception("some error message");  // 例外をスロー
    }
    catch (some_exception e)  // some_exception 型の例外をキャッチ
    {
        std::cerr << "some_exception: " << e.what() << std::endl;
    }
    catch (...)  // その他の例外をキャッチ
    {
        std::cerr << "unknown exeption" << std::endl;
    }

    return 0;
}