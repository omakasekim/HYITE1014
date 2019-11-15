f = open("article.txt")
text = f.read()
text = text.replace('\"', '')
text = text.replace(',', '')
text = text.replace('.', '')
text = text.replace('[' , '')
text = text.replace(']' , '')
text = text.replace(':' , '')
text = text.replace('?' , '')
text = text.replace('!' , '')

ew = text.split()
collect = dict()


total = 0
for k in ew:

    for i in k:
        alpha = i
        collect[alpha] = collect.get(alpha, 0) +1

for wc in collect.items():
    print(wc)
    
print()

for i in range(ord('a'),ord('z')+1):
    if chr(i) in collect:
        print(chr(i),collect[chr(i)])


for j in range(ord('A'),ord('Z')+1):
    if chr(j) in collect:
        print(chr(j),collect[chr(j)])

print()
        
        
        
