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


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      select your machine and start the machine (it will start your vm)
![503743230-16631c5a-9793-4bf5-9805-2ae1b5ac1eda](https://github.com/user-attachments/assets/070b51d2-da51-4409-9e2a-968f1dd6e7df)


     it will load yor vm
![503743512-c6259b8a-26dd-438a-a7d5-d506217ab878](https://github.com/user-attachments/assets/091854c4-820b-4d2f-8aec-b47bb762cb8d)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

setup your vm / installing debian

    % 1) click on install
        ~ Once the virtual machine starts, you’ll see the installer welcome screen
        ~  Choose the option “Install” to begin the installation process 
        ~ install the Debian operating system on your virtual machine without using graphical interface
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e32d2d3b-bf0f-4ad0-b90b-f286910bab36" />


    % 2) selsect the language (english)
        ~ This determines the language used in menus, system messages
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ce345a43-d444-442f-8526-2eafe29dcbfb" />


    % 3) select your location
        ~ Choose your country or region (for example: “Other → Middle East → Jordan”)
        ~ This will automatically set your system’s time zone and regional settings
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/57949c31-02aa-4f84-81ce-baf3ee862297" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/94853a13-a402-4e50-a67a-37a0910c0d24" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/330828fe-6161-424f-be1f-df1133f110f0" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/fd2a6c6a-5269-4b12-9fed-c54c3cede9a5" />


    % 4) configure the keyboard
        ~ The installer will ask for the keyboard layout. You can select 
        ~ “American English” or test your layout by typing in the provided
        ~  box to ensure it matches your keyboard
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/3b3696af-92d8-4da0-a069-58f86dbdc531" />


    % 5) configure the network (Host name)
        ~ The system will detect the network and ask you to provide a host name
        ? You must use the following format: your Intra name + 42 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1a59591f-c64b-430d-a55e-4aa8b791b2e1" />



    % 6) make the domain name empty
        ~ When asked for the domain name, leave it empty and press Enter
        ~ This is because you are not connecting your machine to a specific domain network
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f0ce8158-5a8b-4f18-9bdb-8074f2045260" />


    % 7) set the password for the host (root user)
        ~ This is the password for the administator (root) account
        # Be sure to remember it — this account has full system control.
        $ re-enter password to verify
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a4cdd6b8-649c-4575-8130-4226ad132fcd" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e19f1faf-f650-4e6e-85f3-542cb866c4fd" />


    % 8) set the full name for new user
        ? It must be intra name 
        ~ When the installer asks for the “full name” of the new user, enter your Intra name
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d0f7a1c0-af86-45c6-ae3b-947f078b7e3e" />


    % 9) set the username for accout 
        ? same above
        ~ The username is what you will use to log in to the system
        ~ Use the same as before — your Intra name
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8f8ebb98-cfbc-411c-9661-6e21bab004d8" />


        % 10) password for new user 
             ~ This is the password for the non-root user (your normal account)
             ~ This password should be different from the root password for better security
             # re enter the password
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b6cce655-bd42-42f8-b779-a51e06f6be4d" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f2bf044f-8698-4024-aa1c-0c5b46fd741f" />


    % 11) partition disk (choose partitioning method)
        ? choose manual 
        ~ When you reach disk partitioning, select Manual mode
        ~ This gives you full control over how to divide and use your virtual disk
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c8d60660-7499-4373-b933-a221cb267076" />


    % 12) select the storage location  (partition disk)
        ~ Choose your virtual hard disk. It should look something like:
        ? SCSI3 (0,0,0) (sda) — ## GB ATA VBOX HARDDISK 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d9cf69dd-ae02-4c8e-821f-f02bb50dcd45" />


    % 13)  Confirm the selection
        ? When asked whether to use this disk, select Yes to continue
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/80dc5744-373c-43dd-acdf-af887373d851" />


    % 14) select the free space  
        ~ You will see an area labeled something like 
                ? pri/log -## GB FREE space
        ~  Highlight it and press Enter 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6469fbd1-0d55-4af2-a51e-75aa30f1d087" />


    % 15) How to use this free space
        ? choose "create a new partition "
        ~ This will allow you to manually create partitions such as /, /home, or swap , ...... later
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/dbdd39b1-1a82-4716-890e-6d0c422737e8" />


    % 16) new partition size 
        !  As the subject indicates, the size of the partition must be 500 megabytes. (500m)
        ~ The installer will ask for the size of the new partition
        ~ You will define it based on your setup plan (for example, 10 GB for root /, etc.)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/216bc5c8-5489-476b-ab13-c08c75bdf874" />


    % 17) Type for the new partition 
        ? choose  "primary"
        ~ This makes the partition a main partition directly on the disk (not part of an extended one)
        ~ It’s ideal for essential system areas like /boot
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/bf1c33d2-1270-4010-8315-72de087ad02c" />


        % 18) location for the new partiton:
             ? choose "Beginning"
             ~ This places the partition at the start of the disk — which is better for the boot partition 
                 ~ because it loads faster and is easier for the BIOS/UEFI to detect
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/dce7ab48-19ae-4dea-aa80-e83d707aa6c9" />


     % 19) partition setting:
        ? choose "Mount point"
        ? We will modify the mount point to which the subject specifies
        ~ Now the installer will show the settings for this new partition (size, type, mount point, etc.)
        ~ We will modify the mount point according to the installation instructions
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/39ecae23-b515-44a8-be15-a8ad84923f36" />


    % 20) Mount point for this partition:
        ~  We choose boot as the mount point of our partition
        ? /boot - static files of the boot loader
        ~ This partition will store static boot loader files — files required to start the operating system (like GRUB).
        Example: /boot contains the Linux kernel and GRUB configuration
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c8fc43e9-9d73-4c25-a63b-8c2db063d753" />


    % 21) partition setting:
        ~ We finish configuring the current partition
        ? After setting the mount point, select “Done setting up the partition.”
        ~ This means you’ve finished configuring the /boot partition
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d0ae5c63-d31a-4564-ab12-c4fd2901e310" />


    % 22) partition setting:
        ~ Once we have completed the previous step (/boot partition), the partition should appear in the partition list
        ~ Now we must create a new logical partition with all the available disk space (using all the remaining free space) 
        ~  which has no mount point and which is encrypted. To do this, we select 
        ~ the free space where we want to create it
        ? choose "pri/log -## GB FREE space"
        # This partition will:
            Have no mount point yet.
            Be encrypted.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/3f84f61d-ba44-4d3b-8908-512661c9bdf1" />


    % 23) How to use this free space
        ? choose "create a new partition "
        ~ This allows you to manually create additional partitions later (like /, /home, or swap) 
            ~ inside the encrypted volume
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1ad3ca4a-d5ca-4337-9ee8-5347de92398a" />


    % 24) new partition size 
        ? write : "max"
        ~ When asked for the size, type “max”.
        ~ This tells the installer to use all remaining free space for the encrypted partition
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1ad55469-3a4d-4af9-83a0-f46a6f19acd2" />


      % 25)Type for the new partition:
             ~ Since we’ll use this partition later to build an LVM (Logical Volume Manager) setup
             ? choose : logical 
             ~ Logical partitions allow flexible management and multiple logical volumes inside them
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1005452a-39af-4ac2-91f7-d72b71a015a6" />


    % 26) partition settings:
        ? go to the Mount point and choose it
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/610ab420-7a40-4bdc-8d49-d354d5072c38" />


    % 27) Mount point for this partition:
        ? choose "Do not mount it "
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8717b372-fb65-4fd0-b4ee-ecf47d48b026" />


    % 28) partition settings:
       ? choose : done setting up the partition
       ~ This confirms and saves the logical partition configuration
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/21ad5550-6cd9-475e-af7f-28f0ff1c1b95" />


    % 29) patition disk (Configure encrypted volumes)
        ~ Now that the logical partition exists, you’ll move on to encryption configuration.
        ? choose "configure encrypted volumes"
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7eb7d4fc-b0cc-4548-b716-cf65b75ead8c" />


        % 30) Confirmation 
             ~ Choose “Yes” when asked to confirm that you want to configure encrypted volumes.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ee15625a-7381-4047-8a5e-5441fc62a973" />


    % 31) Encryption configuration actions
        ? choose "create encrypted volumes"
        ~ This will initialize the setup process where you’ll later select which 
            ~ partitions to encrypt and define the encryption method (like AES)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c284e9ac-f7b4-4667-ae7d-315ba64b7bd0" />


    % 32) Devices to encrypt
        ? go to "/dev/sda5" the enter to spacebar on the keyboard to select it then click on "enter"
        ~ We select which partition we want to perform the encryption on
        ~ This means you’re telling Debian which partition to encrypt 
        ~ in our case, it’s the logical partition /dev/sda5 (the one that uses all free space)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/bf033f61-820e-4d5b-bc13-d9acd7e0bf75" />


    % 33) partition settings
        ? choose "Done setting up the partition"
        ~ We finish configuring the current partition
        ~ This confirms the configuration for that partition before encryption begins
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/18e2178b-204b-40ce-bdd4-19aebb5cd896" />


    % 34) Encryption configuration actions
        ? choose "Finish"
        ~ This tells the installer that you’re done selecting and configuring the encrypted devices
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6c7dc6ea-63b7-4f29-84ce-3bd0ec6a878c" />


    % 35) Confirmation — Erasing data
        ! The system will ask:
            really erase the data on SCSI3 (0,0,0) , partotion #5 (sda)?
        ? choose "yes"
        ~ This ensures that the partition is securely prepared for encryption
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5eae9c0e-1729-44ba-b69c-9c5e452b80e1" />

     
    % 36) loader really erase the data on SCSI3 (0,0,0) , partotion #5 (sda)?
        ? click on cancel
        ~ We don't care if it takes a long time or a short time, we click cancel, 
            ~ since there is nothing to encrypt, because the partition is empty.
        ~ It won’t affect encryption because there’s no real data to wipe
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/245fe0c3-88ab-448b-ad03-ca54c3e483f8" />


       % 37) ENcryption passphrase (for password)
             ~ Again we will have to enter a password, this time it will be the encryption phrase
             ~ As I have previously told you, you must repeat the process and you must write 
             ~ it down, since it will be important in the future
             ? add your password
             * This passphrase protects the encrypted data — you’ll need it every time the system boots.
             * Make sure to write it down and store it safely,
                     * because if you lose it, you’ll lose access to all encrypted data
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/316d99dc-8f60-4510-902d-c57a8533738d" />

                    
         % 38) Re-enter passphrase to verify:
             ? re enter the previous password
             ~ Enter the same encryption password again to confirm it
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e9a3c004-7210-42d1-975d-528e2ce9ec74" />

             
         % 39) partition disks
             ? choose "Cofigure the logical volume manager (LVM)"
             ~ LVM allows you to create flexible partitions inside the encrypted space 
             ~ it’s like a layer that helps you manage your storage more easily
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/2ed51ce7-4dd9-4447-b006-ce7e606e7329" />

             
         % 40) Write the changes to disks and configure LVM?
             ~ The installer will ask if you want to apply the changes before creating LVM
             ?  choose "yes"
             ~ This commits your encryption and prepares the system to build the logical volumes
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a593c119-3300-461b-b498-9fac3040d9e1" />


    % 41) LVM configuration action
        ? choose "Create volume group"
        ~ A volume group (VG) is a container that will hold multiple logical volumes (like /, /home, swap)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4adad115-dd16-4c72-a32e-432ce722135e" />


    % 42) Volume group name
        ~ You must assign a name to this volume group.
        ? We have to give the name as indicated in the subject: LVMGroup
        ~ This name identifies the group that holds all your future logical partitions
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/74cb00b0-a13b-4908-85e2-5da36832a216" />


     % 43) Devices for the new volume group
             ? go to "/dev/mapper/sda5_crypt" the click to spacebar in keyboard to select it  , then enter
             ~ We select which partition we want to perform the encryption on
             ~ This tells Debian that your new volume group (LVMGroup)
                 ~ will be created inside the encrypted partition (/dev/mapper/sda5_crypt)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/63f53fca-a81b-4d10-939f-4b4829af197f" />

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
note :
     
     # we will repeat the steps from step (44) to step (47) for the following / several times 
     # repeat the following to actions for the swap , home , var , srv , tmp , var-log file
     # once for each logical volume you need to create
                  the name + size for each file  (The exact size for each depends on the total disk size of your virtual machine)
                      root: #GB , swap = #GB , home = #GB , var = #GB, srv = #GB , tmp = #GB , var/log = #GB
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                  % 44) LVM configuration details
                      ? choose "create logical volume"
                      ~ This option lets you make an individual virtual partition (LV) inside the LVM group
