x = int(input())

p = 2

while(x >= p * p):
    if x % p ==  0:
        print(p)
        x = x // p
    else:
        p += 1
print(x)