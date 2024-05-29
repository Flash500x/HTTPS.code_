import string
import random
def shuffling_process():
    global s1
    global s2
    global s3
    global s4
    s1 = list(string.ascii_lowercase)
    s2 = list(string.ascii_uppercase)
    s3 = list(string.digits)
    s4 = list(string.punctuation)
    random.shuffle(s1)
    random.shuffle(s2)
    random.shuffle(s3)
    random.shuffle(s4)
def input_character_count():
    global user_input
    user_input = int(input('Enter number of characters'))
    while(True):
        try:
            char_number = user_input
            if char_number<8:
                print('retry')
                user_input = int(input('Enter again'))
            else:
                break
        except:
            print('Retry')
            user_input = int(input('Enter again'))
    shuffling_process()
    password_generation()
    password_display()
def password_generation():
    global result
    part_1 = round(user_input*(20/100))
    part_2 = round(user_input*(30/100))
    result = []
    for key in range(part_1):
        result.append(s1[key])
        result.append(s2[key])
    for key in range(part_2):
        result.append(s3[key])
        result.append(s4[key])
    random.shuffle(result)
def password_display():
    passord_generated = ''.join(result)
    print('the generated password is: ', passord_generated)


print('Password generator')
input_character_count()

