f = open("article.txt")
text = f.read()
text = text.lower()
text = text.replace('\"', '')
text = text.replace(',', '')
text = text.replace('.', '')
text = text.replace('[' , '')
text = text.replace(']' , '')
text = text.replace(':' , '')
text = text.replace('?' , '')
text = text.replace('!' , '')

words = text.split()
totalwords = {}

total_words = 0

for word in words:
    totalwords[word] = totalwords.get(word, 0) + 1    

for word, totwor in totalwords.items():
    print(word, totwor)

print('Total:' + str(len(totalwords)))
    


