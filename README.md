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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ac2c8bed-c727-4db7-9e21-2303dfd0aada" />


             click on new button to create new virtual machine (VM)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/9a417410-ab81-438c-9f67-69142a7e0ae2" />

             enter info to create virtual machine (VM) : 
                    Name  + folder (location) + Type + version
                     note for location : the space you need 5GB  so you can 
                         put the project inside 2 folder just (goinfre or sgonifre)
                          sgonifre is bigger size than goinfre 
                     note for type : (linux)
                     note for version : Debian (64-bit)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7be84fd1-6458-4153-bcd5-53d671fa8813" />


             Allocate RAM memory
                 Select the amount of RAM memory to reserve for the virtual machine
                 Recommended: 1024MB (1GB) minimum, 2048MB (2GB) for better performance

             Allocate the processors:
                 Select the amount of processors  to use it in the virtual machine  
                 recommended : 2 CPUs
                 note : you can allocate momory + processor as you want 
              after finish allocate memry + processor enter on the next
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/712c75c7-8b7c-48fc-b126-71e61ff2c2ae" />


             Virtual Hard Disk:
                 choose the option : create a virtual hard disk now 
                 choose the disk size : 20GB  by default  , you can write another value but prefare less than 30 
                i will make it as a default
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/95169a3b-37e4-44f9-abcf-f18a30a025f7" />


          know you have summary of vm that you created it
            click on the  finish 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/23019311-7cce-4094-bdfb-1e4bb4cbef1e" />


     4) select the Virtual Machine (VM) that created 
     5) choose setting
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0be93c2e-b108-4d64-83ef-bd34127042bc" />

    
         storage 
         select Empty word that is bellow controller :IDE
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4f432c6e-89e3-4318-af10-3a166ea3b3b0" />


         Adds optical drive (click on circle button)
         choose "choose/create a virtual optical disk"
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b568d0ef-60c1-4dab-bf28-36f0b688dcd4" />


            $ add 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a2176a74-8e1d-4b5e-8961-70f85ac0a34a" />


            $ add the os that you download it 
            $ select it 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1af29bed-210f-464a-b757-bf5da7ba513c" />


            $ choose
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e0225839-48c0-4c79-8ac1-e5a1d40f6c5b" />

  
          click on  ok  
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d9153e99-795d-4c36-a903-700459e1be34" />


      select your machine and start the machine (it will start your vm)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4e0986b8-6cf3-4593-a28c-870b61d46724" />


     it will load yor vm
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4578afba-f207-4831-aab4-6aa7173a6cca" />


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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/bce1bdf1-997a-4c56-a1bf-f188daba50ef" />

                  % 45) Volume group 
                      ? choose "LVMGroup"
                      ~ We will start by choosing the group where we want them to be created
                      ~ We select the only one available (the one we just created)
                      # That’s the group you created earlier, and it’s where all your logical volumes will be stored
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c794d124-9eb6-4cf4-b7bc-503a7aa4b70d" />


                  % 46) Logical volume name : write "namefile"
                      write "root"
                      ~ When prompted for the name, type one of the logical volume names (e.g., root, swap, home, etc.)
                      ~ The order of creation should follow the same sequence as described in the project:
                      * This name determines where the mount point will be (for example, root will later be mounted as /)
                              # Start with root and end with var/log
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e627ee34-9fd0-4162-8973-45f7d4df76f5" />


                  % 47) Logical volume size :
                      ? write "#GB" or #g
                      ~ Size, as the subject indicates, will be #GB
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/34742782-fa0b-460d-a5ee-65cd605902a0" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for swap :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6fbf941e-76f1-4cbe-a0d9-a0e490edba95" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/94163ea2-7c3f-47a0-81ab-b35b97680f70" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0f8a6934-d93a-4227-b5e5-635cd2a048f4" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/13cbe600-ab51-44cf-a33f-5f538c287194" />


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
               for home :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ca74f6ec-3b5b-4dd9-ad0a-ac09d8016555" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/69b3ce29-732b-4605-8856-ef104602594c" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f33d4b4e-57d8-4c91-811e-a80b8a93f216" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/42c9e684-3885-438a-9054-ce7c2a49c1fc" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for var :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8985fe53-43fd-4c51-a304-dfe0eda226a1" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4e777929-996e-4286-9855-f405f4fd6745" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7a32181b-6311-4152-8641-56696cc27de9" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/37c54851-5fa1-4aa9-9d3d-a38fa1493107" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for srv:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e906b5fa-8c4b-4dc8-85c3-847150786415" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6d889e4f-11eb-482c-8629-79ff476cebfb" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/653cff5e-cd2b-4058-950e-7a96dc242381" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/3f8268ec-c4d7-4ee6-8fd2-5ec966bce011" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for tmp:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b689392f-db23-4f61-b2c0-044a3ed915d4" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/61c4e55d-59e0-45c5-aaa8-d0e8fb02b55a" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/efc110c1-bbae-4a33-81cc-420e131d5f4e" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8ad979b4-99a4-4dc6-8d0d-9ffa43df86ed" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for var-log :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/fdd686c6-9b64-4567-9242-5f5946cb483d" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b3e744b2-30a4-4d8b-955a-2a9ff2a704d0" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d273cba7-1dfd-4cec-8e42-9d0be27fb4f0" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0f617cbb-714d-4408-a96b-b8015af1726c" />



         % 48) LVM configuration details to konw the details 
        ~ After creating all logical volumes
        ? choose "Display confiuration details" to see all details
        ~ This will show you all the logical volumes created under 
            ~ LVMGroup — their names, sizes, and status — to confirm everything is correct
          after display it enter continue
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e1cbe696-a505-472d-a64a-7d854dceadb1" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ffba13cd-b57a-42da-aa35-86dfc76d6b70" />


    % 49) LVM configuration action
        ? choose "finish"
        # your setup now looks like:
            # Physical disk -> Encrypted partition -> Volume Group (LVMGroup) -> Logical Volumes.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/78d459a2-3528-4881-9d78-0ee20c36b15b" />

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ! you will do the configure all the LVM file (root , swap , home , var , srv , tmp ,var-log)
    * This means you’ve finished creating all your logical volumes inside the volume group LVMGroup
    * Now, you’ll configure each one of them (format type, mount point, etc.).
    ! You will repeat the next steps (50 → 55) for each of the following logical volumes:
    ! root, swap, home, var, srv, tmp, var--log
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  

        % 50) configure iscsi volumes
            ? go to the line after the volume  info 
            ? its like : #1  #.#GB enter to it
            ~ Use the arrow keys to highlight one logical volume (start with root),then press Enter to configure it
            here we will configure home volume
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f24e5e08-04a6-4e28-af73-fc19921271e6" />


        % 51) partition settings
            ? Select the option "Use as: do not use"
            ~ You need to change this to define how this partition will be used
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/02b90476-d742-488b-beee-93afa1385811" />


        % 52) how to use this partition:
            ? choose "Ext4 journaling file system"
            ~ "Ext4 journaling file system" is the standard Linux file system for normal 
            ~ partitions like /, /home, /var, etc.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/17dc9138-a578-4f16-a5fc-457dc415225c" />


        % 53) partition settings
            ? After choosing the file system select "Mount point : none"
            ~ For normal volumes, you’ll pick a mount point from the list
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0054b8ad-e8b7-461a-956d-c5ff62806b83" />


        % 54) Mount point for this partition
            ? choose "/nameFile - name file depending the file you choose"
            for home : choose /home
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4d03f7e6-d8c5-4d52-bba6-a7f5bb13db83" />


        % 55) partition settings 
        ~ After setting the correct mount point,
            ? choose "Done setting up the partition"
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d1d86d2d-8ea7-48b1-ac28-ffe036685cb3" />

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for root :
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/58f05bdc-6890-422a-a9fe-c40c35cb2286" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/9886dc52-e65c-433d-989e-0c8e4c0c40d3" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e17254f6-8401-4ee3-b3e1-9a731bfff147" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7c1741f5-2b13-472c-9f18-d41d0e03cd38" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ba80b642-ee2c-42c2-9707-c18cd6838fda" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/cabc85fe-84f1-4f65-9892-094ed3aaedc2" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for srv:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/dbdb33ca-5eab-4d13-ab9b-d3b68a2400eb" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0a4c6228-6219-4eea-9ecb-6617b96ea67b" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/abe10e80-5f9e-46c3-a3a4-780cd3f6587b" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5d252d3d-2a74-4ba5-8d61-9a740bbe67d6" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/14b3b2fa-0a2e-4a45-a834-71b32ebbf799" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4ea79f06-83a9-43ba-8f44-584bb77b37a7" />


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for swap :
               (we will make an exception because the file system will be different)
                # For the swap logical volume, instead of “Ext4,”
                # choose “swap area”, then select “Done setting up the partition.”
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/fb69b25c-f3e2-4d09-b83f-01e0673625b8" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/628bf28a-5193-494f-b823-3ffe6415ccca" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/fdd15ff8-387d-4b0c-a1bd-db64e780ee36" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/718b3cb3-630a-4c09-a610-2879b959ab4e" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for tmp:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c31c590f-c02f-4f95-8060-864173660fcc" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b0e3b051-682a-42ea-baef-57873ff70f8f" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/79a4b87d-b642-4e1c-b0bf-f2b235d5b759" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e1ef4a09-a321-4e36-b2c0-a213f1ea3d8c" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/43fa6d74-b3b0-40f3-a0e2-6d9a28b904c1" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/07288596-3173-45b4-83d3-8527381f7bec" />


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

               for var :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5d5464ef-e315-4c1d-bce3-bc518902bb77" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/fb38cff3-3497-460a-958b-c5f2b2be7e8e" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/bae7e6e9-e0cc-472c-8547-72ed7e698bae" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8ad89d9a-cb40-4251-9cb5-c3b4be0b088a" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/82ef32f0-c067-4604-8d7e-fc69dab01dd0" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f15ff7a8-9c5b-484f-8b7f-854e110c15d4" />


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
               for var-log :  
               # select "Enter manually" 
               # enter the name (var/log)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0cd74214-0232-4785-b83c-f3b536a5e09b" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5289f42a-23c3-4683-8c3d-31441c2bda0a" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/35652acc-cf47-4464-bc1a-4ca5f9695f2a" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e4d57e44-e40a-458a-b9e9-7e1e3ec09580" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/2b21729e-4525-47c3-acd1-51e9010e3815" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d2c5289d-da01-49e7-ba3a-df1561d75f5c" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e61841b1-56f1-4cfa-a063-6f1386bb6902" />


