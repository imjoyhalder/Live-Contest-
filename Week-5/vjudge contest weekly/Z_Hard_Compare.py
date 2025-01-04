# Read input
A, B, C, D = map(int, input().split())

# Compare AB and CD
if A * B > C * D:
    print("YES")
else:
    print("NO")
