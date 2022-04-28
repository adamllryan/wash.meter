import serial
import tkinter as tk

s = serial.Serial('/dev/cu.usbserial-1330')

while (s.isOpen()):
    line = str(s.readline())
    runtime = line[2:line.index(' ')]
    last_runtime = line[line.index(' '):len(line) - 5]
    if runtime != '0':
        print("Runtime: ", runtime, "s Last: ", last_runtime, "s")
