s, t = map(str, input().split())

p, q = map(int, input().split())

if p == 0  or q == 0:
    print("=")
    exit()

sconc = s
tconc = t

if sconc+tconc > tconc+sconc:
    print(">")

elif sconc+tconc < tconc+sconc:
    print("<")
else:
    print("=")

