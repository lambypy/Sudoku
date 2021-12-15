# Sudoku Solver 🧩

Over the past few years, I have occasionally played Sudoku, whether it is through local newspapers or online. Repetition allowed me to complete medium puzzles in a quick time, and knowledge of patterns and techniques pushed me into completing hard puzzles. You can find a [link](https://www.nytimes.com/puzzles/sudoku/easy) here for daily puzzles to complete

> Our whole life is solving puzzles - Erno Rubik

I find this quote to be interesting, as even the most simple task can be conceived as a puzzle. Yet repetition and basic understanding helps complete these tasks without much thought.

This, was essentially my challenge for Sudoku puzzles. Logically, searching for more puzzles led me to some websites for user-generated sudoku puzzles. It was often difficult to know if these were actually solvable.
Take this example below, how do we know that the Sudoku puzzle is solveable?


<img src="https://user-images.githubusercontent.com/59411811/143574982-8458f39c-4582-438e-9653-b3b1fb0af3db.png" width="400" height="400">

Unfortunately, there is no way of knowing that the user-generated Sudoku puzzles are valid before playing them. Of course, most websites will check the puzzles before accepting them, but for some websites this is not the case.

So, today I decided to build a Sudoku solver to let me know if these puzzles are actually solvable before playing them. The code actually prints out the full Sudoku solution, but an added option allows for it to just let you know if it is solvable without ruining the fun. 

This was created in C++, for the simple fact that I recently started learning C++ and wanted to improve. 

## Features:
- Allows the user to type in a Sudoku puzzle to see if it is valid or not.
- Returns the completed puzzle, output explaining the puzzle is invalid or output saying the puzzle can be completed depending on the options chosen by the user.

## Challenges:
- This was one of the first projects I created with C++, although being very familiar with Python and OOP in general, adjusting the code to C++ was challenging in some areas.

## Upcoming changes:
[] Option for the completed puzzle to return all the possible valid solutions.

[] An easier interface for users to type in the Sudoku puzzle to be tested.

## Languages and tools used:
Created with C++

------------------------------------------
#### Date project started: 7th July 2021
#### Date project finished: 10th July 2021 
