# This repository is my CPP workplace.

## How to use g++:
Compile one cpp file:

```bash
g++ input.cpp -o output
```

Comiple couple files to a output file:

```bash
g++ input1.cpp input2.cpp -o output
```

## About tmux:
Common detailed command: [ClickMe](https://www.cnblogs.com/lizhang4/p/7325086.html)
Common commands:

### in bash
```bash
tmux [new -s SessName -n WinName]	# start a new seesion 
tmux a					# retrieve the last session
tmux at [-t SessName]			# retrieve aimed session
tmux ls					# list all the tmux sessions
tmux kill-session -t SessName
```
### in tmux
```bash
tmux d					# detach the present session
```
### in tmux after push ctrl+b on keyboard
### sessions:
```bash
d					# detach the present session
:new					# start a new session
s					# list all the tmux sessions
```
### windows:
```bash
c					# start a new win
w					# list all the wins
%					# horizontally segment
"					# vertically segment
```
