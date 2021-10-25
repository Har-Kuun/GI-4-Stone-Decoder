# GI-4-Stone-Decoder
Automatically solving the 4-stone lighting puzzle in the Inazuma region in Genshin Impact

## How to compile
```
gcc 4-stone-decoder.c -o decoder
```

## How to use
Input the initial number of lights, separated by space, then press Enter.
Instructions to solve the puzzle will be shown.

See example below:
```
Please enter: 1 3 2 3


Please follow the sequence below:

Hit             Result
Initial         1 3 2 3
Stone 2         2 1 3 3
Stone 1         3 2 3 3
Stone 1         1 3 3 3
Stone 3         1 1 1 1

Total number of steps: 4
```

Please let me know if there are any problems.  Thank you.
