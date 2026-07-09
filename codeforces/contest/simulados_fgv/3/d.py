n = int(input())

under2 = str(chr(95) * (n + 1)) #__
under1 = str(chr(95) * (n)) # _
barrainv = str(chr(92)) # \
barra = str(chr(47)) # /
esp = str(chr(32)) # 


print((esp * n) + under2)

for i in range(n-1):
    print((esp * (n-1-i)) + barra + (esp * (n+1+(i*2))) + barrainv)

print(barra + under1 + (esp*(2*(n-1)+1)) + barrainv + under2)

for i in range(n-2, -1,-1):
    print((esp*(n+1)) + (esp * (n-2-i)) + barrainv + (esp * (n+3+(i*2))) + barra)

print(esp * (n+1 + n-1) + barrainv + under2 + barra)