/////////////////////////////////////////////////////////////////////////////////////////////

Now, assign the correct mount point depending on the name of the volume

            Logical Volume	    Mount Point
                root               /
                home               /home
                var                /var
                srv                /srv
                tmp                /tmp
                var-log           /var/log
        ~ This saves your configuration for that logical volume.
        ! you will doing all step for the file 
            # Once done, every logical volume will have:
                ? Its correct file system (Ext4 or Swap)
                ? Its correct mount point (/, /home, /var, etc.)
                ? And be ready for installation
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    % 56) configure  ISCSI volumes 
        ? choose "finish partitioning and write changes to disk"
        ~ This means you have completed all your partition setup (LVM, encryption, etc.)
        ~ and you are ready to apply these changes permanently to the disk
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4aa69124-4a20-4ea0-9713-4ae632f4f796" />


    % 57) Confirm changes , configure the package manager
        ? choose "yes"
        ~ This confirms writing all partition and file system configurations to the disk.
        ~ After this step, the actual installation of the base system will begin. 
        ~ This allows the Debian installer to set up the APT package manager,
        ~ which is responsible for installing and updating software packages later
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/09fe2ab6-9e0d-46eb-bdfd-90b7d2799e06" />


       % 58) scan extra installation media 
             ? choose "no"
             ~ This means you don’t have any additional installation media (like a DVD or USB with extra packages)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f00739bd-5c60-44e3-a58e-f282c756e686" />


    % 59) Debian archive mirror country
        ? choose "United states"
        ~ You’re selecting the country closest to you or where the fastest mirror is located.
        ~ (You can choose any, but “United States” is reliable.)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a2237e1a-42bc-4729-ac54-dcca87112d2e" />


    % 60) Debian archive mirror 
        ? choose "deb.debian.org"
        ~ This is the main Debian repository where packages are downloaded from.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d4d9d227-1d33-4e54-a9ae-5e6a4a9e3558" />


    % 61) HTTP proxy information 
        ? Leave this field empty/blank and continue (blank for none)
        ~ (Only fill this if your network uses a proxy server — most users don’t.)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/21acbbd9-dbd7-435d-af99-67eb6b9bd0d2" />


        % 62) participate in the package usage survey?
             ? chhose "No"
             ~ We do not want developers to see our statistics
             ~ This disables sending anonymous software usage statistics to Debian developers.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/07c52d7a-0247-430d-a16b-f52fc0eecc28" />

        
    % 63) choose software to install
        ? remove all software options (with the space bar) and click Continue since in the subject they are forbidden
        # Unselect all software options using the Space bar, then click Continue
        ~ According to the project instructions, installing any preconfigured 
        ~ software (like desktop environments) is forbidden so We only install the bare minimum base system.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5f7f050a-c73f-475b-9957-12c5007c67a3" />


        % 64) install the GRUB boot loader to your primary drive?
             ? choose "yes"
             ~ GRUB is the program that lets your system boot Debian at startup
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/021093f0-e298-4bd6-99a8-7eaeda4bfc3a" />


    % 65) Device for boot loader installation
        ?choose "/dev/sda (ata-VBOX_HARDDISK_###############)"
        # This installs the boot loader on your main virtual hard drive
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/96ad5964-4428-4a54-9a82-30101f8934f8" />


    % 66) please choose <Continue> to reboot
        ? choose "continue"
        ~ Your installation is now finished — Debian will restart
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0daf2388-7cd9-46bc-80e2-255432b85e45" />


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

