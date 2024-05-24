```markdown
# String Sorting Program

This C program prompts the user to input multiple lines of data, sorts the lines in alphabetical order using the bubble sort algorithm, and then displays the sorted list.

## Features

- Prompts the user to enter data separated by newlines.
- Uses bubble sort to sort the entered strings alphabetically.
- Displays the sorted list of strings.

## How to Use

1. **Compile the program**:
    ```sh
    make
    ```

2. **Run the executable**:
    ```sh
    ./bs
    ```

3. **Enter your data**:
    - Type your data line by line.
    - Press Enter after each line.
    - To terminate the input, press Enter on an empty line.

4. **View the sorted output**:
    - The program will display the sorted list of strings.

## Example

**Input**:
```
Type your data separated by newline (end input with an empty line):
juliet
delta
oscar
kilo
bravo
hotel
november
lima
alpha
echo
mike
papa
gamma
india
foxtrot
kila
```

**Output**:
```
Sorted words:
alpha
bravo
delta
echo
foxtrot
gamma
hotel
india
juliet
kila
kilo
lima
mike
november
oscar
papa
```

## Code Explanation

### Main Function

- **Input Collection**: 
  - The program prompts the user to enter data.
  - It reads each line using `fgets` and stores it in a 2D array.
  - It stops reading when an empty line is entered.

- **Sorting**:
  - The `bubble_sort` function sorts the 2D array of strings using the bubble sort algorithm.

- **Output**:
  - The program prints the sorted list of strings.

### Bubble Sort Function

- **bubble_sort**: This function sorts an array of strings using the bubble sort algorithm.
  - It compares adjacent strings using `strcmp`.
  - It swaps them if they are in the wrong order using `strcpy`.

## Files

- `Bubblesort2D.c`: The main source file containing the program.

## Makefile

```makefile
bs:
	gcc Bubblesort2D.c -o bs

clean:
	rm -f bs
```

Use the following commands to compile and execute the program:

```sh
make
./bs
# add "< test.txt" to use test case
./bs < test.txt
```

## Author

Sangyun Kim