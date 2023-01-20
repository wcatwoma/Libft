Libft

Your very first own library

Summary: This project aims to code a C library regrouping usual functions that you’ll
be allowed to use in all your other projects.

Contents
I Introduction 2
II Common Instructions 3
III Mandatory part 5
III.1 Technical considerations . . . . . . . . . . . . . . . . . . . . . . . . . . 5
III.2 Part 1 - Libc functions . . . . . . . . . . . . . . . . . . . . . . . . . . 6
III.3 Part 2 - Additional functions . . . . . . . . . . . . . . . . . . . . . . . 7
IV Bonus part 11

Chapter I

Introduction

C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project allows you to re-write those functions, understand them,
and learn to use them. This library will help you with all your future C projects.
Take the time to expand your libft throughout the year. But always, make sure to
check which functions are allowed !

Chapter II
Common Instructions
• Your project must be written following the Norm. If you have bonus files/functions,
they are included in the norm check and you will receive a 0 if there is a norm error
inside.
• Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, your project will be
considered non functional and will receive a 0 during the evaluation. Even if it’s a
bonus file/feature.
• All heap-allocated memory space must be properly freed when necessary. No leaks
will be tolerated.
• If the subject requires it, you must submit a Makefile which will compile your
source files to the required output with the flags -Wall, -Wextra and -Werror, and
your Makefile must not relink. Wildcards are forbidden and @ silent prefixes are
forbidden. If you want some fancy Make then add a rule for it.
• Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
re.
• To turn in bonuses to your project, you must include a rule bonus to your Makefile,
which will add all the various headers, libraries, or functions that are forbidden on
the main part of the project. If there’s no indications, Bonuses must be in a different
file _bonus.{c/h}. Mandatory and bonus part evaluation is done separately.
• If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.
• We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defense. Indeed, during defense, you are free to use your tests
and/or the tests of the peer you are evaluating.
• Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done
after your peer evaluations. If an error happens in any section of your work during
Deepthought’s grading, the evaluation will stop.