--------------------------------------------------- Virtual machine setup ----------------------------------------------
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    % 67) it will reload and appear the black screen 
        ~ This is normal — it means the system is booting from your encrypted disk for the first time
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/849e99a1-b5ac-43cb-9387-3d97124ad51b" />

    % 68) after load it enter the LVM password (last password you enterd) 
        ? we write it in the step is 37
        ~ When prompted, enter the encryption password (the one you set in Step 37)
        ~ This decrypts your LVM volume group so Debian can boot
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/99dc3ffe-c341-4e37-bbe6-bc257193298d" />


    % 69) then enter the user name of the user + password (new user) the step  is 9 + 10
        ? Enter your username and password (from steps 9 + 10) to access the system
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6d3d4497-1036-4803-b462-66272d08bd77" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4f9fe881-1bcf-44b4-8efb-d2721910311b" />


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Virtual machine setup
Virtual Machine Configuration
Implement basic security and service settings within the system itself (from within the terminal after logging in)
note : all command that use bellow also i write it inside file called sudo command
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 1) Installing sudo 

             ^1) Switch to root user
                % write "Su" in the terminal 
                 enter the root password (the one you set in Step 7)
                 ? you add the root password when you setup the virtual machine
            ~ This command allows you to execute commands with superuser (root) privileges
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/5df81377-6a5b-4794-a470-ea655bbf8c22" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/3967772b-ae4a-4c58-9fe4-92d4e426be83" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/b96c57ad-732e-438d-a7a8-3a4a88c07c62" />


        ^2) Install sudo package:     
            $ Once we have accessed the root user, 
            $ enter the "apt install sudo" command 
                ~ to install the necessary packages
                ~ This command tells the package manager to install the required packages for sudo
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d6a01fd4-a69c-4bc7-b07f-3e4e1eaefdb1" />


        ^ 3) Reboot the system 
            $ write "sudo reboot" command and wait for it to reboot
            ~  We must reboot the machine so the changes can be applied
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d5232a18-b76c-4223-a1a5-b3be44129a6e" />


             ^ 4) AFTER reboot we need to Verify installation
                      ! a) write the passowrd of the lvm (encription password)  LVM password (last password you enterd) 
                  ? we write it in the step is 37
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8dbbceae-39d9-4619-a0c0-00945f5701ce" />

        
                      b) write the user password again to switch to root user
                          ~ enter the new user username + password (the one you set in Step 9 + 10)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e1ba07cf-3e7b-46a6-aceb-bde37ce6706d" />


                     c) convert into root use by wrte 
                         // su then the password of the root (the one you set in Step 7)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ae37defa-a1a7-4bd0-9a36-e14d858667a3" />

          
                       d) Check sudo version by
                               $ write "sudo -V"
            ~ This command will display the sudo version and configuration details if the installation was successful
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c4df1303-190d-4660-acdd-bd80f335a74e" />


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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/dcb8eef9-dad5-44e8-8d81-cf5fa81b1da4" />

          
        ^ B) Creating a group (should be done as root user)
             how to  Add a new Group
                  write the following command  :  sudo addgroup NmeGroup
               note: 
                      ? We will create a new group called "user42" as the subject indicates
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/86ecdb54-2b6d-4c05-8f35-2415ba80bb2d" />


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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f57583d4-d1c9-48c4-b05a-208e8c2081c8" />


        ^ D)add user to the group (should be done as root user)
              how to  Add a user to Group
                  write the following command  :  sudo adduser  <username> <groupname> 
                example : sudo adduser  ralhoura  user42
               note:
                     ? depending on the subject you should add the new user "ralhoura" to the group "user42" + sudo
                      ~ This command adds the user "ralhoura" to the group "user42"
                      ~ This allows the user to inherit the permissions and access rights associated with that group
                      ~ After executing this command, the user "ralhoura" will be a member of the "user42" group
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/a6d6bea1-5948-4d5e-a9a7-9649e61b5e9a" />


     ^ E) Verify group membership
               how to  Verify if the user is inside  Group or not:
                       write the following command  : getent group  NAMEGROUP NAMEGroup ...." 
              You can verify this by checking the group membership of the user
                example : getent group  user42
                example : getent group sudo user42 sudo
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f2414edb-cb4a-41f7-a9f9-0898fe38ac0b" />


