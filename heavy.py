def heavy_computation():
    while True:
        [x**2 for x in range(10**6)]

if __name__ == "__main__":
    heavy_computation()
