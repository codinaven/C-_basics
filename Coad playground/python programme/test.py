def is_armstrong_number(number):
    # Convert the number to a string to find its length (number of digits)
    num_str = str(number)
    num_digits = len(num_str)

    # Calculate the sum of digits each raised to the power of the number of digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)

    # Check if the sum is equal to the original number
    return armstrong_sum == number

# Get user input for the number to check
user_number = int(input("Enter a number to check for Armstrongness: "))

# Check if the number is an Armstrong number and print the result
if is_armstrong_number(user_number):
    print(f"{user_number} is an Armstrong number.")
else:
    print(f"{user_number} is not an Armstrong number.")
