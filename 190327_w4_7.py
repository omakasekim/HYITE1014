def drawline(length, m):
    empty = length - m
    half = m // 2
    stars = '*' * half + ' ' * empty + '*' * half
    print(stars)

def stars():
    n = int(input('Enter num : '))
    length = 2 * n - 1

    print('*' * length)

    for i in range (n - 1, 0, -1):
        drawline(length, i * 2)

    for i in range(2, n):
        drawline(length, i * 2)

    print ('*' * length)



stars()
