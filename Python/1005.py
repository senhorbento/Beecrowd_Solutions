peso1 = 2
peso2 = 3
peso3 = 5
a = float(input())
b = float(input())
c = float(input())

result = "MEDIA = " + '%.1f' % (((a*peso1)+(b*peso2)+(c*peso3))/(peso1+peso2+peso3))
print(result)
