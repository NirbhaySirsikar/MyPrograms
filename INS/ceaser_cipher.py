import string
from time import sleep

alphabet = string.ascii_lowercase

def encrypt(text,key):
    encrypt_message=""
    for c in text:
        if c in alphabet:
            position = alphabet.find(c)
            new_position = (position+key) % 26
            new_character = alphabet[new_position]
            encrypt_message += new_character
        else:
            encrypt_message  += c
    return encrypt_message
     
    

def decrypt(cipher,key):
    decrypt_message=""
    for c in cipher:
        if c in alphabet:
            position = alphabet.find(c)
            new_position = (position - key) % 26
            new_character = alphabet[new_position]
            decrypt_message += new_character
        else:
            decrypt_message  += c
    return decrypt_message

text = input("Enter the message: ")
s = int(input("shift number: "))
cipher = encrypt(text,s)
print("Encrypt text is ",cipher)
print("Decrypt cipher is",decrypt(cipher,s))