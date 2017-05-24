#装饰器
Decorator 通过返回包装对象实现间接调用,以此插入额外逻辑。
函数也是对象，函数对象赋值给变量，通过变量调用函数

def now():
    print('2015-3-25')

f=now
f()

函数对象的属性：__name__-->可以拿到函数名字

naw.__name__
f.__name__

增强now()函数的功能-->在调用函数前后自动打印日志
装饰器Decorator：代码运行期间动态增加功能的方式
实质：decorator是高级函数——>返回函数
定义装饰器：
def log(func):
    def wrapper(*args,**kw):
        print('call %s()' %func.__name__)-->打印log
        return func(*args,**kw)-->调用原始函数
    return wrapper
log 是一个decorator，接受函数作为参数，返回一个函数
将decorator置于函数的定义处:def now():之前
    @log
    def now():
        print('skdfh')
        
调用now()函数 运行now（）函数本身外，还在他之前打印一行log
相当于执行了：now=log(now)——>指向wrapper函数
log()是decorator，返回函数，原来的now()函数仍存在，只是函数名now指向新函数
调用now()将执行新函数-->在log()函数中返回的wrapper()函数

wrapper()函数参数（*args,**kw）,代表是可以接受任意参数的调用


decorator本身需要传入参数，编写一个返回decorator的高级函数
def log(text):
    def decorator(func):-->通过decorator调用now,而实际上是调用wrapper，函数名now.__name__->wrapper
                               此时将原始函数now的__name__等属性复制到wrapper()函数中
                               此时now.__name__-->wrapper
        def wrapper(*args,**kw):
            print('call %s()' %func.__name__)
            return func(*args,**kw)
        return wrapper
    return decorator

@log
def now('execute'):
    print('dsfs')

now=log('execute')(now)

functools-->wrapper.__name__=func.__name__用@functools.wraps(func)代替@functools.wraps(func) 可以保证装饰器不会对被装饰函数造成影响
#原始函数now的__name__等属性复制到wrapper()函数中
import functools

 def log(func):
     @functools.wraps(func)
     def wrapper(*args,**kw):
         print ('call %s()' %func)

         装饰器返回的对象是wrapper






















