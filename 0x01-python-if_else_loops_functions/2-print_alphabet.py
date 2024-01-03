#!/usr/bin/python3
"""Print the alphabet in lowercase, not followed by a new line."""

# Solution: use the chr() function to convert ASCII values to characters
# use the range() function to generate ASCII values from 97 to 123 (lowercase alphabets)
# use the join() method to concatenate the characters into a string
# use the end parameter to avoid a new line in the print function

print("".join(chr(i) for i in range(97, 123)), end="")
