peso1 = 3.5
peso2 = 7.5
a = float(input())
b = float(input())

result = "MEDIA = " + '%.5f' % (((a*peso1)+(b*peso2))/(peso1+peso2))
print(result)
