#include "RPN.hpp"
#include <vector>
#include <stack>
#include <stdexcept>

// 文字 c が空白文字でない場合は、文字 c を token 文字列に追加します。
// 式の文字列のすべての文字を反復処理した後、token 文字列が空でないかをチェックします。
// もし空でない場合、完全なトークンがまだ蓄積されていることを意味し、
// 最後の token を tokens ベクターに追加します。
// 最後に、式の文字列から抽出されたすべての個別のトークンを含む tokens ベクターを返します。
// この関数の目的は、与えられた式の文字列を空白文字に基づいて個別のトークンに分割することです。
// 各トークンは式内の演算子またはオペランドを表します。
// 結果として得られるトークンのベクターは、評価や他の目的のためにさらに処理することができます。

std::vector<std::string> tokenize(const std::string &expression)
{

// std::vector<std::string> tokensは、文字列のトークン（要素）を格納するための空のベクター
// を作成するための宣言です。

// std::string tokenは、トークンを一時的に格納するための文字列変数です。
// トークン化のプロセスでは、与えられた文字列を走査してトークンを抽出し、
// それぞれをベクターに追加する必要があります。そのため、トークンを一時的に格納するためのtoken変数が必要です。
  std::vector<std::string> tokens;
  std::string token;

// 式の文字列の各文字 c について反復処理を行います。
// 文字 c が空白文字かどうかをチェックします（std::isspace(c) によって判定）。
// もし空白文字であれば、token 文字列が空でないかを確認します。もし空でない場合、完全なトークンが蓄積されていることを意味し、
// token を tokens ベクターに追加し、次のトークンのために token 文字列をクリアします。
  for (char c : expression) 
  {
    if (std::isspace(c)) 
	{
      if (!token.empty()) 
	  {
        tokens.push_back(token);
        token.clear();
      }
    } else {
      token += c;
    }
//   具体的には、上記のコードでは文字列expressionの各文字を順番に変数cに代入しながら繰り返し処理を行います。
// つまり、文字列expressionの先頭から末尾までの各文字に対して、ループ内の処理が実行されます。
  }
  if (!token.empty()) {
    tokens.push_back(token);
  }
  return tokens;
}

// トークンを格納するための空の文字列ベクター tokens を初期化します。
// トークンを構成するために、文字列 token を空にします。

// トークンが演算子ではなく数値の場合、トークンを double 型に変換し、結果をスタックにプッシュします。変換に失敗した場合は例外をスローします。
// 全てのトークンの処理が終わった後、スタックのサイズが1でない場合は、式が不正であることを意味し、例外をスローします。

// 最終的な結果を返します。数式や演算に関するエラーが発生した場合は、例外をスローしてエラーメッセージを表示します。
double RPN::evaluate(const std::string &expression) {
// RPN::evaluate 関数は、逆ポーランド記法の数式を評価するためのメソッドです。以下にその動作を説明します：
// 式の文字列をトークンに分割し、tokens ベクターに格納します。これは tokenize 関数を呼び出して実現されます。
// stack という名前の空の double 型スタックを作成します。このスタックは、逆ポーランド記法の評価中に演算子やオペランドを一時的に格納するために使用されます。
  std::vector<std::string> tokens = tokenize(expression);
  std::stack<double> stack;

// tokens ベクター内の各トークンについて反復処理を行います。
// トークンが "+" の場合、スタックから2つのオペランドを取り出し、それらを足して結果をスタックにプッシュします。
  for (const auto &token : tokens) {
    if (token == "+") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for + operator");
      }
	//   lhsとrhsは、逆ポーランド記法の計算において、演算子の右側と左側のオペランドを表す変数です。
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs + rhs);
    } else if (token == "-") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for - operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs - rhs);
    } else if (token == "*") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for * operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      stack.push(lhs * rhs);
    } else if (token == "/") {
      if (stack.size() < 2) {
        throw std::runtime_error("Not enough operands for / operator");
      }
      double rhs = stack.top();
      stack.pop();
      double lhs = stack.top();
      stack.pop();
      if (rhs == 0) {
        throw std::runtime_error("Division by zero");
      }
      stack.push(lhs / rhs);
    } else {
      try {
        double value = std::stod(token);
        stack.push(value);
      } catch (const std::exception &e) {
        throw std::runtime_error("Invalid operand: " + token);
      }
    }
  }
  if (stack.size() != 1) {
    throw std::runtime_error("Invalid expression");
  }
  return stack.top();
}
