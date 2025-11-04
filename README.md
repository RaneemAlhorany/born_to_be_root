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
![503743230-16631c5a-9793-4bf5-9805-2ae1b5ac1eda](https://github.com/user-attachments/assets/070b51d2-da51-4409-9e2a-968f1dd6e7df)


     it will load yor vm
![503743512-c6259b8a-26dd-438a-a7d5-d506217ab878](https://github.com/user-attachments/assets/091854c4-820b-4d2f-8aec-b47bb762cb8d)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


setup your vm / installing debian

    % 1) click on install
        ~ Once the virtual machine starts, you’ll see the installer welcome screen
        ~  Choose the option “Install” to begin the installation process 
        ~ install the Debian operating system on your virtual machine without using graphical interface
<img width="574" height="480" alt="Screenshot 2025-10-22 170605" src="https://github.com/user-attachments/assets/5e240783-4a48-4b00-ad27-ee7c6bc180fb" />


    % 2) selsect the language (english)
        ~ This determines the language used in menus, system messages
![503752011-148917ef-4cc5-4287-8690-8852e9788252](https://github.com/user-attachments/assets/00648926-2bbe-42cd-9b07-a5c1a0180145)


    % 3) select your location
        ~ Choose your country or region (for example: “Other → Middle East → Jordan”)
        ~ This will automatically set your system’s time zone and regional settings
