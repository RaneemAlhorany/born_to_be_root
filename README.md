# born_to_be_root
it is a 42 project

before do all the steps bellow you should study the files from 01 t 0

steps how to solve mandatory part using debian + the first point of the bonus part

setp 1: Virtual Machine Setup - Installing VirtualBox and setting up your VM

     1) download the os (ISO File) (Debian)
         https://www.debian.org/distrib/ 
        
     2) download the virtualBox 
         https://www.virtualbox.org/
        
     3) open the virtualBox to Create the Virtual Machine
         open virtualBox application
![virtual machine](https://github.com/user-attachments/assets/30239b3e-daaf-48c7-a228-cdae61d32cac)

             click on new button to create new virtual machine (VM)
![new](https://github.com/user-attachments/assets/3970fa34-ab04-4729-86c8-76708dd3d8f5)

             enter info to create virtual machine (VM) : 
                    Name  + folder (location) + Type + version
                     note for location : the space you need 5GB  so you can 
                         put the project inside 2 folder just (goinfre or sgonifre)
                          sgonifre is bigger size than goinfre 
                     note for type : (linux)
                     note for version : Debian (64-bit)
![info](https://github.com/user-attachments/assets/6869153a-c63e-4e9f-b4ba-90e2e9d49f51)


             Allocate RAM memory
                 Select the amount of RAM memory to reserve for the virtual machine
                 Recommended: 1024MB (1GB) minimum, 2048MB (2GB) for better performance

             Allocate the processors:
                 Select the amount of processors  to use it in the virtual machine  
                 recommended : 2 CPUs
                 note : you can allocate momory + processor as you want 
              after finish allocate memry + processor enter on the next
![info](https://github.com/user-attachments/assets/1dbaf778-5ff4-4347-b6b2-21cb5214b497)

             Virtual Hard Disk:
                 choose the option : create a virtual hard disk now 
                 choose the disk size : 20GB  by default  , you can write another value but prefare less than 30 
                i will make it as a default

![info](https://github.com/user-attachments/assets/e06db18c-d90b-4c33-bd3e-0c8329bd6afe)

          know you have summary of vm that you created it
            click on the  finish 
![nn](https://github.com/user-attachments/assets/bb54df6d-14b7-4478-a380-4d3da2cf177e)


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
