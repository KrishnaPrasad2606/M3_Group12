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




# Low Level Requirements
| ID  | LOW level requirements |
| ------------- | ------------- |
| LL1  |All LEDs should turn ON at the same time when blue switch pressed once|
| LL2  | All LEDs should turn OFF at the same timewhen blue switch pressed twice  |
| LL3  | All LEDs should turn ON in clockwise manner when blue switch pressed thrice |
|LL4|All LEDs should turn ON in anticlockwise manner when blue switch pressed 4 times|


# SWOT Analysis
![Screenshot (192)](https://user-images.githubusercontent.com/85895650/157807425-a6b9931d-a453-466f-b807-5ee8a653b552.png)





# 5W's and 1H

![WH web (1)](https://user-images.githubusercontent.com/98822676/157813140-936f89cd-ecd5-4b1a-bcdc-e1344a258116.jpg)



# Block Diagram
![Block Diagram](https://user-images.githubusercontent.com/85895650/157816126-ec0f762d-f9fc-41a5-bcf4-85ce547f84e9.png)


# Architecture
## Behavioural Diagram
#### High Level Flow Chart Behavioural Diagram
![high12](https://user-images.githubusercontent.com/85895650/157814346-a5916371-9b3a-4a0d-b05e-26b3c34d7cd7.png)

#### low Level Flow Chart Behavioural Diagram

![low2](https://user-images.githubusercontent.com/85895650/157803992-b1127440-981c-4d34-97d3-71e9f306a1e6.png)
## Structural Diagram
![SD](https://user-images.githubusercontent.com/85895650/157818939-19884117-d688-45bc-a130-655241850783.png)






# Applications
BiCom system has other applications such as 

1. Added convenience in opening and closing windows, sliding roofs, sliding doors and tailgates. 

2. An “emergency button” is integrated into the key for enhanced security. 

3. It triggers an acoustical and visual alarm from the vehicle at the push of a button.