3) Installing & configuring SSH


/////////////////////////////////////////////////////////////////////////////////////////////////

 note : if you are not as a root user you need to do the following 
 
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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/ddc70857-de65-45ee-838e-8fa272915688" />


    ^ 2) Install OpenSSH server package:
        # sudo apt install openssh-server
        ~ OpenSSH allows secure remote login using the SSH protocol.
        ~ When prompted, type “Y” to confirm installation.
        ~ Wait until the installation process completes.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/187418a2-e5b7-47af-b5e8-b576bb2741db" />


         ^ 3) Verify installation:
        # sudo service ssh status
        ~ You should see: “Active (running)” and “enabled”.
        ? This confirms that SSH is installed and running correctly.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7a50abe6-4683-4278-b965-5752422d023c" />


Configuring SSH
(configure the SSH service by editing its configuration files)


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

note:
    
               you should be in root mode if you are not as a root user you need to do the following 
           Switch to root user:
                $ write the "su" command 
                ~ then  Enter the root password (set in Step 7).
      ? This gives administrative privileges to perform installations and configurations.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


steps : we wiil edit 2 file (/etc/ssh/sshd_config  , /etc/ssh/ssh_config )


edit the first file :


     1) You can open it with a text editor such as Nano or VIM.
            # nano /etc/ssh/sshd_config
            or
            # sudo nano /etc/ssh/sshd_config

        ~ To install VIM (optional): if you want to use it 
            # sudo apt install vim 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/aa739fc3-0ece-4ab1-8572-6e5d1c0688da" />


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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4c6f4512-543e-462f-811b-8c510ed2bd79" />


