#高级函数Height-order function

变量可以指向函数
调用函数-->abs(-10)
abs-->是函数本身
获取函数调用结果，可赋值给变量

函数本身赋值给变量——>函数本身可以赋值给变量，变量指向函数
f=abs
可以用该变量调用函数

函数名也是变量-函数对象-函数本身
函数名是指向函数的变量，可以把abs看作变量，指向（有什么功能）的函数

若abs指向其他对象后，就不能是指向abs()函数

高级函数——>变量指向函数，函数参数接送变量，函数可以接受另一个函数本身作为参数——>高级函数
add(a,b,f)
a=-5
b=6
f=abs——>指向函数的变量作为参数