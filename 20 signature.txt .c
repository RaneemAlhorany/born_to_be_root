//! signature.txt
/*
    ^ the goal of the file in the project:
        # ensure that the virtual machine you create is actually 
        # created by you, and not copied from someone else
    
    ^ Definition: 
        ~ It's a simple text file containing the "disk signature" of your virtual machine.
        ? It is a simple text file that you place in the root of your project folder.
    
    ^ info :
        # The file is created manually by you and uploaded to the root of your repository.
        ! This file contains the digital signature (SHA1 signature (hash) value) of your virtual disk signature. 
            (a .vdi or .qcow2 file)
        ~ This long value, composed of numbers and letters It doesn't contain any code or server settings, 
        ~ just a unique digital "digital fingerprint" ( cannot be duplicated)
        ~ that links your project to your virtual machine.    

    ^ idea :
        ! Each virtual disk in VirtualBox, or UTM, has a unique digital signature or fingerprint.
        ? This signature is what proves that this disc is actually yours and not copied from another student

    ^  What do you do practically?
        $ After creating the Virtual Machine, you go to the disk file (usually .vdi in VirtualBox or .qcow2 in UTM).
        $ Extract the signature from it using the appropriate command (depending on the operating system you are using).
        $ Copy the signature and paste it into a text file named: (signature.txt)
        $ Place this file in the root of your project repository

    ^ Important Notes:
        % Do not write anything else inside signature.txt except the signature itself
        % Snapshots (system snapshots) are strictly prohibited, as they alter the signature
        % This signature must be the same as the one produced by the virtual machine you used in the project

     * This is the ONLY file to be submitted in the project repository.
   

//! The purpose of this file is to

    ~ 1) confirm that the virtual machine is your own creation and not a clone
    ~ 2) It keeps the project lightweight because you're not uploading the machine itself 
                (which can be 5–10 GB)
*/