![111](https://github.com/user-attachments/assets/07b7947b-9ff8-4bae-ba8b-6d40c4714743)
![222](https://github.com/user-attachments/assets/b74a64ec-fbee-4b9c-ab31-ea2df9a0f825)
![333](https://github.com/user-attachments/assets/088a57af-379b-45b3-a168-b04643f0a19c)



    % 4) configure the keyboard
        ~ The installer will ask for the keyboard layout. You can select 
        ~ “American English” or test your layout by typing in the provided
        ~  box to ensure it matches your keyboard
![503757141-46804422-70a8-458b-b3d4-ddf7f7272491](https://github.com/user-attachments/assets/fb1d7884-44b3-4064-b876-fb821cfc4fec)



    % 5) configure the network (Host name)
        ~ The system will detect the network and ask you to provide a host name
        ? You must use the following format: your Intra name + 42 
<img width="605" height="443" alt="Screenshot 2025-10-22 173249" src="https://github.com/user-attachments/assets/0e2e3b40-e519-442d-8bd2-db965778d14a" />



    % 6) make the domain name empty
        ~ When asked for the domain name, leave it empty and press Enter
        ~ This is because you are not connecting your machine to a specific domain network
![503759542-7a4a6257-239b-4161-a7aa-b25fc55085eb](https://github.com/user-attachments/assets/fd28de75-e9d1-4b67-85b4-a4207b0176bf)



    % 7) set the password for the host (root user)
        ~ This is the password for the administator (root) account
        # Be sure to remember it — this account has full system control.
        $ re-enter password to verify
![111](https://github.com/user-attachments/assets/290b223d-0ea3-449b-b0f6-4f1df6bf1f4e)
![222](https://github.com/user-attachments/assets/1e723768-c814-47b0-82a8-8e31f0774dfc)



    % 8) set the full name for new user
        ? It must be intra name 
        ~ When the installer asks for the “full name” of the new user, enter your Intra name
<img width="687" height="452" alt="Screenshot 2025-10-22 175454" src="https://github.com/user-attachments/assets/36396bff-073d-4207-82bc-b57c666d1f34" />



    % 9) set the username for accout 
        ? same above
        ~ The username is what you will use to log in to the system
        ~ Use the same as before — your Intra name
![503768854-1140ead6-7e63-4ca6-8c5c-f24ac52d4127](https://github.com/user-attachments/assets/7124c26e-7444-4791-955b-76bcb40848cc)



        % 10) password for new user 
             ~ This is the password for the non-root user (your normal account)
             ~ This password should be different from the root password for better security
             # re enter the password
![11](https://github.com/user-attachments/assets/3d2eecf4-4006-4614-9a22-8231f55430b6)
![22](https://github.com/user-attachments/assets/fc62b966-609a-4ec5-920a-3d5bdea9cffc)



    % 11) partition disk (choose partitioning method)
        ? choose manual 
        ~ When you reach disk partitioning, select Manual mode
        ~ This gives you full control over how to divide and use your virtual disk
![503776534-87391d40-2454-4e31-a9f5-6a7df148a23d](https://github.com/user-attachments/assets/f3be0964-613a-4186-9816-49df48cfa0d9)



    % 12) select the storage location  (partition disk)
        ~ Choose your virtual hard disk. It should look something like:
        ? SCSI3 (0,0,0) (sda) — ## GB ATA VBOX HARDDISK 
<img width="601" height="557" alt="Screenshot 2025-10-22 181650" src="https://github.com/user-attachments/assets/b4109e60-826d-48a2-9724-f789a08957ef" />



    % 13)  Confirm the selection
        ? When asked whether to use this disk, select Yes to continue
![503779662-b707ad6c-4fd1-4131-b0b2-2eeda82c8639](https://github.com/user-attachments/assets/e0bc848f-8424-462a-b1b7-1579f21504c7)



    % 14) select the free space  
        ~ You will see an area labeled something like 
                ? pri/log -## GB FREE space
        ~  Highlight it and press Enter 
![503780927-d1fc7512-3608-44bb-94d9-b8a3893c657f](https://github.com/user-attachments/assets/d0de55c5-c22a-44f8-9869-3c2cfaf48141)



    % 15) How to use this free space
        ? choose "create a new partition "
        ~ This will allow you to manually create partitions such as /, /home, or swap , ...... later
![503783177-dbf47f6f-e0cd-4e54-b30b-56d7be7db174](https://github.com/user-attachments/assets/dbfbeeda-697c-49c6-ade2-ab51192abdb0)



    % 16) new partition size 
        !  As the subject indicates, the size of the partition must be 500 megabytes. (500m)
        ~ The installer will ask for the size of the new partition
        ~ You will define it based on your setup plan (for example, 10 GB for root /, etc.)
![503784730-a6543a07-2445-4aa4-9406-ef5f174f6108](https://github.com/user-attachments/assets/366a6392-f2b6-4350-943f-55473b34cd35)



    % 17) Type for the new partition 
        ? choose  "primary"
        ~ This makes the partition a main partition directly on the disk (not part of an extended one)
        ~ It’s ideal for essential system areas like /boot
![503786333-ff39850e-9a7f-4126-b8f7-5b59f9dbd137](https://github.com/user-attachments/assets/954b32f0-bc70-4d97-88b7-ff7cdc5cbce6)




        % 18) location for the new partiton:
             ? choose "Beginning"
             ~ This places the partition at the start of the disk — which is better for the boot partition 
                 ~ because it loads faster and is easier for the BIOS/UEFI to detect
![503788345-fd9c1cff-8789-4b1d-b683-1bfdebd82f26](https://github.com/user-attachments/assets/37da357d-d0cf-4ead-a2bd-25f947dcce4a)




     % 19) partition setting:
        ? choose "Mount point"
        ? We will modify the mount point to which the subject specifies
        ~ Now the installer will show the settings for this new partition (size, type, mount point, etc.)
        ~ We will modify the mount point according to the installation instructions
![503791268-9c649144-4f4e-48b2-9bfd-3df0aa1c1de7](https://github.com/user-attachments/assets/ab976bce-7f4d-4f78-acc0-3c577a49655f)




    % 20) Mount point for this partition:
        ~  We choose boot as the mount point of our partition
        ? /boot - static files of the boot loader
        ~ This partition will store static boot loader files — files required to start the operating system (like GRUB).
        Example: /boot contains the Linux kernel and GRUB configuration
![503793092-9aca80dc-072b-4d45-9531-19da9e5772ac](https://github.com/user-attachments/assets/c606fc30-f685-41e0-a9df-5fb3cf7d4d19)




    % 21) partition setting:
        ~ We finish configuring the current partition
        ? After setting the mount point, select “Done setting up the partition.”
        ~ This means you’ve finished configuring the /boot partition
![503794139-86178aca-bb7e-4dde-a0e9-227c2e198b26](https://github.com/user-attachments/assets/91701176-46b3-4a19-b4da-58c38f12a259)




    % 22) partition setting:
        ~ Once we have completed the previous step, the partition should appear. 
        ~ Now we must create a logical partition with all the available disk space, 
        ~  which has no mount point and which is encrypted. To do this, we select 
        ~ the free space where we want to create it
        ? choose "pri/log -## GB FREE space"
        # Once the /boot partition is done, it should appear in the partition list.
        # Now, you need to create a new logical partition using all the remaining free space.
        # This partition will:
            Have no mount point yet.
            Be encrypted.
        ?To do this, select the line that says something like:
        ? “pri/log - XX GB FREE space.
![WhatsApp Image 2025-10-22 at 19 23 44_b80c6251](https://github.com/user-attachments/assets/5bce1746-c6e0-4188-a6dd-fcfb0c660a29)




    % 23) How to use this free space
        ? choose "create a new partition "
        ~ This allows you to manually create additional partitions later (like /, /home, or swap) 
            ~ inside the encrypted volume
![WhatsApp Image 2025-10-22 at 19 34 28_91ca76d0](https://github.com/user-attachments/assets/8a9ba128-7b59-42db-b1f9-1754483c95c6)




    % 24) new partition size 
        ? write : "max"
        ~ When asked for the size, type “max”.
        ~ This tells the installer to use all remaining free space for the encrypted partition
![WhatsApp Image 2025-10-22 at 19 51 33_f0e8f6f7](https://github.com/user-attachments/assets/588fdd92-3f1e-4d16-a3d2-a4e28e80c7d0)




      % 25)Type for the new partition:
             ~ Since we’ll use this partition later to build an LVM (Logical Volume Manager) setup
             ? choose : logical 
             ~ Logical partitions allow flexible management and multiple logical volumes inside them
![WhatsApp Image 2025-10-22 at 19 59 11_7d401848](https://github.com/user-attachments/assets/e99419b2-ebb3-4602-95b5-5b0de8a3a436)




    % 26) partition settings:
        ? go to the Mount point and choose it
![WhatsApp Image 2025-10-22 at 20 07 33_8ce6c4c2](https://github.com/user-attachments/assets/c5f103a7-f770-40d2-a97a-fb4d8ff12237)




    % 27) Mount point for this partition:
        ? choose "Do not mount it "
![WhatsApp Image 2025-10-22 at 20 13 56_be4e7ba9](https://github.com/user-attachments/assets/066a8a02-a64d-4e48-b690-c0954accc707)



     
    % 28) partition settings:
       ? choose : done setting up the partition
       ~ This confirms and saves the logical partition configuration
![WhatsApp Image 2025-10-22 at 20 40 21_ee2d29da](https://github.com/user-attachments/assets/12415ed2-69c2-4def-921e-17d49fcf6541)




    % 29) patition disk (Configure encrypted volumes)
        ~ Now that the logical partition exists, you’ll move on to encryption configuration.
        ? choose "configure encrypted volumes"
![WhatsApp Image 2025-10-22 at 20 55 12_a2450161](https://github.com/user-attachments/assets/961b39ac-f700-4f08-9f06-2ba7490b06cd)




        % 30) Confirmation 
             ~ Choose “Yes” when asked to confirm that you want to configure encrypted volumes.
             ? yes
![WhatsApp Image 2025-10-22 at 20 58 14_b8e21063](https://github.com/user-attachments/assets/2ae278c3-eecd-411b-9749-76b0781c72d7)




    % 31) Encryption configuration actions
        ? choose "create encrypted volumes"
        ~ This will initialize the setup process where you’ll later select which 
            ~ partitions to encrypt and define the encryption method (like AES)
![WhatsApp Image 2025-10-22 at 21 16 06_3e05ff41](https://github.com/user-attachments/assets/9d0e7298-d155-4230-8069-094520ec2f54)




    % 32) Devices to encrypt
        ? go to "/dev/sda5" the enter to spacebar on the keyboard to select it then click on "enter"
        ~ We select which partition we want to perform the encryption on
        ~ This means you’re telling Debian which partition to encrypt 
        ~ in our case, it’s the logical partition /dev/sda5 (the one that uses all free space)
![WhatsApp Image 2025-10-22 at 21 22 15_6f515bd2](https://github.com/user-attachments/assets/f7e92d28-c49a-4169-9e02-bde14ae135e4)




    % 33) partition settings
        ? choose "Done setting up the partition"
        ~ We finish configuring the current partition
        ~ This confirms the configuration for that partition before encryption begins
![WhatsApp Image 2025-10-22 at 21 23 39_3b14105f](https://github.com/user-attachments/assets/d6100ea4-2aaf-4717-9613-747515ec74df)




        
    % 34) Encryption configuration actions
        ? choose "Finish"
        ~ This tells the installer that you’re done selecting and configuring the encrypted devices
![WhatsApp Image 2025-10-22 at 21 24 06_c58c68e5](https://github.com/user-attachments/assets/fafb9c49-1309-4a92-9c19-6e2a404e0882)






    % 35) Confirmation — Erasing data
        ! The system will ask:
            really erase the data on SCSI3 (0,0,0) , partotion #5 (sda)?
        ? choose "yes"
        ~ This ensures that the partition is securely prepared for encryption
![WhatsApp Image 2025-10-22 at 21 51 40_1e3186d4](https://github.com/user-attachments/assets/8b1b0db9-cdfc-460e-8df5-89fd4d3fad0b)

     


        
    % 36) loader really erase the data on SCSI3 (0,0,0) , partotion #5 (sda)?
        ? click on cancel
        ~ We don't care if it takes a long time or a short time, we click cancel, 
            ~ since there is nothing to encrypt, because the partition is empty.
        ~ It won’t affect encryption because there’s no real data to wipe
![WhatsApp Image 2025-10-22 at 21 51 55_af034b00](https://github.com/user-attachments/assets/93dc944e-f8b9-4a28-ac76-5c32f752d4be)




       % 37) ENcryption passphrase (for password)
             ~ Again we will have to enter a password, this time it will be the encryption phrase
             ~ As I have previously told you, you must repeat the process and you must write 
             ~ it down, since it will be important in the future
             ? add your password
             * This passphrase protects the encrypted data — you’ll need it every time the system boots.
             * Make sure to write it down and store it safely,
                     * because if you lose it, you’ll lose access to all encrypted data
![WhatsApp Image 2025-10-22 at 22 17 44_321318f4](https://github.com/user-attachments/assets/2061f8d7-c181-454d-a475-4177ec9e0eaf)




                    
         % 38) Re-enter passphrase to verify:
             ? re enter the previous password
             ~ Enter the same encryption password again to confirm it
![WhatsApp Image 2025-10-22 at 22 23 24_c6bd4e51](https://github.com/user-attachments/assets/2f25f89b-0475-4546-b437-41ae8a440c64)






             
         % 39) partition disks
             ? choose "Cofigure the logical volume manager (LVM)"
             ~ LVM allows you to create flexible partitions inside the encrypted space —
             ~ it’s like a layer that helps you manage your storage more easily
![WhatsApp Image 2025-10-22 at 22 31 00_8fc4e9fd](https://github.com/user-attachments/assets/b4dbe721-9855-44d5-85d4-38534d11da82)






             
         % 40) Write the changes to disks and configure LVM?
             ~ The installer will ask if you want to apply the changes before creating LVM
             ?  choose "yes"
             ~ This commits your encryption and prepares the system to build the logical volumes
![WhatsApp Image 2025-10-22 at 22 33 00_bf4c1f57](https://github.com/user-attachments/assets/382ea9ef-7074-4d73-84b8-829c3d42ca85)





    % 41) LVM configuration action
        ? choose "Create volume group"
        ~ A volume group (VG) is a container that will hold multiple logical volumes (like /, /home, swap)
![WhatsApp Image 2025-10-22 at 22 40 56_1c935ac7](https://github.com/user-attachments/assets/d1de2085-7489-471b-a31c-1594e3a1a065)





    % 42) Volume group name
        ~ You must assign a name to this volume group.
        ? We have to give the name as indicated in the subject: LVMGroup
        ~ This name identifies the group that holds all your future logical partitions
![WhatsApp Image 2025-10-22 at 22 42 56_f08f411a](https://github.com/user-attachments/assets/70f1a6be-c8fc-4481-91ef-e71e8e5f0ad2)





     % 43) Devices for the new volume group
             ? go to "/dev/mapper/sda5_crypt" the click to spacebar in keyboard to select it  , then enter
             ~ We select which partition we want to perform the encryption on
             ~ This tells Debian that your new volume group (LVMGroup)
                 ~ will be created inside the encrypted partition (/dev/mapper/sda5_crypt)
![WhatsApp Image 2025-10-22 at 22 46 29_b016b08c](https://github.com/user-attachments/assets/8f287fce-722c-45ce-8353-48f0af7e0eb2)



     !  note we will repeat the steps from step (44) to step (47) for the following / several times 
     ! notes repeat the following to actions for the swap , home , var , srv , tmp , var-log file
     ! once for each logical volume you need to create

                  * the name + size for each file  (The exact size for each depends on the total disk size of your virtual machine)
                      root: #GB , swap = #GB , home = #GB , var = #GB, srv = #GB , tmp = #GB , var/log = #GB
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



//////////////////////////////////////////////////////////////////////////////////////////////////////

complete the following and the reminder of ssh 


//////////////////////////////////////////////////////////////////////////////////////////////////////////







        

5) Installing & configuring UFW 🔥🧱 Firewall


6) sudo policies

7) password policy 🔑

8) Script

9) Crontab

10) Signature.txt



