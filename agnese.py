boolD = True

def main(stringa):
    length = len(stringa)
    word = stringa
    answer = False
    x = 0
    while (answer == False and x < length):
        letter = word[x]
        position = x
        originPosition = x
        for y in range(0,len(word)):
            check = controlIfTheStringExistAfterThat(letter,word,position,originPosition)
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
    
def controlIfTheStringExistAfterThat(letter,word,positions,originPosition):
    lentgh = len(letter)
    lentghSub1 = positions+lentgh -1
    lentghSub0 = ""
    sub0 = ""
    lentghSub2 = positions+lentgh+lentgh -1
    existElement = checkIfTheElementExist(letter,word,originPosition)

    if (lentgh == 1):
        lentghSub1 = positions+lentgh 
        lentghSub2 = positions+lentgh+lentgh  
    if (existElement):
        lentghSub0 = originPosition - lentgh
        sub0 = word[lentghSub0:originPosition]
    sub1 = word[lentghSub1:lentghSub2]
    sub2 = word[lentghSub2:lentghSub2+lentgh]
    answer = False
    if (letter == sub1 and sub1 != sub2 and letter != sub0 ):
        answer = True
    if (letter == sub2 and letter == sub1 and sub1 == sub2):
        answer = False
    if (answer == True):
        print(letter+letter)
    return answer


def checkIfTheElementExist(letter,word,positions):
    lentgh = len(letter)
    risp = False
    if (positions - lentgh >= 0):
        risp = True
    return risp




if __name__ == "__main__":
    if boolD:
        print("START")
    #canecane
    string = "piupiu"
    main(string)
    
    
    if boolD:
        print("STOP")