import random
secert=random.randint(1,10)
print('`````````````second`````````````')
temp=input('我现在心里想的数是什么:\n')
guess=int(temp)
while guess!=secert:
    if guess>secert:
        print('你猜的数有点大哦~\n')
        temp=input('仔细考虑下应该填什么:\n')
        guess=int(temp)
    else:
        print('你猜的数小了哦~\n')
        temp=input('仔细考虑下应该填什么:\n')
        guess=int(temp)

print('^_^,猜对了!!好厉害哦~')
    
    
