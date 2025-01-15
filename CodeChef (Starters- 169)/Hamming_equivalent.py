def count_subarrays(k):
    return k * (k + 1) // 2

def solve():
    T = int(input())
    for _ in range(T):
        N = int(input())
        A = list(map(int, input().split()))

        normal_subarray_count = 0
        block_length = 1

        for i in range(1, N + 1):
            if i < N and A[i] == A[i - 1]:
                block_length += 1
            else:
                normal_subarray_count += count_subarrays(block_length)
                block_length = 1

        print(normal_subarray_count)

if __name__ == "__main__":
    solve()
