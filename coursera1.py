def max_pairwise_product(numbers):
    # Sort the list of numbers in descending order
    sorted_numbers = sorted(numbers, reverse=True)
    
    # Multiply the two largest numbers in the sorted list
    max_product = sorted_numbers[0] * sorted_numbers[1]
    
    return max_product

# Example usage:
numbers = [3, 5, 2, 7, 1, 8, 4]
result = max_pairwise_product(numbers)
print("Maximum Pairwise Product:", result)
