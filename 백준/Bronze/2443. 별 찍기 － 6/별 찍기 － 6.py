N = int(input())
ct = 1

for i in range(N) :
    if (i == 0) : {
        print("*" * (2 * N - (i+ct)))
    }
    else : {
        print(" " * (i-1), "*" * (2 * N - (i+ct)))
    }
    ct += 1