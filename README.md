# 12F675-Development-board

This repository is for collecting the C programs that can be used with the PIC12F675 development board as seen in the picture above. 
When you buy this board, the only thing you normally get is the USB power supply cable
These C programs are listed in folder "CODE" and have been generated using the latest MPLAB X IDE with the XC8 Compiler (Dec 2020)

<img src="images/12f675 board.jpg" alt="Dev board"/>



To use any of the programs, all you have to do is the following: 

SETUP
- On your PC, 
 - Download and install both the MPLAB X IDE and XC8 compiler from the MPLAB website (It is free) 
 - Plug in the USB power cable and connect it to your 12F675 development board (This cable is only used for powering the board) 
 - Plug in the USB cable of Pick-it" device and ensure the 6 leads of the "Pick-it" device are inserted correctly into the board (N.B. The pin marked VPP on the board should connect the pin marked with a triangle on the "Pick-it" device  

PROGRAMMING
- In this GITHUB repository
  - Look in folder "CODE" and decide which of the programs you want to program into your PIC12F675 e.g. "main_01_LED"
- On your PC
  - Execute MPLAB X and create a new standalone project for PIC12F675 naming it the same as the program you want to use e.g. "main_01_LED". As part of this process, you select the XC8 compiler and the "Pick-it" programming device that is a attached 
  - Using MPLAB X while focussed on the new project, right click on the section "Source Files" and create a new "Main C" file naming it the simliar to the project above e.g. "main_01_LED.c"  
  - Copy the code from the selected program (e.g. from "main_01_LED"), paste it into this new file and save it
  - Press "Make and Program" to program the PIC using a Pickit 3 programmer
  - Enjoy your programmed device

N.B. The original programs are in folder "BK300_original_code" and are as follows
 - Experiment_01_LED  
 - Experiment_02_Interupt 	 
 - Experiment_03_timer 	 	 
 - Experiment_04_ADC 

# Layout of Components
<img src="BK300_Layout.jpg" alt="BK300 Layout"/>


# Schematic Diagram
<img src="BK300_Circuit_Diagram.jpg" alt="BK300 Schematics"/>

# Important points
- The following 6 items are not normally supplied with the development board. You will need to obtain the following so you can use the associated software
  - "Pickit 3" programmer not supplied - You need to purchase this separately. If you don't have this programmer, you cannot load anything into the pic 
 - There are 2 ways to supply regulated 5V to this dev board. (N.B. There is no power supply regulator onboard - a regulated 5v supply must be used)
   - via a USB (Mini USB cable type) connector. 
   - Via the "Pick it" Device 
 - The 


