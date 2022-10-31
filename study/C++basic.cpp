Phonebook :: _contactNb = 0;

Phonebook::Phonebook(void)
{
	_firstName = " ";
	_lastName = " ";
	_nickname = " ";
	_login = " ";
	_postalAddress = " ";
	_emailAddress = " ";
	_phoneNumber = " ";
	_birthdayDate = " ";
	_favoriteMeal = " ";
	_underwearColor = " ";
	_darkestSecret = " ";
	return;
}

Phonebook::~Phonebook(void)
{
	return;
} 
// 名前空間エイリアス修飾子（::演算子）はC# 
// 2.0で新しく導入された演算子で、
// 名前空間に対して定義されたエイリアス（別名）により、
// ラスやほかの名前空間などを修飾する場合に使用する。

class Student
{
	public://アクセス指定子
	
	int year;
	int num;
	void show();
};

Student Tanaka
{
	Student Tanaka;
	Tanaka.num = 10;
	
}
//メンバ

// 上記のように変数と関数を扱うことができる。
// 処理を意味する。

//
class hikizan
{
	
};

class tashizan
{
	

};

// アクセス指定子　外部から読み書きできるか
// メンバ関数の実装　クラス内の関数を作る。

int main ()
{
	Student Tanaka;
	Tanaka.num = 10;
	Tanaka.year = 12;
	
}
void Student::show()
{
	
}
スコープ解決演算子::

using namespace std;

class Student
{
	public://外部から読み書きできるようにしたい。
		int num;
		int year;
		void show();
};

void Student::show()
{
	cout << "番号" << num << "\n"
	cout << "年齢" << year << "\n"
}


int main ()
{
	Student
}

void Student::show()
{
	cout << num << "\n"
	cout << year << "\n"
}

class Student
{
	
}


組み込み型のデータ型

ユーザ定義型
構造体

クラス
扱うデータをコンピュータに伝える。

C++ では文字列型　であることを示している
char型

int num;
