# 12F675-Development-board

This repository is for collecting programs written in "C" that can be used with the PIC12F675 development board as pictured below.
N.B. When you buy this board, you only get what you see inthe picture - the installed pic chip and a USB power supply cable that connects to this board via its barrel connector. To program this, you also need a "pickit 3" (see below for more information about this) 

<img src="images/12f675 board.jpg" alt="Dev board"/>


The Schematic for this board is as below. as well as a socket for the pic chip, it also has
 - Power switch      - This on/off power switch is connected to the barrel connector 
 - "Poweron" LED     - It is always on when power is applied to the board (annoyingly bright !!)
 - Two LEDS          - Linked via yellow jumpers to pins GP0, GP1
 - Three switches    - Linked via yellow jumpers to pins GP2, GP3, GP5
 - Variable resistor - Linked via yellow jumper  to pin  GP4  
 - ICSP pins         - White housing of 6 pins - used for the programming interface

N.B. If you remove a jumper, it disconnects the pic's GPIO pin from its associated LED/switch/variable resistor. This means you can connect any of the 6 exposed header pins to whatever you want via a standard female dupoint wire. 
N.B. The "VDD" and "Ground" pin twins are permanently connected by a track under the board - These jumpers are efectively spares and you can remove them with the now exposed header pins being availble for supplying 5V or 0V to whatever you want to connect them to

<img src="images/12f675 schematic.jpg" alt="Schematic"/>


If you want to program the board as per these examples, you will also need a "Pickit" device like the one you see below - make sure you buy one at the same time as you buy the Development board. N.B. The clones also seem to work. This device connects to your PC via a USB connector and to the board via the 6 pin jtag connector

<img src="images/pickit3.jpg" alt="Pickit 3"/>

# Other variants opf this pic with the same pinout (6 GPIO pins)
- 12F675  - internal clock of  4 MHz
- 12F683  - Internal clock of 16 MHz
- 12F1840 - 4K words and internal clock of 32 MHz


# List of programs in folder CODE
 - main_01_LED  
 - main_02_Interupt 	 
 - main_03_timer 	 	 
 - main_04_ADC 

# Other places to get information
 - GettingBlinky with assmebler
   - https://leap.tardate.com/pic/gettingblinky/
 - Watchdog info   
   - https://www.youtube.com/watch?v=tPUwuX4tHOw 


# How to get familiar with this board
- View Julian's excellent series of videos for a great intro to the board and also about a fix you should do - about cutting a track on the board and soldering a connecting wire in its place underneat hteh board
  - PIC Assembly Language Tutorials: #0 - Shopping List & Mods
    - https://www.youtube.com/watch?v=p2rZwR9oM_k
  - PIC Assembly Language Tutorial: #1 - Config and Clock
    - https://www.youtube.com/watch?v=491StrMyqa4&t=1392s
  - PIC Assembly Language Update: #1.1 - PCB schematic
    - https://www.youtube.com/watch?v=TneWtGyar6M&t=192s

# How to set up and install the software and componenets
The above videos cover this - alternatively, follow the steps below
- On your PC, 
  - Download and install both the MPLAB X IDE and XC8 compiler from the MPLAB website (It is free) 
  - Plug in the USB power cable and connect it to your 12F675 development board (This cable is only used for powering the board) 
  - Plug in the USB cable of Pick-it" device and ensure the 6 leads of the "Pick-it" device are inserted correctly into the board (N.B. The pin marked VPP on the board should connect to the pin marked with a white triangle on the "Pick-it" device  

# How to Program the pic12f675 using the development board
- Ensure you are setup as per the previous section
- In this GITHUB repository
  - Look in folder "CODE" and decide which of the programs you want to program into your PIC12F675 e.g. "main_01_LED"
- On your PC, execute MPLAB X and:
  - Create a new standalone project for PIC12F675 naming it the same as the program you want to use e.g. "main_01_LED". As part of this process, you select the XC8 compiler and the "Pick-it" programming device that is a attached 
  - Highlight section called "Source Files"and right click to create a new "Main C" file. Use a name simliar to the project above e.g. "main_01_LED.c"  
  - Copy and paste the code into this new "Main" file and save it (The code comes from the Github Repository you looked at previously)
  - Press "Make and Program" to program the PIC using a Pickit 3 programmer
  - Enjoy your programmed device



# Important points
- The following item is not normally supplied with the development board. You will need purchase this to be able to program the pic
  - "Pickit 3" programmer not supplied - You need to purchase this separately. If you don't have this programmer, you cannot load anything into the pic 
 - There are 2 ways to supply regulated 5V to this dev board. (N.B. There is no power supply regulator onboard - a regulated 5v supply must be used)
   - via a USB (Mini USB cable type) connector. 
   - Via the "Pick it" Device 



