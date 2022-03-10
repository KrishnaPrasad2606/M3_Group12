# Introduction

Keyless remotes contain a short-range radio transmitter, 
and must be within a certain range, usually 5–20 meters, of the car to work. When a button is pushed, it sends a coded signal by radio waves to a receiver unit in
the car, which locks or unlocks the door.

# BiCom system
A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system. 
keyfob -> car (like a unidirectional RKE system) 
car -> keyfob (car status information for displaying on the keyfob by LED or display) 

Typical BiCom status information transmitted to the keyfob are: 
Print window status (Blue switch on- All led on at the same time)
Print alarm status - (Blue switch press two times- All led off at the same time
Print car battery info – (Blue switch press three times- All led on in clockwise manner)
Print Door status (Blue switch press four times- All led on in anti-clockwise manner)

# High level requirements
| ID  | High level requirements |
| ------------- | ------------- |
| HL1  |Transmitter is required to transmit RF signals from the key|
| HL2  |  Receiver is required to receive and verify the signal |
| HL3  | Print window status when blue switch on |
|HL4|Print car battery info when blue switch press three times|
|HL5|Print Door status when blue switch press four times|




## Low Level Requirements
| ID  | LOW level requirements |
| ------------- | ------------- |
| LL1  |All LEDs should turn ON at the same time when blue switch pressed once|
| LL2  | All LEDs should turn OFF at the same timewhen blue switch pressed twice  |
| LL3  | All LEDs should turn ON in clockwise manner when blue switch pressed thrice |
|LL4|All LEDs should turn ON in anticlockwise manner when blue switch pressed 4 times|


