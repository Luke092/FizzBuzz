def buzz(i):
    if i % 3 == 0 and i % 5 == 0:
        return "FizBuzz"
    if i % 3 == 0:
        return "Fizz"
    if i % 5 == 0:
        return "Buzz"

    return str(i)

def fizBuzz(n):
    return [buzz(i + 1) for i in range(n)]

if __name__ == '__main__':
    print("Example 1:")
    print(fizBuzz(3))

    print("Example 2:")
    print(fizBuzz(5))

    print("Example 3:")
    print(fizBuzz(15))