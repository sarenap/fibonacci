def main():
    num = 8
    cache = [-1] * (num + 1)
    print(fib(num, cache))

def fib(num, cache):
    if num <= 1:
        cache[num] = num
        return num
    
    if cache[num] != -1:
        return cache[num]
    
    else:
        result = fib(num - 1, cache) + fib(num - 2, cache)
        cache[num] = result
        return result

main()
#must call main in puython