import pandas as pd


def main():
    df = pd.read_csv("./AOC2024-01_input.py", sep="   ", engine='python')
    df.columns= ["left", "right"]
    dfc = df.copy()

    dfc.sort_values(by=['left'], ascending=True, inplace=True)
    df.sort_values(by=['right'], ascending=True, inplace=True)
    print(df)
    print(dfc)

    df['left'] = dfc['left'].values
    print(df)
    diff = 0
    for index, row in df.iterrows():
        diff += abs(row['left'] - row['right'])
    print(diff)


if __name__ == "__main__":
    main()