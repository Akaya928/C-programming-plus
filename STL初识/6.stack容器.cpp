//1.stack(栈) 基本概念：
//stack是一种先进后出(First In Last Out,FILO)的数据结构，它只有一个出口
//栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
//栈中进入数据称为 ---入栈 push
//栈中弹出数据称为 ---出栈 pop

//2.stack(栈) 常用接口
//2.1.构造函数：
//stack<T> stk //stack采用模板类实现，stack对象的默认构造形式
//stack(const stack &stk); //拷贝构造函数

//2.2.赋值操作：
//stack& operator=(const stack &stk); //重载等号操作符

//2.3.数据存取：
//push(elem); //向栈顶添加元素
//pop(); //从栈顶移除第一个元素
//top(); //返回栈顶元素

//2.3.大小操作
//empty(); //判断栈是否为空
//size(); //返回栈的大小