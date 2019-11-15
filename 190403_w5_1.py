

def add(a,b):
    print("result")
    print(a+b)    
def sub(a,b):
    print("result")
    print(a-b)    
def mul(a,b):
    print("result")
    print(a*b)    
def div(a,b):
    print("result")
    print(a/b)    
def main():
    operand = 0
    a = 0
    esc = str("exit")    
    print('first operand is 0')
    while a != esc:
        a = input("operator(+, -, *, /, exit) \n" + " >> ")                   
        if (a != '+' and a != '-' and a != '*' and a != '/'):
            print("wrong input \n" + "result")
            print(str(operand))
        else:
            b = int(input("operand \n"))
            if a == '+':
                add(operand, b)
                operand = operand + b
            if a == '-':
                sub(operand, b)
                operand = operand - b
            if a == '*':
                mul(operand, b)
                operand = operand * b
            if a == '/':
                div(operand, b)
                operand = operand / b


main()
