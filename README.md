# Piscine 42

This repository contains my exercises and solutions from the **42 Piscine** (the school's intensive introductory coding bootcamp), along with the **Piscine Reloaded** track from the same school.

Everything here was written in C and Shell, following 42's peer-learning methodology: no lectures, no teachers — just subjects, a terminal, and the Norm.

## Structure

The repo is organized by module. Each module folder contains numbered exercise folders (`ex00`, `ex01`, ...), and each exercise contains its own source file(s), and sometimes a `Makefile`.

| Folder | Topic |
|---|---|
| `C00` | Basic I/O, loops, recursion basics (`ft_putchar`, `ft_print_alphabet`, combinations, etc.) |
| `C01` | Pointers and arrays (`ft_ft`, `ft_swap`, `ft_div_mod`, `ft_sort_int_tab`, etc.) |
| `C02` | String manipulation basics (`ft_strcpy`, `ft_str_is_alpha`, `ft_strlowcase`, etc.) |
| `C03` | More string functions (`ft_strcmp`, `ft_strcat`, `ft_strstr`, `ft_strlcat`, etc.) |
| `C04` | Numeric conversions and output (`ft_putnbr`, `ft_atoi`, etc.) |
| `C05` | Recursion and math (`ft_factorial`, `ft_power`, `ft_fibonacci`, `ft_is_prime`, etc.) |
| `C06` | Program arguments (`argc`/`argv`) (`ft_print_params`, `ft_rev_params`, `ft_sort_params`) |
| `C07` | Variadic functions (`ft_strdup`, `ft_range`, `ft_strjoin`, etc.) |
| `C08` | Structs and headers (`ft_point`, `ft_boolean`, `ft_stock_str`, etc.) |
| `C09` | Building a mini libft (multiple sources + headers, compiled via `Makefile`) |
| `C10` | Function pointers / small programs with `Makefile` + test binaries |
| `Shell00` | Introductory shell scripting exercises |
| `Shell01` | More advanced shell scripting exercises |
| `C-Reload_1` | Piscine Reloaded — a second, expanded pass over the C fundamentals (28 exercises) |
| `Excercises` | PDF subjects for reference |

## Piscine vs. Piscine Reloaded

- **Piscine** (`C00`–`C10`, `Shell00`–`Shell01`): the original bootcamp track.
- **Piscine Reloaded** (`C-Reload_1`): a follow-up/refresher track covering similar C fundamentals in more depth, done afterward.

## Building and running

Most exercises are single `.c` files without a `Makefile`. Compile them directly with the 42 Norm-compliant flags:

```bash
gcc -Wall -Wextra -Werror ft_something.c -o ft_something
./ft_something
```

Some exercises (e.g. `C09/ex01`, `C10/*`, parts of `C-Reload_1`) include their own `Makefile`. For those:

```bash
cd path/to/exercise
make
./<binary_name>
```

## About the Piscine

The 42 Piscine is a full-time, peer-to-peer coding bootcamp with no teachers or lectures. Learning happens through subjects, documentation, peers, and trial and error, with projects evaluated by fellow students. The exercises here reflect that process — solutions were written under time pressure and iterated on as understanding improved, so style and approach may vary between earlier and later modules.

## Disclaimer

These are my personal solutions, shared for learning and portfolio purposes. If you're currently doing the 42 Piscine yourself, I'd encourage you to work through the subjects on your own before looking here — that struggle is most of the point.
