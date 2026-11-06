# Configurable Logging and Debugging System Using C Preprocessor Directives

## Project Overview
This project implements a configurable logging and debugging system using C preprocessor directives. It helps developers display different types of log messages based on the selected logging level.

## Features
- INFO logging – Displays general program information.
- DEBUG logging – Displays debugging information with filename and line number.
- WARNING logging – Displays warning messages.
- ERROR logging – Displays error messages with filename and line number.
- Configurable logging levels using `#define`.
- Conditional compilation using `#if`, `#else`, and `#endif`.
- Variable arguments for formatted log messages.
- Timestamp generation.
- Saves log messages into a text file (`log.txt`).

## Logging Levels

| LOG_LEVEL | Enabled Messages |
|---|---|
| 1 | ERROR |
| 2 | ERROR, WARNING |
| 3 | ERROR, WARNING, INFO |
| 4 | ERROR, WARNING, INFO, DEBUG |

## Technologies Used
- Programming Language: C
- Preprocessor Directives
- GCC Compiler
- Ubuntu Linux

## Project Files
- `main.c` – Main program.
- `log_config.h` – Logging level configuration.
- `log_info.h` – INFO logging.
- `log_debug.h` – DEBUG logging.
- `log_warning.h` – WARNING logging.
- `log_error.h` – ERROR logging.
- `timer.h` – Timestamp generation.
- `log_file.h` – File logging.

## Compilation and Execution

Compile the program:

```bash
gcc -Wall -Wextra main.c -o main
```

Run the executable:

```bash
./main
```

## Output
The program displays log messages on the terminal and saves the messages into `log.txt`.

## Learning Outcomes
- Understanding C preprocessor directives.
- Implementing conditional compilation.
- Creating configurable logging levels.
- Using macros with variable arguments.
- Working with timestamps and file handling.

## Author
Ishwari Sampatakumar Bilagi
