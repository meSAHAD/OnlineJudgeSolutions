input_line = input().strip()

letters_with_commas = input_line[1:-1].strip()

if not letters_with_commas:
    print(0)
else:
    letters = letters_with_commas.split(', ')
    distinct_letters = set(letters)
    print(len(distinct_letters))
