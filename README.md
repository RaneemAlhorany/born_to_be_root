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
![info](https://github.com/user-attachments/assets/c4575867-dedb-4ebf-bf8d-a34be0200e4e)

     4) select the Virtual Machine (VM) that created 
     5) choose setting
![info](https://github.com/user-attachments/assets/18013b84-62c9-475b-bafe-448ec1ea5b2b)

    
         storage 
         select Empty word that is bellow controller :IDE
![info](https://github.com/user-attachments/assets/c75ecd2d-bb8e-4950-a4ae-8e91657e1480)

         Adds optical drive (click on circle button)
         choose "choose/create a virtual optical disk"

![info](https://github.com/user-attachments/assets/46eeb889-b216-4ae9-af4a-03bc5ebdcd11)

            $ add 
![i info](https://github.com/user-attachments/assets/ee456a70-4df8-4d7d-a6b5-ce6a7bc2bc5f)

            $ add the os that you download it 
            $ select it 
![info2](https://github.com/user-attachments/assets/c26742a4-d2b7-45c6-a416-61b0848987b0)
           
            $ choose
![info](https://github.com/user-attachments/assets/d0337dd6-2f18-40d8-8761-4b20cb148d5a)

               
          click on  ok  
![info](https://github.com/user-attachments/assets/cb1f1f14-fdfd-4b20-bf4e-ed7185fd960e)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   start the machine (it will start your vm)


