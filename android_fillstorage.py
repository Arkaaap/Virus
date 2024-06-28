import os

def fill_storage():
    with open('/path/to/dummyfile', 'w') as f:
        while True:
            f.write('0' * 10**6)  # Write 1MB at a time

if __name__ == "__main__":
    fill_storage()
