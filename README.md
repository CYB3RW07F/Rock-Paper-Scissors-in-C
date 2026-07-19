# Rock, Paper, Scissors in C
A fun, simple Rock, Paper, Scissors game written in C. Challenge the CPU and see who wins!

## Features
* Classic Rock / Paper / Scissors gameplay
* Simple terminal-based interface
* Easy-to-read C code (made for learning + fun)

## How to Play
1. Build the C program.
2. Run the C program.
2. Enter your choice when prompted.
3. The computer makes a random choice.
4. The game announces the winner (or a tie) and you can play again.

_(Very complex, I know...)_

### Requirements
* A C compiler such as: gcc (recommended)

**Build**
```bash
gcc -o rps rps.c
```

**Run**
```bash
./rps
```

### Win Example
```
Rock(1), Paper(2), Scissors(3) or 0 to quit: 1
You: Rock | CPU: Scissors

Your Rock beats the CPU's Scissors, you win!
```

### Draw Example
```
Rock(1), Paper(2), Scissors(3) or 0 to quit: 2
You: Paper | CPU: Paper

You both have the same move, it's a draw!
```

### Lose Example
```
Rock(1), Paper(2), Scissors(3) or 0 to quit: 2
You: Paper | CPU: Scissors

Your Paper loses to the CPU's Scissors, you lose!
```

### Project Structure
* rps.c (main game source code)

### License

MIT License

This project is made for fun—feel free to improve it and submit suggestions or pull requests!

**Disclaimer** _No artificial intelligence (AI) was used in the creation of this Git project. All code and documentation were written manually by the project contributors._