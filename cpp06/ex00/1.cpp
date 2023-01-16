// Write a program that takes as parameter 
// a string representation of a C++ literal in
// its most common form.
std::string s;

//  This literal must belong to one of the following a scalar types:
// char, int, float or double. Except for char parameters, 
// only the decimal notation will be
// used.
// Examples of char literals: ’c’, ’a’, ...
// To make things simple, please note that
//  non displayable characters shouldn’t be used as
// inputs.
 If a conversion to char is not displayable, prints an informative message.
// Examples of int literals: 0, -42, 42...
// Examples of float literals: 0.0f, -4.2f, 4.2f...
// You have to handle these pseudo literals as well (you know, for science): -inff, +inff
// and nanf.
// Examples of double literals: 0.0, -4.2, 4.2...
// You have to handle these pseudo literals as well (you know, for fun): -inf, +inf and nan.
// 6
// C++ - Module 06 C++ casts
// You have to first detect the type of the literal passed as parameter, convert it from
// string to its actual type, then convert it explicitly to the three other data types. Lastly,
// display the results as shown below.
// If a conversion does not make any sense or overflows, display a message to inform
// the user that the type conversion is impossible. Include any header you need in order to
// handle numeric limits and special values.
// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0