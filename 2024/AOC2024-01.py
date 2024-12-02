import pandas as pd


def main():
    df = open("./AOC2024-01_input.py").read().strip()
    lines = df.split('\n')
    
    LL = []
    RR = []

    for line in lines:
        L,R = line.split()
        L,R = int(L), int(R)
        LL.append(L)
        RR.append(R)

    LL = sorted(LL)
    RR = sorted(RR)

    ans = 0
    for l,r in zip(LL,RR):
        ans += abs(l - r)

    print(ans)

if __name__ == "__main__":
    main()