edit the second file :


      1) You can open it with a text editor such as Nano or VIM.
        # nano /etc/ssh/ssh_config
        or
        # sudo nano /etc/ssh/ssh_config

    ~ To install VIM (optional): if you want to use it 
        # sudo apt install vim 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/57a040c3-5d77-41b0-b666-8e252cb5645c" />


      2) Modify the configuration
           note : In the file, lines starting with (#) are commented out
           Uncomment (remove #) and modify the following lines:

        1) Change SSH port:
            # Find “#Port 22” → change to “Port 4242”
         
        ~ Save and exit:
             * In Nano: Ctrl + X → Y → Enter
             * In VIM:  press Esc → type :wq → Enter
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/9e56bc18-eea5-414a-9187-a463f68d311e" />
             

Restart SSH service to apply changes:
     
        (must restart the ssh service so it can be updated)
        # sudo service ssh restart
        ~ This reloads the SSH configuration with your updated settings
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1e0bf47e-20dd-4fcf-b179-11edeac2136a" />


 Verify SSH service status again:
 
        # sudo service ssh status
        ~ Should show “Active (running)” and mention “port 4242”.
        ? If not, review your configuration file for typos.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f76f5513-8fbd-41aa-b0c4-4212861c3988" />


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

note :

     By following these steps, you will have successfully installed and configured the OpenSSH server on your Debian system.
     This setup allows secure remote access to your machine while adhering to the specified security policies.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


4) Connecting via SSH

     
           connecting to the virtual machine via SSH from the host machine
           Port Forwarding Configuration (for VirtualBox):
           To connect from host to the virtual machine:


            a) Close the virtual machine (VM)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/2c9d784b-6c28-46d8-971e-c1b8b3eb1b0c" />

                
            b) Select the VM then Settings
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e692b423-2c3f-48c2-818e-bc3dd33625a0" />


            c)  go to  Network then Expand “Advanced” → Click “Port Forwarding”
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/e183c590-e64e-4444-8ca5-751bd70b89b9" />


            d) Click the (+) icon to add a new rule / Click on the emoji for adding a new rule
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8e7e3cbf-e6ae-42a7-9580-c0f70dfe1dda" />


          e) in the new rule you have to add the following :
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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/4372abe8-df4f-431d-9ed1-2d3a61b7d044" />
      

          f) after adding the information click on OK to save the changes
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/00c7ac92-e2fb-405a-8119-b58e3a3f230c" />


