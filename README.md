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

      select your machine and start the machine (it will start your vm)
 ![12](https://github.com/user-attachments/assets/16631c5a-9793-4bf5-9805-2ae1b5ac1eda)

     it will load yor vm
![123](https://github.com/user-attachments/assets/c6259b8a-26dd-438a-a7d5-d506217ab878)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
setup your vm / installing debian

    % 1) click on install
        ~ Once the virtual machine starts, you’ll see the installer welcome screen
        ~  Choose the option “Install” to begin the installation process 
        ~ install the Debian operating system on your virtual machine without using graphical interface
![info](https://github.com/user-attachments/assets/0960ce71-5384-43e5-a8e1-2182371b54fe)

    % 2) selsect the language (english)
        ~ This determines the language used in menus, system messages
![info](https://github.com/user-attachments/assets/148917ef-4cc5-4287-8690-8852e9788252)


    % 3) select your location
        ~ Choose your country or region (for example: “Other → Middle East → Jordan”)
        ~ This will automatically set your system’s time zone and regional settings

![12](https://github.com/user-attachments/assets/5c717fcc-d4db-4069-ae2c-ea2b94a9cd68)

![124](https://github.com/user-attachments/assets/a32316f3-1b10-4fea-b7fa-67d9892243be)

![12345](https://github.com/user-attachments/assets/82fbba58-f91b-40f1-899b-655175666308)


    % 4) configure the keyboard
        ~ The installer will ask for the keyboard layout. You can select 
        ~ “American English” or test your layout by typing in the provided
        ~  box to ensure it matches your keyboard
![info](https://github.com/user-attachments/assets/46804422-70a8-458b-b3d4-ddf7f7272491)

    % 5) configure the network (Host name)
        ~ The system will detect the network and ask you to provide a host name
        ? You must use the following format: your Intra name + 42 
![info](https://github.com/user-attachments/assets/9d689d7c-13cc-4cc4-a955-d69e17e08a9c)

    % 6) make the domain name empty
        ~ When asked for the domain name, leave it empty and press Enter
        ~ This is because you are not connecting your machine to a specific domain network
![info](https://github.com/user-attachments/assets/7a4a6257-239b-4161-a7aa-b25fc55085eb)


    % 7) set the password for the host (root user)
        ~ This is the password for the administator (root) account
        # Be sure to remember it — this account has full system control.

![info](https://github.com/user-attachments/assets/2dbbd553-d3d1-4341-9a99-fb35f1dd3d09)












