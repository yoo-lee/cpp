#!/usr/local/bin/python3
import random

nums = random.sample(range(1, 3006), 5)
num_str = ' '.join(map(str, nums))
print(num_str)
