
def add(a,b):
    return int(a)+int(b)
    print(add(a,b))
def sub(a,b):
    return int(a)-int(b)
    print(sub(a,b))
def mul(a,b):
    return int(a)*int(b)
    print(mul(a,b))
def div(a,b):
    return int(a)/int(b)
    print(div(a,b))




def main():
    a = 0
    print('first operand is 0')
    print('''operator(+, -, *, /, exit)
>>''')
    operator = input()
    if operator not in '+-*/':
        print('Enter a proper operator.')
    
    if operator in '+-*/':
        print('''operand
>> ''')
    b = input()
    

    if operator == '+':
        add(a,b)
        a = add(a,b)
    elif operator == '-':
        sub(a,b)
        a = sub(a,b)
    elif operator == '*':
        mul(a,b)
        a = mul(a,b) 
    elif operator == '/':
        div(a,b)
        a = div(a,b)
    elif operator == 'exit':

    
if__name =='__main__';;
    main()

