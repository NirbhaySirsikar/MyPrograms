import string
string1 = '!Hi ho$w i!s yo[ur] da@(y.'
print("String before removing punctuations:")
print(string1)
print("String after removing punctuations:")
for character in string.punctuation:
    string1= string1.replace(character, '')
print(string1)