5) Connect from Host to Virtual Machine:

     NOTE :

          YOU should open the vm before connect



          1) open the terminal in your host machine
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/21e01b02-4452-46bf-9b3b-721f058dd7ab" />


          2) To connect to the virtual machine from the host machine, open a terminal on the host and type :
                  ssh <username>@localhost -p #PortOfHost  (non root user)
                    replace <username> with the username you created during the VM setup (step 9)
                    Enter your user password when prompted (password the new user (step 10))
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/57167a15-5b33-4cfa-8ddf-d30bc5263550" />


          ~ This command initiates an SSH connection to the virtual machine running on localhost at port PortOfHost
          ! Once authenticated, the login prompt will appear in green prompt (login shell), indicating a successful connection.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/3340006e-d76d-4443-a0dc-aba0058b0544" />


note : if you have a problem like : 

     The error message you received indicates that the ECDSA key for the host localhost on port 4241 has changed since 
     the last time you connected, and your SSH client is configured to perform strict host key checking, which prevents 
     the connection due to this change.
     
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/dac9a562-a3e4-4cb6-824c-e102ec3e307e" />


do the foloowing steps to solve it : Go on and type in your terminal
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1160ba8c-6447-44a5-b94b-170522bdd109" />

          

6) Installing & configuring (UFW) Firewall


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 Note:
 
           # UFW stands for "Uncomplicated Firewall" — it’s a simple tool used to manage the firewall in Linux systems easily through simple commands
           # Before starting, make sure you have administrative (root) privileges
                     Switch to root user:
                            su
                           Then enter the root password (the one you set in Step 7)
             This grants you permission to install software and make system changes
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Step 1: Install UFW package

          sudo apt install ufw
        # This command installs the Uncomplicated Firewall on your Debian system
        # It will download and set up UFW using your internet connection
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8ca7a2db-7333-418a-ac78-e0a1ccf5726f" />


Step 2: Confirm installation

        # Type "y" and press Enter to confirm the installation process
        # After this, UFW will be installed but not yet active
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/8e14e9f0-bc82-49b0-a1c8-8dc7d20c5671" />


Step 3: Enable the firewall

        sudo ufw enable
        # This activates UFW and begins filtering network traffic according to your defined rules
        # Once enabled the firewall:
            * All incoming connections are denied by default
            * All outgoing connections are allowed by default
        # You’ll see a message confirming: "Firewall is active and enabled on system startup"
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/248719d8-66f0-441e-bdf7-75ee3c7f69bb" />


Step 4: Allow a new ssh port / (4242)

        Since SSH will use port 4242 (based on your previous setup), we must allow it:
                 sudo ufw allow 4242
        This tells the firewall to allow incoming SSH connections on port 4242
        If you forget this step, SSH access from your host machine will be blocked
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/14aa6380-f618-47c4-b689-7ce9d5f2d8a2" />


Step 5: Check the firewall status , Check current firewall rules
                    
          sudo ufw status
        ~ This command shows whether the firewall is active and which ports are open.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6a63ab0b-94e4-48a4-b0f9-195a3d3c3b8e" />


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Result:

        # Your Debian firewall is now active and filtering network traffic
        # Port 4242 is open for SSH connections
        # All other ports are securely blocked by default
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


