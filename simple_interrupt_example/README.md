# Simple interrupt example
This example can be used to understand and test interrupt pin functionality in arduino. 
# Hardware and connections
An arduino and a jumper wire is all that you need. No need of using LEDs or buttons. 
Connect pin 4 to pin 7 via jumber wire.
# How it works
Upload code to arduino and start serial monitor with baud rate 115200. 
Send serial command 'q' to set signal pin high. This should interrupt arduino and print "ext high" on serial moniter and will also turn led ON the arduino LED.
Send serial command 'a' to set signal pin low. This should interrupt arduino and print "ext low" on serial moniter and will also turn led OFF the arduino LED.
# Use case
This code can be modified to interrupt arduino by signal coming from external device
