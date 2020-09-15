def getFactors(number):
    divisor = 2
    while number%divisor != 0:
        divisor += 1
        if divisor > number/2:
            print(number)
            #If prime, return a single number
            return [number]
    return [divisor, number//divisor]

primeFactors = []

input = 600851475143
factors = getFactors(input)
while len(factors) > 0:
    newFactors = []
    for factor in factors:
        firstNumbers = getFactors(factor)
        if len(firstNumbers) == 1:
            #If is prime
            primeFactors.append(firstNumbers[0])
        else:
            #Else we need to break down the new factors into prime factors
            newFactors.append(firstNumbers[0])
            newFactors.append(firstNumbers[1])
    factors = newFactors
print(max(primeFactors))