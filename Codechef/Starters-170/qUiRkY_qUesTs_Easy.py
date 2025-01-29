
def cnt_sub(x): 
    return x*(x+1)//2 

def solve(): 
    t = int(input())

    for j in range(t):
        n = int(input())
        a = list(map(int,input().split()))

        cnt = 0
        blck_size = 1; 

        for i in range(1,n+1):
            if(i<n and a[i] == a[i-1]):
                blck_size += 1
            else:
                cnt += cnt_sub(blck_size)
                blck_size = 1
        print(cnt); 
if __name__ == "__main__":
    solve()
