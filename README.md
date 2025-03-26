# Countdown Timer in C

This project is a simple **countdown timer** implemented in C. It demonstrates real-time output in the terminal, updating every second until the countdown reaches zero.

## Learning Objectives
This project helps in understanding:
- **Time calculations** (hours, minutes, seconds conversion)
- **Looping with real-time updates** using `sleep(1)`
- **Efficient console output** with `printf("\r...")` to overwrite the same line
- **Basic program structure in C**

## Features
- Displays a countdown in **HH:MM:SS format**
- **Uses `sleep(1)`** to create a real-time effect
- **Clears and updates the time on the same line**
- Ensures proper formatting of time with leading zeros

## How It Works
1. **Initialize a countdown value** in seconds.
2. **Convert it** into hours, minutes, and seconds.
3. **Loop until zero:**
   - Print the remaining time on the same line.
   - Wait one second using `sleep(1)`.
   - Decrease the countdown.
4. **Display "Time ended!"** when the countdown reaches zero.

## Compilation & Usage
### Compile:
```bash
gcc craft.c -o start.exe
```

### Run:
```bash
./start.exe
```

## Example Output
```
Duration: 00:01:10

Time left: 00:01:10 
Time left: 00:01:09 
...
Time left: 00:00:01 
Time left: 00:00:00 
Time ended!
```

## Teaching & Learning Extensions
- **Experiment with time inputs:** Modify `countdown` to different values and observe behavior.
- **Use `scanf` to take user input** for countdown duration.
- **Introduce pause/resume functionality** using keyboard input.
- **Extend it into a stopwatch** by counting **up** instead of down.
- **Implement with threads**: Learn how to manage multiple tasks by running the countdown in a separate thread.

## Future Improvements
- Allow user input for countdown duration.
- Add an option to pause/resume.
- Implement a graphical version using a simple GUI library.

---
This project is a great way to learn real-time programming concepts in C!

