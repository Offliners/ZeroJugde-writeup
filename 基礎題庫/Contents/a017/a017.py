import sys

for formula in sys.stdin:
    try:
        formula = formula.replace("/", "//")

        print(eval(formula))
    except:
        continue
