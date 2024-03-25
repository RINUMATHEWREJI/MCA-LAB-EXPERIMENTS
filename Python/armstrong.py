def armstrong_number(num):
    temp = num
    sum = 0
    order = len(str(num))
    while(temp > 0):
        digit = temp % 10
        sum = sum + digit ** order
        temp //= 10
    return sum == num
