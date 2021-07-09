boolD = True

def main(stringa):
    length = len(stringa)
    word = stringa
    answer = False
    x = 0
    while (answer == False and x < length):
        letter = word[x]
        position = x
        
        
        for y in range(0,len(word)):
            check = controlIfTheStringExistAfterThat(letter,word,position)
            if (check == True):
                answer = True
            newString = word[position+1:len(word)]
            checkIfTheLetterExist = newString.find(letter)
            if (checkIfTheLetterExist>-1 and position+1!=len(word)):#//FIXME: deve controllare anche le parole dietro quando serve altrimenti salta
                position = position+1
                letter = letter+word[position]
            else:
                break
        x+=1    
    print(answer)
    
def controlIfTheStringExistAfterThat(letter,word,positions):
    lentgh = len(letter)
    lentghSub1 = positions+lentgh-1
    lentghSub2 = positions+lentgh+lentgh-1
    sub1 = word[lentghSub1:lentghSub2]
    sub2 = word[lentghSub2:lentghSub2+lentgh-1]
    answer = False
    if (letter == sub1):
        answer = True
    if (letter == sub2 and letter == sub1 and sub1 == sub2):
        answer = False
    return answer


def checkIfIAmAtTheStartOfTheString(position):
    answer = False
    if (position == 0):
        answer = True
    return answer


def checkIfIAmAtTheEndOfTheString(position,word):
    answer = False
    if (position+1 == len(word)):
        answer = True
    return answer



if __name__ == "__main__":
    if boolD:
        print("START")
    
    string = "tutucopa"
    main(string)
    
    
    if boolD:
        print("STOP")