import math

p1 = input().split(" ")
p2 = input().split(" ")
result = math.sqrt(
    pow((float(p2[0]) - float(p1[0])), 2) +
    pow((float(p2[1]) - float(p1[1])), 2)
)
print('%.4f' % result)
