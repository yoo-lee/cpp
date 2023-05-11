// You must create a program with these constraints:
// • The program name is RPN.
// • Your program must take an inverted Polish mathematical expression as an argument.

// 逆ポーランド記法では、演算子がオペランドに対して直接適用されるため、括弧や優先順位のルールが必要ありません。計算機のスタックを使用して数式を評価することができます。具体的には、数式のトークンを順番に処理し、演算子が現れた場合は直前のオペランドを取り出して計算し、
// 結果をスタックに戻します。最終的にスタックに残る値が数式全体の評価結果となります。

// • The numbers used in this operation and passed as arguments will always be less
// than 10. The calculation itself but also the result do not take into account this rule.

int main ()
{
		
}

// • Your program must process this expression and output the correct result on the
// standard output.

// • If an error occurs during the execution of the program an error message should be
// displayed on the standard output.
// • Your program must be able to handle operations with these tokens: "+ - / *".
// You must use at least one container in your code to validate this
// exercise.
// 8
// C++ - Module 09 STL
// You don’t need to manage the brackets or decimal numbers.
// Here is an example of a standard use:

// $> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
// 42
// $> ./RPN "7 7 * 7 -"
// 42
// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0
// $> ./RPN "(1 + 1)"
// Error
// $>
// Warning: The container(s) you used in the previous exercise are
// forbidden here. The container(s) you used to validate this exercise
// will not be usable for the rest of this module.