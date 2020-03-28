answer = -1
for i in range(100, 1000):
    for j in range(100, 1000):
        r = i * j
        rev =''.join(reversed(str(r)))
        if rev == str(r) and r > answer:
            answer = r
     
print(answer)