![WhatsApp Image 2025-10-22 at 22 57 29_c9ace040](https://github.com/user-attachments/assets/d39df4f3-964f-4617-ade0-abba228c5f13)

                  % 45) Volume group 
                      ? choose "LVMGroup"
                      ~ We will start by choosing the group where we want them to be created
                      ~ We select the only one available (the one we just created)
                      # That’s the group you created earlier, and it’s where all your logical volumes will be stored
![WhatsApp Image 2025-10-22 at 22 58 55_cde0dd21](https://github.com/user-attachments/assets/4d94fc60-597b-4bd9-97b9-4bab361031a0)



                  % 46) Logical volume name :
                      ? write "namefile"
                      ~ When prompted for the name, type one of the logical volume names (e.g., root, swap, home, etc.)
                      ~ The order of creation should follow the same sequence as described in the project:
                              # Start with root and end with var/log
![WhatsApp Image 2025-10-23 at 00 01 33_fafaf491](https://github.com/user-attachments/assets/029c688b-a037-4fda-876d-632101ff90e8)



                      * This name determines where the mount point will be (for example, root will later be mounted as /)
                  % 47) Logical volume size :
                      ? write "#GB" or #g
                      ~ Size, as the subject indicates, will be #GB
![WhatsApp Image 2025-10-23 at 00 11 41_69fa79dc](https://github.com/user-attachments/assets/1d31fab9-563d-4d31-8682-bdd3fe3fd596)


     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for swap :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 00 14 55_6088acab](https://github.com/user-attachments/assets/9ac6e3e1-2585-4582-bf11-b8e6b3bbcb77)
![WhatsApp Image 2025-10-23 at 00 16 23_91302e08](https://github.com/user-attachments/assets/895b17f9-782b-4397-81f9-ae1e13ccb4d5)
![WhatsApp Image 2025-10-23 at 00 18 09_522bd204](https://github.com/user-attachments/assets/a8b76e68-245b-40a6-bb55-ad368d5e252c)
![WhatsApp Image 2025-10-23 at 00 20 21_bbbfb513](https://github.com/user-attachments/assets/dff0397a-5571-409c-aa79-eb13550727ea)



     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for home :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 00 24 19_b3a8b6b1](https://github.com/user-attachments/assets/6f074d5f-b562-4327-be9f-3f88a4b73b8b)
![WhatsApp Image 2025-10-23 at 00 25 48_0772e46d](https://github.com/user-attachments/assets/2a5a1305-9032-40f6-9b21-a0cdb3562119)
![WhatsApp Image 2025-10-23 at 00 27 20_85cecd10](https://github.com/user-attachments/assets/2206fd05-1454-402a-b5e7-2a3bba6d7af7)
![WhatsApp Image 2025-10-23 at 00 29 30_9ba49e2c](https://github.com/user-attachments/assets/6d2db43b-2e4b-49af-84b0-08a2dd80ca68)



     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for var :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 00 36 57_33ac361d](https://github.com/user-attachments/assets/3c30e95e-e510-42c4-a38b-4152a415c022)
![WhatsApp Image 2025-10-23 at 00 37 05_00bbc958](https://github.com/user-attachments/assets/6f2bd100-5e13-47cd-baaf-602817851386)
![WhatsApp Image 2025-10-23 at 00 37 23_5e2032cb](https://github.com/user-attachments/assets/72a0cb50-2dbe-4e23-9457-e9b639203b28)
![WhatsApp Image 2025-10-23 at 00 38 54_f26be716](https://github.com/user-attachments/assets/686644a8-0af6-411b-8921-e79c77b350bd)





     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for srv:
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 00 47 13_7a49b984](https://github.com/user-attachments/assets/57b97807-9441-4be6-8307-e156f7857a6c)
![WhatsApp Image 2025-10-23 at 00 47 28_76319f69](https://github.com/user-attachments/assets/e154f276-ab31-4e1f-a472-f0537967e235)
![WhatsApp Image 2025-10-23 at 00 47 49_4ffbb16b](https://github.com/user-attachments/assets/47dcd674-b616-46f6-9c1c-26357e0985a4)
![WhatsApp Image 2025-10-23 at 00 48 18_55e2d348](https://github.com/user-attachments/assets/dbdb5dfb-66cb-4b14-93fb-5423002f2968)




     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for tmp:
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 00 53 14_ba9f4ab2](https://github.com/user-attachments/assets/12e686c7-7cb1-4c68-85ec-20b03322bea2)
![WhatsApp Image 2025-10-23 at 00 53 30_e3baea59](https://github.com/user-attachments/assets/520e939c-cd14-40fc-a97a-e7ce9723145f)
![WhatsApp Image 2025-10-23 at 00 54 15_bfa23266](https://github.com/user-attachments/assets/52d8a476-6430-425c-bf63-9cf3329ebfea)
![WhatsApp Image 2025-10-23 at 00 55 37_94286106](https://github.com/user-attachments/assets/a97603e8-2ba5-444a-9ee0-ac30fbf30640)




     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for var-log :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![WhatsApp Image 2025-10-23 at 01 01 01_2651ee06](https://github.com/user-attachments/assets/11c0caf3-f808-4b90-94f4-e95ccfb3067a)
![WhatsApp Image 2025-10-23 at 01 01 18_7be6f2e4](https://github.com/user-attachments/assets/0c7e72b0-9522-4024-85d5-f32fda997ee3)
![WhatsApp Image 2025-10-23 at 01 01 42_95acc9f2](https://github.com/user-attachments/assets/22faf6d0-0b55-40f6-aa25-e37637a2b303)
![WhatsApp Image 2025-10-23 at 01 02 23_0e3bb8d9](https://github.com/user-attachments/assets/cc954993-02e8-4c40-8454-8a71bd89b495)



         % 48) LVM configuration details to konw the details 
        ~ After creating all logical volumes
        ? choose "Display confiuration details" to see all details
        ~ This will show you all the logical volumes created under 
            ~ LVMGroup — their names, sizes, and status — to confirm everything is correct
          after display it enter continue
![WhatsApp Image 2025-10-23 at 01 07 22_71983afb](https://github.com/user-attachments/assets/3aa4a525-c5f0-477a-9d39-1aec1a39bba4)
![WhatsApp Image 2025-10-23 at 01 09 38_d169e933](https://github.com/user-attachments/assets/2134ae89-fad5-4b0e-89af-51145c06e34b)

    % 49) LVM configuration action
        ? choose "finish"
        # your setup now looks like:
            # Physical disk → Encrypted partition → Volume Group (LVMGroup) → Logical Volumes.
![WhatsApp Image 2025-10-23 at 01 12 08_6f560105](https://github.com/user-attachments/assets/3c615ea8-00dd-4d2e-9d55-eb5606b56e2d)



    ! you will do the configure all the LVM file (root , swap , home , var , srv , tmp ,var-log)
    * This means you’ve finished creating all your logical volumes inside the volume group LVMGroup
    * Now, you’ll configure each one of them (format type, mount point, etc.).
    ! You will repeat the next steps (50 → 55) for each of the following logical volumes:
    ! root, swap, home, var, srv, tmp, var--log
        % 50) configure iscsi volumes
            ? go to the line after the volume  info 
            ? its like : #1  #.#GB enter to it
            ~ Use the arrow keys to highlight one logical volume (start with root),then press Enter to configure it
![WhatsApp Image 2025-10-23 at 01 15 17_2439c3fc](https://github.com/user-attachments/assets/0bfafcca-4509-493d-a844-88934ebaf59f)



        % 51) partition settings
            ? Select the option “Use as:” and initially it may show “do not use
            ~ You need to change this to define how this partition will be used
![WhatsApp Image 2025-10-23 at 01 17 04_6a41e303](https://github.com/user-attachments/assets/09f6bc61-7e3c-4916-99ff-afe3c9e5abb0)



          
        % 52) how to use this partition:
            ? choose "Ext4 journaling file system"
            ~ "Ext4 journaling file system" is the standard Linux file system for normal 
            ~ partitions like /, /home, /var, etc.
            ! Special case:
                # For the swap logical volume, instead of “Ext4,”
                # choose “swap area”, then select “Done setting up the partition.”
                # (You don’t need a mount point for swap.) we do it bellow dont wory here all info you need and do it in correct place
![WhatsApp Image 2025-10-23 at 01 19 57_71c1a193](https://github.com/user-attachments/assets/9d7acd3e-a952-4f1d-b683-7101ab295814)



                
        % 53) partition settings
            ? After choosing the file system select "Mount point : none"
            ~ For normal volumes, you’ll pick a mount point from the list
            # for file (var-- log) select "Enter manually"   we do it bellow dont wory here all info you need and do it in correct place
![WhatsApp Image 2025-10-23 at 01 21 58_4af271ce](https://github.com/user-attachments/assets/55ea2dee-b66d-4b15-810e-11efde3eada7)




        % 54) Mount point for this partition
            ? choose "/nameFile - name file depending the file you choose"
            # for file (var-- lon)  :  enter the name (var--log)   we do it bellow dont wory here all info you need and do it in correct place
![WhatsApp Image 2025-10-23 at 01 24 42_f2343d06](https://github.com/user-attachments/assets/5def7d0b-2f75-4783-b61b-8d6c68688cda)


        % 55) partition settings 
        ~ After setting the correct mount point,
            ? choose "Done setting up the partition"
![WhatsApp Image 2025-10-23 at 01 26 27_837e7374](https://github.com/user-attachments/assets/6f12fd16-a8ec-4f15-8bbe-9bc68eb209eb)

     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for root :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![111](https://github.com/user-attachments/assets/c81d32ad-c7ca-4f18-8b27-d82426aab2a1)
![222](https://github.com/user-attachments/assets/3616b849-c69c-4a8d-9454-17ea7032b9a9)
![333](https://github.com/user-attachments/assets/9cec48a6-3fc8-4452-8dc3-e2442ddf1081)
![444](https://github.com/user-attachments/assets/686c78af-b8a3-4ca8-88ac-2dc52f29f60e)
![555](https://github.com/user-attachments/assets/5f9df398-6d30-4ff6-951e-e437d4bd0417)
![666](https://github.com/user-attachments/assets/071ed4f1-e343-4248-b0f9-a75731171fd5)





     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for srv:
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![111](https://github.com/user-attachments/assets/46c4b4e9-d769-470c-8c14-3b01e2c975cc)
![222](https://github.com/user-attachments/assets/78dce5c8-6e47-4e61-bae5-f2e79c0363bd)
![333](https://github.com/user-attachments/assets/a9a1e273-478c-4839-b7a0-1ee71263f024)
![444](https://github.com/user-attachments/assets/8d0a3e1f-dac5-4498-8204-302292cffb84)
![555](https://github.com/user-attachments/assets/cd0f659f-8ff5-4fd1-aab6-d7e1f30c070f)
![666](https://github.com/user-attachments/assets/233f0717-1059-4337-b0cb-e6595baeac7e)






     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for swap : (we will make an exception because the file system will be different)
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![111](https://github.com/user-attachments/assets/93c8e320-4fc7-4a25-8521-b49ab73ff8eb)
![222](https://github.com/user-attachments/assets/cde20bba-3cb2-4ade-88e4-e3d6f80e8403)
![333](https://github.com/user-attachments/assets/c14722ca-31df-4101-adbf-1b6068144ee5)
![444](https://github.com/user-attachments/assets/f0963756-f2cc-439e-a977-fc1280b7de85)




     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for tmp:
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

![111](https://github.com/user-attachments/assets/caf3497d-9305-4ce2-8ee7-8696c4861e48)
![222](https://github.com/user-attachments/assets/195d4203-22cd-4076-af6f-a9e2f6a26853)
![333](https://github.com/user-attachments/assets/269b6cb1-4373-47d0-9dca-ecf14368f227)
![444](https://github.com/user-attachments/assets/c40c4c6c-0544-4549-9446-a07a8f6158d1)
![555](https://github.com/user-attachments/assets/b9f8b391-2a6b-40ab-b665-dc2a1d4d03e1)
![666](https://github.com/user-attachments/assets/32c8cbe2-59b3-4dc9-9935-ea48276a3dcf)




     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for var :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

![111](https://github.com/user-attachments/assets/4c19a10c-135f-46b8-821a-5b7ee6a7a72a)
![222](https://github.com/user-attachments/assets/d17f3a78-e1c8-46b3-9ff1-f70f5fb192d7)
![333](https://github.com/user-attachments/assets/0cb9ff80-d2de-46ac-8986-3824935084e1)
![444](https://github.com/user-attachments/assets/2d903497-dd71-4705-b686-d7bb675dcb23)
![555](https://github.com/user-attachments/assets/5e56b5d8-3c28-4ebe-ac0f-3e877d92d141)
![666](https://github.com/user-attachments/assets/14a64996-4838-4bc1-8ddc-9e07c894903a)





     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
               for var-log :
     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
![111](https://github.com/user-attachments/assets/ff2a8fd5-439f-4080-a0dd-a7ce0a9eb2b7)
![222](https://github.com/user-attachments/assets/654c7182-3e9d-491c-b191-9ffc4212d420)
![333](https://github.com/user-attachments/assets/17f7c971-5893-4085-b402-15e3919fae09)
![444](https://github.com/user-attachments/assets/2153dbaa-b217-4810-ace5-611bf8724f50)
![555](https://github.com/user-attachments/assets/167c9b9b-e5bf-44cd-b201-ced52ec102f0)
![666](https://github.com/user-attachments/assets/9c2e38a9-8582-4379-96da-a5bbb08964af)
![777](https://github.com/user-attachments/assets/391195f1-cf82-443f-9db6-8768e91c0f1a)

            ~ Now, assign the correct mount point depending on the name of the volume
            Logical Volume	    Mount Point
                root               /
                home               /home
                var                /var
                srv                /srv
                tmp                /tmp
                var--log           /var/log
        ~ This saves your configuration for that logical volume.
        ! you will doing all step for the file 
            # Once done, every logical volume will have:
                ? Its correct file system (Ext4 or Swap)
                ? Its correct mount point (/, /home, /var, etc.)
                ? And be ready for installation.
                
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    % 56) configure  ISCSI volumes 
        ? choose "finish partitioning and write changes to disk"
        ~ This means you have completed all your partition setup (LVM, encryption, etc.)
        ~ and you are ready to apply these changes permanently to the disk
![WhatsApp Image 2025-10-23 at 02 31 37_89bd4b9d](https://github.com/user-attachments/assets/38673dbd-b013-4def-a9a7-da19473abd3e)





    % 57) Confirm changes , configure the package manager
        ? choose "yes"
        ~ This confirms writing all partition and file system configurations to the disk.
        ~ After this step, the actual installation of the base system will begin. 
        ~ This allows the Debian installer to set up the APT package manager,
        ~ which is responsible for installing and updating software packages later
![WhatsApp Image 2025-10-23 at 02 33 55_e923cd12](https://github.com/user-attachments/assets/0a9a72de-6955-41e6-8909-ad0779b3f110)

            



       % 58) scan extra installation media 
             ? choose "no"
             ~ This means you don’t have any additional installation media (like a DVD or USB with extra packages)
![WhatsApp Image 2025-10-23 at 02 41 50_e4ab5cd6](https://github.com/user-attachments/assets/e4c10e77-4d37-489f-a31c-14233ed91ccb)





 
    % 59) Debian archive mirror country
        ? choose "United states"
        ~ You’re selecting the country closest to you or where the fastest mirror is located.
        ~ (You can choose any, but “United States” is reliable.)
![WhatsApp Image 2025-10-23 at 02 44 38_d986b5c9](https://github.com/user-attachments/assets/42282390-f8ed-4f9a-87eb-e289bef847b6)





    % 60) Debian archive mirror 
        ? choose "deb.debian.org"
        ~ This is the main Debian repository where packages are downloaded from.
![WhatsApp Image 2025-10-23 at 02 46 18_0cd984d1](https://github.com/user-attachments/assets/5978c0cb-1c0a-479b-b222-99973dcfea53)






    % 61) HTTP proxy information 
        ? Leave this field empty/blank and continue (blank for none)
        ~ (Only fill this if your network uses a proxy server — most users don’t.)
![WhatsApp Image 2025-10-23 at 02 47 58_5b420687](https://github.com/user-attachments/assets/acd1db09-a879-44c7-9d2d-d8e17a4d85a9)


     

        % 62) participate in the package usage survey?
             ? chhose "No"
             ~ We do not want developers to see our statistics
             ~ This disables sending anonymous software usage statistics to Debian developers.
![WhatsApp Image 2025-10-23 at 02 50 53_798012ae](https://github.com/user-attachments/assets/78210725-df56-4165-8e15-c6ac0622677b)




        
    % 63) choose software to install
        ? remove all software options (with the space bar) and click Continue since in the subject they are forbidden
        # Unselect all software options using the Space bar, then click Continue
        ~ According to the project instructions, installing any preconfigured 
        ~ software (like desktop environments) is forbidden so We only install the bare minimum base system.
![WhatsApp Image 2025-10-23 at 02 52 26_12ea22a4](https://github.com/user-attachments/assets/a1e5f87b-5a30-457c-ad6d-e93694fa0f49)






     
        % 64) install the GRUB boot loader to your primary drive?
             ? choose "yes"
             ~ GRUB is the program that lets your system boot Debian at startup
![WhatsApp Image 2025-10-23 at 02 54 47_4b25b343](https://github.com/user-attachments/assets/864cf830-6f06-45e5-82c8-66065c46e08a)





    % 65) Device for boot loader installation
        ?choose "/dev/sda (ata-VBOX_HARDDISK_###############)"
        # This installs the boot loader on your main virtual hard drive
![WhatsApp Image 2025-10-23 at 02 56 57_d9e356e3](https://github.com/user-attachments/assets/a80585be-cb44-47bf-8112-64a4838dc01b)






    % 66) please choose <Continue> to reboot
        ? choose "continue"
        ~ Your installation is now finished — Debian will restart
![WhatsApp Image 2025-10-23 at 03 00 29_66cb2565](https://github.com/user-attachments/assets/e479280d-e5c5-46a2-b1ec-f14760682cc0)




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Virtual machine setup



    % 67) it will reload and appear the black screen 
        ~ This is normal — it means the system is booting from your encrypted disk for the first time.
    % 68) after load it enter the LVM password (last password you enterd) 
        ? we write it in the step is 37
        ~ When prompted, enter the encryption password (the one you set in Step 37)
        ~ This decrypts your LVM volume group so Debian can boot
![WhatsApp Image 2025-10-23 at 03 04 08_4ae393e2](https://github.com/user-attachments/assets/819f8b9c-0996-469a-8b13-66b22dd2098f)



    % 69) then enter the user name of the user + password (new user) the step  is 9 + 10
        ? Enter your username and password (from steps 9 + 10) to access the system
![WhatsApp Image 2025-10-23 at 03 07 47_913187af](https://github.com/user-attachments/assets/485f0f0f-6cf2-4601-94b4-862e141261e5)


wellcome :


![WhatsApp Image 2025-10-23 at 03 11 46_8cbcae4f](https://github.com/user-attachments/assets/90aa41ed-52fb-45b1-abd4-d37621d77532)



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Virtual machine setup
Virtual Machine Configuration
Implement basic security and service settings within the system itself (from within the terminal after logging in)


     note : all command that use bellow also i write it inside file called sudo command

 1) Installing sudo 

             ^1) Switch to root user
                % write "Su" in the terminal 
                 enter the root password (the one you set in Step 7)
                 ? you add the root password when you setup the virtual machine
            ~ This command allows you to execute commands with superuser (root) privileges
![11](https://github.com/user-attachments/assets/42a1ace3-71a8-4c03-b2b6-1387c01c77b6)
![22](https://github.com/user-attachments/assets/b0b1185d-2f28-4bc6-ac7c-bba064f74a1f)
![333](https://github.com/user-attachments/assets/b2718e8c-41a5-41d7-8a97-7ce7bf38d740)




        ^2) Install sudo package:     
            $ Once we have accessed the root user, 
            $ enter the "apt install sudo" command 
                ~ to install the necessary packages
                ~ This command tells the package manager to install the required packages for sudo
            $ enter "y" to prompted to confirm the installation

![WhatsApp Image 2025-10-24 at 04 37 56_b9a8f149](https://github.com/user-attachments/assets/10a6c531-3ccd-494c-9e60-2e02777bfac3)

        ^ 3) Reboot the system 
            $ write "sudo reboot" command and wait for it to reboot
            ~  We must reboot the machine so the changes can be applied

![WhatsApp Image 2025-10-24 at 04 46 20_564bf47d](https://github.com/user-attachments/assets/a3b38172-c095-4d83-b959-8cf28e76a8eb)


             ^ 4) AFTER reboot we need to Verify installation
            ! 1) write the passowrd of the lvm (encription password)  LVM password (last password you enterd) 
        ? we write it in the step is 37
![WhatsApp Image 2025-10-24 at 04 52 37_6f24ac51](https://github.com/user-attachments/assets/73a870bc-7ce8-4a62-bdc4-52517a3510f4)

        
            2) write the user password again to switch to root user
                ~ enter the new user username + password (the one you set in Step 9 + 10)

![WhatsApp Image 2025-10-24 at 04 54 05_b58a3abd](https://github.com/user-attachments/assets/f63f25c7-1ff5-4b0f-8e83-201c7f3f1583)

     ! 3) convert into root use by wrte 
          // su then the password of the root (the one you set in Step 7)

![WhatsApp Image 2025-10-24 at 04 57 46_45d86e28](https://github.com/user-attachments/assets/c43fe115-9d71-46dd-871a-6ddb307287df)


          
               ! 4) Check sudo version by
                $ write "sudo -V"
            ~ This command will display the sudo version and configuration details if the installation was successful


![WhatsApp Image 2025-10-24 at 05 01 00_5a86d728](https://github.com/user-attachments/assets/6f2d6b83-6e99-4572-9c43-416a5c5364b4)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

2) configuration of user and groups
     
        ^ A) add user
             note :
                  you need to be in the root user to create a users
                       so if not in the root follow the following instruction to Switch to root user
                                  % write "Su" in the terminal 
                                  % enter the root password (the one you set in Step 7)
             how to  Add a new user
                  write the following command  : sudo adduser nameUser
                              ? note :  as a subject add your entra name
                                      If you had already done it will show the same message as is the image.
![WhatsApp Image 2025-10-24 at 05 48 39_dafb1f8e](https://github.com/user-attachments/assets/815624a4-31d5-4e71-9611-0a5bc1701b65)

          

        ^ B) Creating a group (should be done as root user)
             how to  Add a new Group
                  write the following command  :  sudo addgroup NmeGroup
               note: 
                      ? We will create a new group called "user42" as the subject indicates
               note :
                     it will give you message : adding group "nameGroup" (GID ###) or not
                     ~ if you dont have any message like this you can check if the group is created or not by the next step
![WhatsApp Image 2025-10-24 at 05 56 19_90862bb5](https://github.com/user-attachments/assets/037bf382-8a34-4dac-9a09-fe18a9f9b922)


        ^ C) check if the group  is exit or not
              check if the  Group is exit or not:
                  write the following command  :   getent group <groupname>
                  example : getent group user42
            ~ it will give you message like this :
               ? user42:x:1001:
            the meaning of the message is :
                $ user42 : the name of the group
                $ x : a placeholder for the password field (not used here)
                $ 1001 : the GID (Group ID) of the group
            ~ What is GID ?
                % It's the group identifier, in short, Group id
                % Each group in a Linux system has a unique GID assigned to it
                % This number is used by the system to manage permissions and access control for files and processes
![WhatsApp Image 2025-10-24 at 06 06 03_3362f409](https://github.com/user-attachments/assets/69d6f8a1-8993-4e7c-95f3-958c5a776dc4)


        ^ D)add user to the group (should be done as root user)
              how to  Add a user to Group
                  write the following command  :  sudo adduser  <username> <groupname> 
                example : sudo adduser  ralhoura  user42
               note:
                     ? depending on the subject you should add the new user "ralhoura" to the group "user42" + sudo
                      ~ This command adds the user "ralhoura" to the group "user42"
                      ~ This allows the user to inherit the permissions and access rights associated with that group
                      ~ After executing this command, the user "ralhoura" will be a member of the "user42" group
![WhatsApp Image 2025-10-24 at 06 19 24_ab3fa70b](https://github.com/user-attachments/assets/34a2f496-afef-4900-a64c-687f2ef534ae)


     ^ E) Verify group membership
               how to  Verify if the user is inside  Group or not:
                       write the following command  : getent group  NAMEGROUP NAMEGroup ...." 
              You can verify this by checking the group membership of the user
                example : getent group  USER42
                example : getent group sudo USER42 sudo
![WhatsApp Image 2025-10-24 at 06 33 34_f73dc3a8](https://github.com/user-attachments/assets/b2aab366-5cf4-4dca-8241-a348fc32549d)




3) Installing & configuring SSH


         ^ note : if you are not as a root user you nooed to do the following 
                  a) Switch to root user:
                       $ write the "su" command 
                       ~ then  Enter the root password (set in Step 7).
             ? This gives administrative privileges to perform installations and configurations.

//////////////////////////////////////////////////////////////////////////////////////////////////
     
         ^ 1) Update the system:
               how to  update the system
                  write the following command  : sudo apt update
                  ~ This command refreshes the package repositories defined in /etc/apt/sources.list
                  ~ It ensures your system knows about the latest available package versions.

![WhatsApp Image 2025-10-24 at 06 52 31_1da698eb](https://github.com/user-attachments/assets/307af067-70a4-4631-bddb-e66719955938)

    ^ 2) Install OpenSSH server package:
        # sudo apt install openssh-server
        ~ OpenSSH allows secure remote login using the SSH protocol.
        ~ When prompted, type “Y” to confirm installation.
        ~ Wait until the installation process completes.
![WhatsApp Image 2025-11-04 at 10 13 33_b4bad42f](https://github.com/user-attachments/assets/88318a99-1089-4afd-95fe-877647df59bd)

         ^ 3) Verify installation:
        # sudo service ssh status
        ~ You should see: “Active (running)” and “enabled”.
        ? This confirms that SSH is installed and running correctly.
![WhatsApp Image 2025-10-24 at 07 06 24_dee94734](https://github.com/user-attachments/assets/bd5e9f72-8ae7-47a3-b4c8-409f2bae347d)

Configuring SSH
(configure the SSH service by editing its configuration files)

    //! note:
               you should be in root mo if you are not as a root user you need to do the following 
           Switch to root user:
                $ write the "su" command 
                ~ then  Enter the root password (set in Step 7).
      ? This gives administrative privileges to perform installations and configurations.


steps : we wiil edit 2 file (/etc/ssh/sshd_config , 

edit the first file :

     1) You can open it with a text editor such as Nano or VIM.
            # nano /etc/ssh/sshd_config
            or
            # sudo nano /etc/ssh/sshd_config

        ~ To install VIM (optional): if you want to use it 
            # sudo apt install vim 
![WhatsApp Image 2025-11-04 at 11 38 15_71f302cc](https://github.com/user-attachments/assets/9d550854-f380-4c22-8609-f90e7bdd28c3)


     2) Modify the configuration
          note : In the file, lines starting with (#) are commented out
          Uncomment (remove #) and modify the following lines:

            1) Change SSH port:
                # Find “#Port 22” → change to “Port 4242”

            2) Disable root login:
                # Find “#PermitRootLogin prohibit-password”
                # Change to “PermitRootLogin no”
                
       ~ Save and exit:
            * In Nano: Ctrl + X → Y → Enter
            * In VIM:  press Esc → type :wq → Enter

![WhatsApp Image 2025-11-04 at 11 45 16_55dce424](https://github.com/user-attachments/assets/1be7c748-6cb6-4a63-b9e3-f854596e77dd)

edit the second file :

      1) You can open it with a text editor such as Nano or VIM.
        # nano /etc/ssh/ssh_config
        or
        # sudo nano /etc/ssh/ssh_config

    ~ To install VIM (optional): if you want to use it 
        # sudo apt install vim 
        
![WhatsApp Image 2025-11-04 at 12 05 28_bba311dc](https://github.com/user-attachments/assets/04ddc0fd-f069-4720-9825-fa526a458d34)

      2) Modify the configuration
           note : In the file, lines starting with (#) are commented out
           Uncomment (remove #) and modify the following lines:

        1) Change SSH port:
            # Find “#Port 22” → change to “Port 4242”
         
        ~ Save and exit:
             * In Nano: Ctrl + X → Y → Enter
             * In VIM:  press Esc → type :wq → Enter
             
![WhatsApp Image 2025-11-04 at 12 10 18_dcb4eb8e](https://github.com/user-attachments/assets/9bebe2d4-8246-414e-bb3d-224f42537e19)


Restart SSH service to apply changes:
     
        (must restart the ssh service so it can be updated)
        # sudo service ssh restart
        ~ This reloads the SSH configuration with your updated settings

![WhatsApp Image 2025-11-04 at 12 37 20_90616d74](https://github.com/user-attachments/assets/be066684-04e4-4a53-8c34-785537437dfd)

 Verify SSH service status again:
 
        # sudo service ssh status
        ~ Should show “Active (running)” and mention “port 4242”.
        ? If not, review your configuration file for typos.
![WhatsApp Image 2025-11-04 at 12 54 31_78f6c786](https://github.com/user-attachments/assets/4c892001-839e-4696-8dc4-06c781b23c86)

note :

     By following these steps, you will have successfully installed and configured the OpenSSH server on your Debian system.
     This setup allows secure remote access to your machine while adhering to the specified security policies.




Connecting via SSH

      connecting to the virtual machine via SSH from the host machine
      Port Forwarding Configuration (for VirtualBox):

     To connect from host to the virtual machine:

     1) Close the virtual machine (VM)
![WhatsApp Image 2025-11-04 at 13 38 33_ea8a5a46](https://github.com/user-attachments/assets/7eacc303-6b81-4ee3-b752-17b684ae0f16)

                
       2) Select the VM then Settings
![WhatsApp Image 2025-11-04 at 13 40 35_1c31a79a](https://github.com/user-attachments/assets/fe7a6875-3684-4f32-9101-c60617dfd108)

       3)  go to  Network then Expand “Advanced” → Click “Port Forwarding”

![WhatsApp Image 2025-11-04 at 13 44 14_bca41ec5](https://github.com/user-attachments/assets/04511acd-d988-43aa-9514-07b72830b419)

     
       4) Click the (+) icon to add a new rule / Click on the emoji for adding a new rule

![WhatsApp Image 2025-11-04 at 13 47 06_54dc7848](https://github.com/user-attachments/assets/13e3a3d8-7d40-4288-9ccb-e1520c0ac7d3)

     5) in the new rule you have to add the following :
                % Name : SSH
                % Protocol : TCP
                % Host IP :
                % Host Port : 4242 or 4241
                % Guest IP :
                % Guest Port : 4242
                ~ Lastly we will add the 4242 port to host and Guest port. 
                $ Sometimes a connection issue can occur if the ports are the same. 
                $ It would be better if they are different, like 4241 (HOST) : 4242 (GUEST) 
      after adding the information click on OK to save the changes
      
![WhatsApp Image 2025-11-04 at 13 53 10_9cb53151](https://github.com/user-attachments/assets/4c16270a-44f6-4860-a159-0bcfb9699da4)


      6) after adding the information click on OK to save the changes
![WhatsApp Image 2025-11-04 at 13 57 51_1ecd559a](https://github.com/user-attachments/assets/4d0a7d4b-34a7-4873-968d-b11a9181f605)

Connect from Host to Virtual Machine:

     1) open the terminal in your host machine
![WhatsApp Image 2025-11-05 at 14 14 48_f598b6a9](https://github.com/user-attachments/assets/74f5b035-9d68-4969-b860-f716d14761d1)


     2) To connect to the virtual machine from the host machine, open a terminal on the host and type :
             ssh <username>@localhost -p #PortOfHost  (non root user)
               replace <username> with the username you created during the VM setup (step 9)
               Enter your user password when prompted (password the new user (step 10))

![WhatsApp Image 2025-11-05 at 14 53 55_fc523528](https://github.com/user-attachments/assets/4e121901-4610-4b3a-8254-aaec725fc9d6)
    

            ~ This command initiates an SSH connection to the virtual machine running on localhost at port PortOfHost
            ! Once authenticated, the login prompt will appear in green prompt (login shell), indicating a successful connection.

![WhatsApp Image 2025-11-05 at 15 05 39_c232ed4b](https://github.com/user-attachments/assets/3e460a0f-4446-4555-9ba8-72084fd97f2a)



5) Installing & configuring (UFW) Firewall


 Note:
 
           # UFW stands for "Uncomplicated Firewall" — it’s a simple tool used to manage the firewall in Linux systems easily through simple commands
           # Before starting, make sure you have administrative (root) privileges
                     Switch to root user:
                            su
                           Then enter the root password (the one you set in Step 7)
             This grants you permission to install software and make system changes

steps :

        
Step 1: Install UFW package

          sudo apt install ufw
        # This command installs the Uncomplicated Firewall on your Debian system
        # It will download and set up UFW using your internet connection
![WhatsApp Image 2025-11-05 at 15 33 32_6909951b](https://github.com/user-attachments/assets/a3514bb8-18bd-4858-8828-024fcc5a61c9)



Step 2: Confirm installation

        # Type "y" and press Enter to confirm the installation process
        # After this, UFW will be installed but not yet active

![WhatsApp Image 2025-11-05 at 15 33 45_a838c4b7](https://github.com/user-attachments/assets/c94107ff-9e0d-44ac-8f13-010cee60a09f)


Step 3: Enable the firewall

        sudo ufw enable
        # This activates UFW and begins filtering network traffic according to your defined rules
        # Once enabled the firewall:
            * All incoming connections are denied by default
            * All outgoing connections are allowed by default
        # You’ll see a message confirming: "Firewall is active and enabled on system startup"
![WhatsApp Image 2025-11-05 at 15 37 27_e111de3a](https://github.com/user-attachments/assets/c5c9880a-1902-4026-a68c-769a39f4ca3e)


Step 4: Allow a specific port (4242)

        Since SSH will use port 4242 (based on your previous setup), we must allow it:
                 sudo ufw allow 4242
        This tells the firewall to allow incoming SSH connections on port 4242
        If you forget this step, SSH access from your host machine will be blocked

![WhatsApp Image 2025-11-05 at 15 48 37_d529246d](https://github.com/user-attachments/assets/db0e9294-2db9-4e9a-b53f-7b4154ae10ce)


Step 5: Check the firewall status , Check current firewall rules
                    
          sudo ufw status
        ~ This command shows whether the firewall is active and which ports are open.
![WhatsApp Image 2025-11-05 at 15 49 01_5e106ff7](https://github.com/user-attachments/assets/21d33a1b-d950-4737-88ff-5adb20338433)


Result:

        # Your Debian firewall is now active and filtering network traffic.
        # Port 4242 is open for SSH connections.
        # All other ports are securely blocked by default.


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

6) sudo policies 


Note:

        You must have root privileges to edit sudo configuration files
        If you are not currently the root user, switch to root mode by:
                  su
             Then enter the root password (set in Step 7)
        This grants you administrative access to perform system-wide configurations

Steps for Configuring SUDO Policies :


Step 1: Create the configuration file

        write the following command :
             touch /etc/sudoers.d/sudo_config
        This file will store all the custom sudo policies
        It is safer to add custom sudo rules here instead of editing the main file (/etc/sudoers)

![WhatsApp Image 2025-11-05 at 20 01 03_7ad1dce5](https://github.com/user-attachments/assets/fad2574d-6b2d-484a-9122-079f54a44c84)


Step 2: Create the logging directory

        write the following command :
                  mkdir /var/log/sudo
        This directory will store logs for all sudo commands — including inputs and outputs.
        It allows tracking of all sudo activity for auditing or debugging purposes.
![WhatsApp Image 2025-11-05 at 20 05 03_b5306ced](https://github.com/user-attachments/assets/4fe39015-f847-4b01-aa4d-4cc29895dcf5)


Step 3: Edit the sudo configuration file

      write the following command :
              nano /etc/sudoers.d/sudo_config
              
     Opens the file for editing using the Nano text editor
     You can also use “visudo -f /etc/sudoers.d/sudo_config” for safer editing 
          (it checks syntax errors before saving).

![WhatsApp Image 2025-11-05 at 20 10 47_a7e2ad1f](https://github.com/user-attachments/assets/be707ae5-819d-4f4f-be9a-e782b55237ce)




Step 4: Add the following configuration lines

        ! note: Each line defines a security or logging policy for sudo behavior.
            Defaults  password_tries=3
            Defaults  failed_password_message="The password is incorrect"
            Defaults  log_file="/var/log/sudo/sudo_config"
            Defaults  log_input, log_output
            Defaults  input_output_log_dir="/var/log/sudo"
            Defaults  requiretty
            Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"

![WhatsApp Image 2025-11-05 at 20 23 02_b2e3016f](https://github.com/user-attachments/assets/bf668e52-455a-4d9b-ab83-b7d93fb492eb)


Step 5: Save and exit the editor

        * In Nano:
            Ctrl + X → Y → Enter
        * In Visudo:
            Esc → :wq → Enter
        The file is now saved and active.

Step 6: Verify configuration

         sudo -l
         Displays the list of current sudo rules applied to your user.
         You can also check logs using:
            # tail -f /etc/sudoers.d/sudo_config

![WhatsApp Image 2025-11-05 at 20 28 40_404d9245](https://github.com/user-attachments/assets/140fe921-00ba-4157-ae9c-ecfacfb3d11f)


   
//////////////////////////////////////////////////////////////////////////////////////////////////////

complete the following 


////////////////////////////////////////////////////////////////////////////////////////////////////////






7) password policy 🔑

8) Script

9) Crontab

10) Signature.txt



