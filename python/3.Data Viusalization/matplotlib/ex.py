def chinese_zodiac(year):
    animals = ['Rat', 'Ox', 'Tiger', 'Rabbit', 'Dragon', 'Snake', 'Horse', 'Goat', 'Monkey', 'Rooster', 'Dog', 'Pig']
    elements = ['Wood', 'Fire', 'Earth', 'Metal', 'Water']

    year_init = 1984
    tmp = year - year_init
    animalidx = tmp
    elementsidx = int(tmp /2)
    if(abs(animalidx) > 11):
        animalidx = int(animalidx % 12)

    if(abs(elementsidx) >  4):
        elementsidx = int(elementsidx % 5)

    if(animalidx < 0 ):
        animalidx += 12

    if(elementsidx < 0):
        elementsidx += 5

    print('%s %s' %(elements[elementsidx], animals[animalidx]))
    return

if __name__ == '__main__':
    chinese_zodiac(2016)