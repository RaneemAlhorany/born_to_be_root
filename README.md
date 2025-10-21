# born_to_be_root
it is a 42 project

before do all the steps bellow you should study the files from 01 t 0

steps how to solve mandatory part using debian

setp 1: Virtual Machine Setup - Installing VirtualBox and setting up your VM

     1) download the os (ISO File) 
        $ https://www.debian.org/distrib/ (Debian)
        
     2) download the virtualBox 
        $ https://www.virtualbox.org/
        
    ^ 3) open the virtualBox to Create the Virtual Machine
        # open virtualBox application
          
          ![p1](https://github.com/user-attachments/assets/4f1ce6e7-99fa-4ac9-958b-8d8edef64340)

            % click on new button to create new virtual machine (VM)
            % enter info to create virtual machine (VM) : 
                   ? Name  + folder (location) + Type + version
                    ! note for location : the space you need 5GB  so you can 
                        ~ put the project inside 2 folder just (goinfre or sgonifre)
                        ?  sgonifre is bigger size than goinfre 
                    ! note for type : (linux)
                    ! note for version : Debian (64-bit)
            % Allocate RAM memory
                ? Select the amount of RAM memory to reserve for the virtual machine
                # Recommended: 1024MB (1GB) minimum, 2048MB (2GB) for better performance
            % Allocate the processors:
                ? Select the amount of processors  to use it in the virtual machine  
                # recommended : 2 CPUs
            % next
            % Virtual Hard Disk:
                ? choose the option : create a virtual hard disk now 
                ? choose the disk size : 20GB  by default
            % finish
    ^ 4) select the Virtual Machine (VM) that created 
    ^ 5) choose setting
        # storage 
        # select controller :IDE
        # Adds optical drive
            $ add 
            $ add the os that you download it 
            $ select it 
            $ choose
        # ok  
    ^ 6) start the machine (it will start your vm)
*/
