a)错误： number是指针不是变量;
  改正：把指针number前面加上星号;cout <<*number << endl;

b)错误：realPtr是指针，引用时需要间接引用符;
  改正：把realPtr改成*realPtr;integerPtr = *realPtr;

c)错误：在声明一个引用前， &是类型的一部分;
  改正：在Y前面加上&; x = &y;

d)错误：s是一个指针;
  改正：把 ++s 改成 *( s + i );

e)错误：间接引用一个void指针;
  改正：把void指针强制转化为整数指针，将语句改成 result = *static_cast < int * > ( genericPtr ) + 7;

f)错误：指针前没加*;
  改正：把语句改成 cout << *xPtr << endl;
