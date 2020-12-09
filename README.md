# 12F675-Development-board

This repository is for collecting the C programs that can be used with the PIC12F675 development board as seen in the picture above. 
When you buy this board, the only thing you normally get is the USB power supply cable
These C programs are listed in folder "CODE" and have been generated using the latest MPLAB X IDE with the XC8 Compiler (Dec 2020)

<img src="images/12f675 board.jpg" alt="Dev board"/>


# List of programs in folder CODE
 - main_01_LED  
 - main_02_Interupt 	 
 - main_03_timer 	 	 
 - main_04_ADC 


# How to get setup with this board
- View Julian's excellent series of videos
  - PIC Assembly Language Tutorials: #0 - Shopping List & Mods
    - https://www.youtube.com/watch?v=p2rZwR9oM_k
  - PIC Assembly Language Tutorial: #1 - Config and Clock
    - https://www.youtube.com/watch?v=491StrMyqa4&t=1392s
  - PIC Assembly Language Update: #1.1 - PCB schematic
    - https://www.youtube.com/watch?v=TneWtGyar6M&t=192s
    
  - There is a fix that you need to do to the board, please cut the track and solder a wire as per follow 
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


# Development Board schematics
<img src="BK300_Layout.jpg" alt="BK300 Layout"/>


# Important points
- The following item is not normally supplied with the development board. You will need purchase this to be able to program the pic
  - "Pickit 3" programmer not supplied - You need to purchase this separately. If you don't have this programmer, you cannot load anything into the pic 
 - There are 2 ways to supply regulated 5V to this dev board. (N.B. There is no power supply regulator onboard - a regulated 5v supply must be used)
   - via a USB (Mini USB cable type) connector. 
   - Via the "Pick it" Device 



