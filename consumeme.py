import os

def consume_memory():
    try:
        # Continuously allocate large amounts of memory
        data = []
        while True:
            data.append(' ' * 10**6)  # Allocate 1MB chunks
    except MemoryError:
        pass

if __name__ == "__main__":
    consume_memory()
