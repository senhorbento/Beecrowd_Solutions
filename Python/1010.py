item1 = input().split(" ")
item2 = input().split(" ")
print("VALOR A PAGAR: R$", '%.2f' %
      (((int(item1[1])*float(item1[2])) + (int(item2[1]) * float(item2[2])))))