7) sudo policies 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Note:

        You must have root privileges to edit sudo configuration files
        If you are not currently the root user, switch to root mode by:
                  su
             Then enter the root password (set in Step 7)
        This grants you administrative access to perform system-wide configurations
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Steps for Configuring SUDO Policies :


Step 1: Create the configuration file

        write the following command :
             touch /etc/sudoers.d/sudo_config
        This file will store all the custom sudo policies
        It is safer to add custom sudo rules here instead of editing the main file (/etc/sudoers)
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/d6154bfc-19b1-45d8-86cd-e6fe4d5b2012" />


Step 2: Create the logging directory

        write the following command :
                  mkdir /var/log/sudo
        This directory will store logs for all sudo commands — including inputs and outputs.
        It allows tracking of all sudo activity for auditing or debugging purposes.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f5635225-4c80-48eb-b1d0-d092bfc9e868" />


Step 3: Edit the sudo configuration file

      write the following command :
              nano /etc/sudoers.d/sudo_config
              
     Opens the file for editing using the Nano text editor
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/425e8fde-43e9-48ac-a646-a50fac2a0359" />


Step 4: Add the following configuration lines

        ! note: Each line defines a security or logging policy for sudo behavior.
            Defaults  passwd_tries=3
            Defaults  badpass_message="The password is incorrect"
            Defaults  logfile="/var/log/sudo/sudo_config"
            Defaults  log_input, log_output
            Defaults  iolog_dir="/var/log/sudo"
            Defaults  requiretty
            Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/968e4139-0fd0-4780-a9d8-cdd3e0ed84ef" />

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
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/7c8ea32a-8fa0-42f3-b6a0-0a6a90006b31" />


8) password policy Configuration (Password Aging + Complexity Rules)

     
Overview:

             In this section, you will configure:
                 1) Password expiration rules (PASS_MAX_DAYS / PASS_MIN_DAYS)
                 2) Password quality rules using libpam-pwquality
              These steps are required to enforce strict password security based on the project instructions


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Note:

        You must have root privileges to edit sudo configuration files
        If you are not currently the root user, switch to root mode by:
                  su
             Then enter the root password (set in Step 7)
        This grants you administrative access to perform system-wide configurations
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   


a) Setting Up Basic Password Expiration Rules

     
Step 1: Edit login definitions file

             nano /etc/login.defs
             ~ This file controls system-wide password aging rules.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/049b49f1-d029-4dc3-8acf-46db56c3a8ec" />

     
Step 2: Modify password parameters


As required in the subject:

                 # Set maximum password age = 30 days
                 # Set minimum password age = 2 days

     
Find and change the following lines:

                 BEFORE:
                     PASS_MAX_DAYS    99999
                     PASS_MIN_DAYS    0
                     
                 AFTER:
                     PASS_MAX_DAYS    30
                     PASS_MIN_DAYS    2

     
Important:

                 # These settings force users to update passwords regularly
                 # Users must wait 2 days before changing the password again
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/9504e8bf-66c3-4251-a925-6fd352ab0ff4" />


Step 3: Save and exit the editor

             # Nano:
                 Ctrl + X → Y → Enter
             # Vim:
                 Esc → :wq → Enter

     
b) Installing Password Quality Enforcement (libpam-pwquality)

     
Step 1: Install password quality library


         sudo apt install libpam-pwquality
        This installs the PAM module responsible for checking password strength
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/2223c5a7-a033-4571-8a5f-fa4c354dca17" />

     
Step 2: Confirm installation

             // y
             ~ Wait for installation to complete.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0c09789c-743f-482d-9021-71620540f0e7" />

     
c) Configuring Password Complexity Rules (PAM)

     
Step 1: Edit the PAM password configuration file

             nano /etc/pam.d/common-password
             This file controls how passwords are validated during creation or update
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/13b6ed35-2e61-4807-ba86-148b6c5ba887" />


Step 2: Add the required complexity rules

Find the line that starts with:

                 password        requisite       pam_pwquality.so retry=3

     
Then append the following options AFTER retry=3:
     
                 minlen=10 \
                 ucredit=-1 \
                 lcredit=-1 \
                 dcredit=-1 \
                 maxrepeat=3 \
                 reject_username \
                 difok=7 \
                 enforce_for_root
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/354e8b0c-1ca5-42ba-9318-4519a336fe95" />


