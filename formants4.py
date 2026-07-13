#Formant Calculator (Python Practice) 7.12.2026
import sys
import math

print("***_Formant Calculator_***")
print()

def get_formants():
                
    print("Base Frequency?")
    print()
            
   
    while True:
        x = input()
        try:
            x = float(x)
            break
        except ValueError:
            print("Input must be a number!")
            continue
       
    while True:       
        try:
            print("How many Formants?")
            y = input()
            y = int(y)
            if y <= 0 or y > 50:
                print("Must be a value between 1 and 50.")
                continue
            break
        
        except ValueError:
            print("Input must be a number!")
            print()
            continue    
    
    
    while True:                      
        if y < 51 and y != 0:
            for i in range(y):
                j = (abs(x) * (i+1))
                print(j)
                               
            while True:
                print()
                print("Would you like to calculate from another base frequency? (Yes or No)")
                z = str(input().lower())
                if z == "yes":
                    print()
                    get_formants()
                if z == "no":
                    print()
                    print("Goodbye!")
                    sys.exit()
                    
                if z != "yes" or "no":
                    print()
                    print("Another calculation? (Yes or No)\n")
                    continue

try:
    get_formants()

            
except KeyboardInterrupt:
    print("Exiting - Goodbye!")
