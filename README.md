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


     
