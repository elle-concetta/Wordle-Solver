## Wordle Solver
A multi-threaded word search puzzle solver that uses low-level I/O to read the file containing the puzzle table.

## Terminal Commands
```
./solve -dict dict.txt -input puzzle100by100.txt -len 6:14 -size 100 -nbuffer 4
```

```
./solve -dict dict.txt -input puzzle1001by1001.txt -len 7:9 -size 1001 -nbuffer 1
```

```
./solve -dict dict.txt -input puzzle1001by1001.txt -len 7:9 -size 1001 -nbuffer 4 -s
```

```
./solve -dict dict.txt -input puzzle100mb.txt -len 8:8 -size 10000 -nbuffer 16 -s
```

```
./solve -dict dict.txt -input puzzle100mb.txt -len 8:9 -size 10000 -nbuffer 64
```
