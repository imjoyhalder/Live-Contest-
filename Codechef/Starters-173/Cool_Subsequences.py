import sys

def find_cool_subsequence(n, arr):
    seen = set()

    for num in arr:
        if num in seen:
            print(1)
            print(num)
            return
        seen.add(num)

    print(-1)

t = int(sys.stdin.readline().strip())

for _ in range(t):
    n = int(sys.stdin.readline().strip())
    arr = list(map(int, sys.stdin.readline().split()))
    find_cool_subsequence(n, arr)
