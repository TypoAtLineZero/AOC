import pandas as pd
from collections import defaultdict, Counter


def main():
    df = open("./AOC2024-01_input.py").read().strip()
    lines = df.split('\n')
    
    LL = []
    RR = []
    RC = Counter()

    for line in lines:
        L,R = line.split()
        L,R = int(L), int(R)
        LL.append(L)
        RR.append(R)
        RC[R] += 1

    LL = sorted(LL)
    RR = sorted(RR)

    ans = 0
    for l,r in zip(LL,RR):
        ans += abs(l - r)
    print(f"Solution part 1: {ans}")

    ans2 = 0
    for l in LL:
        ans2 += l * RC.get(l, 0)

    print(f"Solution part 2: {ans2}")

if __name__ == "__main__":
    main()