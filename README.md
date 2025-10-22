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
![503635977-30239b3e-daaf-48c7-a228-cdae61d32cac](https://github.com/user-attachments/assets/e4e968d5-5ca5-43aa-a30d-03c4c1f1e043)


             click on new button to create new virtual machine (VM)
![503703132-3970fa34-ab04-4729-86c8-76708dd3d8f5](https://github.com/user-attachments/assets/c951cd44-ba52-484b-952f-e66de982d171)

             enter info to create virtual machine (VM) : 
                    Name  + folder (location) + Type + version
                     note for location : the space you need 5GB  so you can 
                         put the project inside 2 folder just (goinfre or sgonifre)
                          sgonifre is bigger size than goinfre 
                     note for type : (linux)
                     note for version : Debian (64-bit)
![9](https://github.com/user-attachments/assets/1c33b15d-c3ab-42f6-a8dd-51ba7fb7f2f8)

             Allocate RAM memory
                 Select the amount of RAM memory to reserve for the virtual machine
                 Recommended: 1024MB (1GB) minimum, 2048MB (2GB) for better performance

             Allocate the processors:
                 Select the amount of processors  to use it in the virtual machine  
                 recommended : 2 CPUs
                 note : you can allocate momory + processor as you want 
              after finish allocate memry + processor enter on the next
<img width="699" height="528" alt="Screenshot 2025-10-22 142231" src="https://github.com/user-attachments/assets/064bf9fd-f712-4d51-a559-8c5cf45c4480" />


             Virtual Hard Disk:
                 choose the option : create a virtual hard disk now 
                 choose the disk size : 20GB  by default  , you can write another value but prefare less than 30 
                i will make it as a default
![503721699-e06db18c-d90b-4c33-bd3e-0c8329bd6afe](https://github.com/user-attachments/assets/c32331c7-9013-4ce0-abb5-366e362848c2)



          know you have summary of vm that you created it
            click on the  finish 
<img width="606" height="435" alt="Screenshot 2025-10-22 155006" src="https://github.com/user-attachments/assets/40aaadc5-6c52-4100-9713-060488b23827" />



     4) select the Virtual Machine (VM) that created 
     5) choose setting
![503727360-18013b84-62c9-475b-bafe-448ec1ea5b2b](https://github.com/user-attachments/assets/27d26a53-ff6b-4a59-b436-77d53c454f51)

    
         storage 
         select Empty word that is bellow controller :IDE
![503728741-c75ecd2d-bb8e-4950-a4ae-8e91657e1480](https://github.com/user-attachments/assets/0f792a09-cf85-4cfa-8440-eaf458e98d3c)

         Adds optical drive (click on circle button)
         choose "choose/create a virtual optical disk"
![503731214-46eeb889-b216-4ae9-af4a-03bc5ebdcd11](https://github.com/user-attachments/assets/183f7fbc-4ec5-4c6e-bf22-7c0df0783d4d)

            $ add 
![503734072-ee456a70-4df8-4d7d-a6b5-ce6a7bc2bc5f](https://github.com/user-attachments/assets/a072d865-8940-4c75-a727-5fcec033f120)

            $ add the os that you download it 
            $ select it 
![503734431-c26742a4-d2b7-45c6-a416-61b0848987b0](https://github.com/user-attachments/assets/4dabc598-dab9-4718-97a3-96001f56da40)

            $ choose
![503736620-d0337dd6-2f18-40d8-8761-4b20cb148d5a](https://github.com/user-attachments/assets/1c3ca5f8-fec6-4bb6-aff8-8b70fa7a5903)
  
          click on  ok  
![503734939-cb1f1f14-fdfd-4b20-bf4e-ed7185fd960e](https://github.com/user-attachments/assets/0b7bbe73-dd17-46e1-9b13-4319cc341d82)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
        $ re-enter password to verify
![info](https://github.com/user-attachments/assets/2dbbd553-d3d1-4341-9a99-fb35f1dd3d09)
![info](https://github.com/user-attachments/assets/83677a9c-4472-45e3-a05a-5a6bcf84727c)

    % 8) set the full name for new user
        ? It must be intra name 
        ~ When the installer asks for the “full name” of the new user, enter your Intra name
![info](https://github.com/user-attachments/assets/5d742c08-4ce4-40ef-8ffa-f7bfdeb35de5)

    % 9) set the username for accout 
        ? same above
        ~ The username is what you will use to log in to the system
        ~ Use the same as before — your Intra name
![info](https://github.com/user-attachments/assets/1140ead6-7e63-4ca6-8c5c-f24ac52d4127)


        % 10) password for new user 
             ~ This is the password for the non-root user (your normal account)
             ~ This password should be different from the root password for better security
             # re enter the password

![info](https://github.com/user-attachments/assets/676f3691-c2a9-4eef-8fd0-052456ca4d18)
![info](https://github.com/user-attachments/assets/5e12af35-10d1-4638-9cbf-bd713811ed55)


    % 11) partition disk (choose partitioning method)
        ? choose manual 
        ~ When you reach disk partitioning, select Manual mode
        ~ This gives you full control over how to divide and use your virtual disk
![info](https://github.com/user-attachments/assets/87391d40-2454-4e31-a9f5-6a7df148a23d)


    % 12) select the storage location  (partition disk)
        ~ Choose your virtual hard disk. It should look something like:
        ? SCSI3 (0,0,0) (sda) — ## GB ATA VBOX HARDDISK 
![info](https://github.com/user-attachments/assets/4ff4eac9-d28f-4553-888c-e2c714eada74)


    % 13)  Confirm the selection
        ? When asked whether to use this disk, select Yes to continue
![info](https://github.com/user-attachments/assets/b707ad6c-4fd1-4131-b0b2-2eeda82c8639)


    % 14) select the free space  
        ~ You will see an area labeled something like 
                ? pri/log -## GB FREE space
        ~  Highlight it and press Enter 
![info](https://github.com/user-attachments/assets/d1fc7512-3608-44bb-94d9-b8a3893c657f)


    % 15) How to use this free space
        ? choose "create a new partition "
        ~ This will allow you to manually create partitions such as /, /home, or swap , ...... later

![info](https://github.com/user-attachments/assets/dbf47f6f-e0cd-4e54-b30b-56d7be7db174)

    % 16) new partition size 
        !  As the subject indicates, the size of the partition must be 500 megabytes. (500m)
        ~ The installer will ask for the size of the new partition
        ~ You will define it based on your setup plan (for example, 10 GB for root /, etc.)
![info](https://github.com/user-attachments/assets/a6543a07-2445-4aa4-9406-ef5f174f6108)


    % 17) Type for the new partition 
        ? choose  "primary"
        ~ This makes the partition a main partition directly on the disk (not part of an extended one)
        ~ It’s ideal for essential system areas like /boot
![info](https://github.com/user-attachments/assets/ff39850e-9a7f-4126-b8f7-5b59f9dbd137)


        % 18) location for the new partiton:
             ? choose "Beginning"
             ~ This places the partition at the start of the disk — which is better for the boot partition 
                 ~ because it loads faster and is easier for the BIOS/UEFI to detect
![info](https://github.com/user-attachments/assets/fd9c1cff-8789-4b1d-b683-1bfdebd82f26)


     % 19) partition setting:
        ? choose "Mount point"
        ? We will modify the mount point to which the subject specifies
        ~ Now the installer will show the settings for this new partition (size, type, mount point, etc.)
        ~ We will modify the mount point according to the installation instructions

![info](https://github.com/user-attachments/assets/9c649144-4f4e-48b2-9bfd-3df0aa1c1de7)


    % 20) Mount point for this partition:
        ~  We choose boot as the mount point of our partition
        ? /boot - static files of the boot loader
        ~ This partition will store static boot loader files — files required to start the operating system (like GRUB).
        Example: /boot contains the Linux kernel and GRUB configuration

![info](https://github.com/user-attachments/assets/9aca80dc-072b-4d45-9531-19da9e5772ac)


    % 21) partition setting:
        ~ We finish configuring the current partition
        ? After setting the mount point, select “Done setting up the partition.”
        ~ This means you’ve finished configuring the /boot partition
![info](https://github.com/user-attachments/assets/86178aca-bb7e-4dde-a0e9-227c2e198b26)























