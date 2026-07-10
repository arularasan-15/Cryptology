register = [1, 0, 1, 1]
n = 10
print("Linear Feedback Shift Register")
print("------------------------------")
for i in range(n):
    feedback = register[0] ^ register[3]   # XOR of first and last bits
    output = register[-1]                  # Output bit
    register = [feedback] + register[:-1]  # Shift right and insert feedback
    print("Step", i + 1)
    print("Feedback =", feedback)
    print("Output =", output)
    print("Register =", register)
    print()
