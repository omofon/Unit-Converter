# Unit Converter

A simple command-line unit converter written in C that supports temperature, currency, and mass conversions.

## Features

- **Temperature Conversion**: Fahrenheit to Celsius and vice versa
- **Currency Conversion**: USD to Euro, Canadian Dollar, and Nigerian Naira
- **Mass Conversion**: Ounces to Pounds and Grams to Pounds
- **Interactive Menu**: Easy-to-use menu-driven interface
- **Multiple Categories**: Three main conversion categories

## Supported Conversions

### Temperature (T)
- Fahrenheit to Celsius
- Celsius to Fahrenheit

### Currency (C)
- USD to Euro (rate: 0.87)
- USD to Canadian Dollar (rate: 1.19)
- USD to Nigerian Naira (rate: 1500)

### Mass (M)
- Ounces to Pounds (rate: 0.0625)
- Grams to Pounds (rate: 0.00220462)

## How to Use

1. **Compile the program:**
   ```bash
   gcc unit_converter.c -o unit_converter
   ```

2. **Run the program:**
   ```bash
   ./unit_converter
   ```

3. **Follow the prompts:**
   - Enter the category letter: T (Temperature), C (Currency), or M (Mass)
   - Select the specific conversion option
   - Enter the value to convert
   - View the converted result

## Usage Examples

### Temperature Conversion
```
Category: T
Choice: 1 (Fahrenheit to Celsius)
Input: 100
Output: Celsius: 37
```

### Currency Conversion
```
Category: C
Choice: 1 (USD to Euro)
Input: $100
Output: Euro: 87.00
```

### Mass Conversion
```
Category: M
Choice: 1 (Ounces to Pounds)
Input: 16
Output: Pounds: 1.00
```

## Program Structure

The program uses a simple if-else structure to handle different categories:
1. User selects main category (T/C/M)
2. Program displays available conversions for that category
3. User selects specific conversion type
4. User inputs value to convert
5. Program calculates and displays result

## Input Requirements

- Category selection: Single character (T, C, or M)
- Conversion choice: Integer (1, 2, or 3 depending on category)
- Values to convert: Integer values

## Error Handling

- Invalid category selection shows error message
- Invalid conversion choices within categories show error messages
- Program exits gracefully on invalid input

## Technical Notes

- Uses integer arithmetic for input values
- Currency and mass results displayed with 2 decimal places
- Temperature results displayed as integers
- Exchange rates and conversion factors are hardcoded

## Requirements

- C compiler (GCC recommended)
- Standard C libraries: `stdio.h`
- Console/terminal environment

## Limitations

- Currency exchange rates are fixed and may not reflect current market rates
- Limited to predefined conversion types
- Integer input only (no decimal input support)
- Single conversion per program execution

## Future Enhancements

Potential improvements could include:
- Real-time currency exchange rates
- Decimal input support
- More conversion categories
- Reverse conversions
- Loop for multiple conversions in one session
