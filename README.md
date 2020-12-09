# 12F675-Development-board

This repository is for collecting the C programs that can be used with the PIC12F675 development board as seen in the picture above. 
When you buy this board, the only thing you normally get is the USB power supply cable
These C programs are listed in folder "CODE" and have been generated using the latest MPLAB X IDE with the XC8 Compiler (Dec 2020)

<img src="images/12f675 board.jpg" alt="Dev board"/>


# LIST OF PROGRAMS IN THIS REPOSITORY
 - Experiment_01_LED  
 - Experiment_02_Interupt 	 
 - Experiment_03_timer 	 	 
 - Experiment_04_ADC 


# HOW TO SETUP THE SOFTWARE AND CONNECT THE COMPONENTS
- On your PC, 
  - Download and install both the MPLAB X IDE and XC8 compiler from the MPLAB website (It is free) 
  - Plug in the USB power cable and connect it to your 12F675 development board (This cable is only used for powering the board) 
  - Plug in the USB cable of Pick-it" device and ensure the 6 leads of the "Pick-it" device are inserted correctly into the board (N.B. The pin marked VPP on the board should connect to the pin marked with a white triangle on the "Pick-it" device  

# HOW TO PROGRAM THE BOARD
- In this GITHUB repository
  - Look in folder "CODE" and decide which of the programs you want to program into your PIC12F675 e.g. "main_01_LED"
- On your PC, execute MPLAB X and:
  - Create a new standalone project for PIC12F675 naming it the same as the program you want to use e.g. "main_01_LED". As part of this process, you select the XC8 compiler and the "Pick-it" programming device that is a attached 
  - Highlight section called "Source Files"and right click to create a new "Main C" file. Use a name simliar to the project above e.g. "main_01_LED.c"  
  - Copy and paste the code into this new "Main" file and save it (The code comes from the Github Repository you looked at previously)
  - Press "Make and Program" to program the PIC using a Pickit 3 programmer
  - Enjoy your programmed device


# DEVELPMENT BOARD SCHEMATIC
<img src="BK300_Layout.jpg" alt="BK300 Layout"/>


# IMPORTANT POINTS
- The following item is not normally supplied with the development board. You will need purchase this to be able to program the pic
  - "Pickit 3" programmer not supplied - You need to purchase this separately. If you don't have this programmer, you cannot load anything into the pic 
 - There are 2 ways to supply regulated 5V to this dev board. (N.B. There is no power supply regulator onboard - a regulated 5v supply must be used)
   - via a USB (Mini USB cable type) connector. 
   - Via the "Pick it" Device 
 - The 


