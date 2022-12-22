value = 0
count = 0

while count < 3:
    string = input()

    if string[0] == '*':
        value += 4
    
    if string[1] == '*':
        value += 2
    
    if string[2] == '*':
        value += 1
    
    if string[0] == 'c':
        print(value)
        value = 0
        count += 1