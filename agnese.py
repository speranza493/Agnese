boolD = True

def main(stringa):
    """Questa funzione ha il compito di ciclare tutte le lettera della parola passata come input
    in modo che la funcione controlIfTheStringExistAfterThat possa elaborare con piu facilita
    e funzionare correttamente 

    Args:
        stringa ([string]): [la parola presa di riferimento]
    """
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
            if (checkIfTheLetterExist>-1 and position+1!=len(word)):
                position = position+1
                letter = letter+word[position]
            else:
                break
        x+=1    
    print(str(answer)+"\n")
    
def controlIfTheStringExistAfterThat(letter,word,positions,originPosition):
    """Questa funzione controlla se dopo l'elemento dato come input ne esiste un altro uguale dopo. 
    Ma solo doppio non triplo altrimenti otornera false

    Args:
        letter ([string]): [le lettere di partenze puo essere formata da una singola lettera o da piu]
        word ([string]): [la parola intera di partenza]
        positions ([string]): [la posizione fisica dell'ultimo elemento di letter all'interno della parola]
        originPosition ([string]): [la parola della lettera iniziale]

    Returns:
        [boolean]: [ritorna una risposta se la lettera passata come input ha dei doppi dopo]
    """
    lentgh = len(letter)
    lentghSub1 = positions +1
    lentghSub0 = ""
    sub0 = ""
    lentghSub2 = positions+lentgh +1
    existElement = checkIfTheElementExist(letter,originPosition)

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
        print("\ncaso di doppie: "+ letter)
    return answer


def checkIfTheElementExist(letter,positions):
    """Questa funzione ha il compito di controllare se il programma contine lettere da poter
    analizzare prima di quella che sto controllando. Se ad esempio nella parola "mmm", io sto analizzando 
    la m centrale, questa funzione controllera se è possibile prendere la m dietro o se ce ne sono troppe poche lettere
    per farlo

    Args:
        letter ([string]): [la stringa di lettere presa di riferimento per la ricerca]
        positions ([string]): [la posiozne della prima lettera di letter all'interno della posiozne letter]

    Returns:
        [boolean]: [risultato se in quella stringa è possibile anallizare anche le lettere dietro e non solo quelle da davanti]
    """
    lentgh = len(letter)
    risp = False
    if (positions - lentgh >= 0):
        risp = True
    return risp




if __name__ == "__main__":
    if boolD:
        print("\nSTART")
    #canecane
    string = "dddd"
    main(string)
    
    
    if boolD:
        print("STOP\n")