Explanation of each rule:

                 minlen=10
                     // Minimum total password length must be 10 characters
                 ucredit=-1
                     // Requires at least 1 uppercase letter
                 lcredit=-1
                     // Requires at least 1 lowercase lette.
                 dcredit=-1
                     // Requires at least 1 digit
                 maxrepeat=3
                     // Prevents the user from repeating the same character more than 3 times in a row
                     // Example: "RRR" is allowed, "RRRR" is NOT
                 reject_username
                     // The password cannot contain the username
                 difok=7
                     // At least 7 characters must be different from the old password
                 enforce_for_root
                     // These password quality rules also apply to ROOT (important for security)

     
Step 3: Save and exit

             * Nano: Ctrl + X → Y → Enter
             * Vim: Esc → :wq → Enter
     

9) Script

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Note:

        You must have root privileges to edit sudo configuration files
        If you are not currently the root user, switch to root mode by:
                  su
             Then enter the root password (set in Step 7)
        This grants you administrative access to perform system-wide configurations
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  


Step 1 : Create and open the script file

        nano monitoring.sh
        # This opens a new file called "monitoring.sh" where you will place all the script commands.

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/f71ac8e4-0c05-48f4-a5b9-ccb4e90ab3a2" />

Step 2 : Add the script content

        ? Note:
            All command explanations are inside their specific sections
            in the README (Architecture, RAM, Disk, CPU, etc.)
            
//////////////////////////////////////////////////////////////////////////

            #!/bin/bash

            # ARCH
            arch=$(uname -a)

            # CPU PHYSICAL
            cpuf=$(lscpu | grep 'Socket(s):' | awk '{print $2}')

            # CPU VIRTUAL
            cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

            # RAM
            ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
            ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
            ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

            # DISK
            disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
            disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
            disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

            # CPU LOAD
            cpul=$(vmstat 1 4 | tail -1 | awk '{printf $15}')
            cpu_op=$(expr 100 - $cpul)
            cpu_fin=$(printf "%.1f" $cpu_op)

            # LAST BOOT
            lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

            # LVM USE
            lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

            # TCP CONNEXIONS
            tcpc=$(ss -ta | grep ESTAB | wc -l)

            # USER LOG
            ulog=$(users | tr ' ' '\n' | sort |  uniq | wc -w )

            # NETWORK
            ip=$(hostname -I)
            mac=$(ip link | grep "link/ether" | awk '{print $2}')

            # SUDO
            cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

            wall "	Architecture: $arch
                CPU physical: $cpuf
                vCPU: $cpuv
                Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
                Disk Usage: $disk_use/${disk_total} ($disk_percent%)
                CPU load: $cpu_fin%
                Last boot: $lb
                LVM use: $lvmu
                Connections TCP: $tcpc ESTABLISHED
                User log: $ulog
                Network: IP $ip ($mac)
                Sudo: $cmnd cmd"
////////////////////////////////////////////////////////////////////////////

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/c27ea4ca-1c8c-48d6-9c0a-adfcabb18f6f" />
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/cbae61b9-3e28-4d9b-86a3-05c86dec56fa" />

Step 3 : Save and exit the editor

        # Nano:
            Ctrl + X → Y → Enter

        # Vim:
            Esc → :wq → Enter

Step 4 : Execute the script

        sh monitoring.sh
        ~ Running the script will display the final system report using `wall`.
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6c010a47-d73c-47ee-9210-f35bdf2117fc" />


10) Crontab


step 1: we need to change the permission of the script file  so add the following steps
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6f216c6d-be57-4e9d-aaaf-430a2fd622fd" />

    
steps 2 : write the path of the Crontab

          sudo crontab -e
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1b207826-8303-4d3b-8e76-777b6e77c3d8" />



step 2: at the end of the file add the following line

          @reboot /bin/bash -c 'while true; do /home/ralhoura/monitoring.sh; sleep 600; done' &
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/6ef41d9c-f8bc-433c-89f1-fe1ca28a11de" />


the value will be appear like the following after  10 minute: 
<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/0a40fab0-3a20-4fe2-b8c3-07f9610c7318" />



12) Signature.txt

              to get the signature from the vm
    step 1 : power off your vm
    step 2 : go to folder that holde the project
    step 3 : open the terminal 
    step 4 : write the following command
    
         <img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/031ee0af-9a47-4940-9c58-ffecebee7f32" />

    



