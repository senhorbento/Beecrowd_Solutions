line = input().split(" ")
a = int(line[0])
b = int(line[1])
c = int(line[2])
ab = int(((a + b) + abs(a - b)) / 2)
print(ab if ab > c else c, "eh o maior")