# The C Programming Language — Kawaii Remix 🌸

A playful, personal remake of *The C Programming Language, 2nd Edition*—reworked with Nyxie Lucy's understanding and decorated with cute anime illustrations.

> This repository is a learning companion and a creative study project, not an official copy or replacement of the original book.

## About

This project combines C programming lessons with:

- Friendly explanations written from a learner's perspective
- Cute anime-inspired artwork
- Small C examples for hands-on practice
- The chapters and concepts that Nyxie is learning along the way

## Repository Contents

| File | Description |
| --- | --- |
| `C PROGRAMMING LANGUAGE NYXIE REMAKE.pdf` | The colorful PDF remake of the C programming language notes/book |
| `loops.c` | An example using a `do...while` loop |
| `halo` | A compiled ELF executable produced from C source |

## The PDF

Open [`C PROGRAMMING LANGUAGE NYXIE REMAKE.pdf`](C%20PROGRAMMING%20LANGUAGE%20NYXIE%20REMAKE.pdf) to read the remix.

## Compile the Examples

The C examples can be compiled with GCC:

```bash
gcc loops.c -o loops
```

Run the program:

```bash
./loops
```

For a stricter build with common warnings enabled:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 loops.c -o loops
```

## Learning Topics

Planned and in-progress areas include:

- Introduction to C
- Variables and data types
- Operators
- Conditional statements
- Loops
- Functions
- Arrays and pointers
- Structures
- Input and output

## Contributing

Ideas, corrections, and C learning resources are welcome. Please open an issue or submit a pull request with a clear description of your change.

## Credits and Note

Created by [NyxieLucy](https://github.com/NyxieLucy).

This project is inspired by *The C Programming Language* by Brian W. Kernighan and Dennis M. Ritchie. It is an independent study/remix and is not affiliated with or endorsed by the original authors or publisher.
