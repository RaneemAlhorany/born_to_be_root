//! Useful Linux Commands (General Use)
/*
    ! note:
       every time you open the vm you need to enter the password of the LVM partition to access the os

    ! SWITCHING USERS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Switch to root user (from normal user):
        su
        // "su" = switch user (default = root)

    ? Exit from root user back to normal user:
        exit

    ? Exit from current user session:
        Ctrl + D


    ! INSTALLATION & PACKAGE MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Update the system (refresh package list):
        sudo apt update

    ? Install sudo (must be done as root):
        apt install sudo

    ? Install a program (use sudo as normal user):
        sudo apt install <ProgramName>

        Examples:
            sudo apt install vim
            sudo apt install ufw
            sudo apt install openssh-server
            sudo apt install libpam-pwquality

    ? Verify installation of sudo:
        sudo -V

    ? Edit sudo configuration files (as root):
        sudo nano /etc/sudoers.d/sudo_config
        sudo nano /etc/ssh/sshd_config
        sudo nano /etc/ssh/ssh_config
        sudo nano /var/log/sudo/sudo_config 
        sudo nano /var/log/sudo


    ! SYSTEM REBOOT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Reboot the system:
        sudo reboot

    ? check the os :
        uname -a


    ! SERVICES MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Check the status of a service:
        sudo service <ServiceName> status

        Example:
            sudo service ssh status
            sudo service ufw status
            


    ! USER & GROUP MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Create a new user:
        sudo adduser <Username>

    ? Create a new group:
        sudo addgroup <GroupName>

    ? View all groups and their users:
        getent group

    ? Check if a specific group exists:
        getent group <GroupName>
    
    ? Check if a specific group exists and view its members:
        getent group  <Username> <GroupName>

    ? Add a user to a group:
        sudo adduser <Username> <GroupName>

    ? Remove a user from a group:
        sudo gpasswd --delete <Username> <GroupName>


    ! HOSTNAME MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Show current hostname:
        hostname

    ? Change hostname:
        sudo hostnamectl set-hostname <NewHostname>


    ! SSH CONFIGURATION
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Edit SSH configuration files (as root):
        sudo nano /etc/ssh/sshd_config
        sudo nano /etc/ssh/ssh_config

    ? Restart SSH service to apply changes:
        sudo service ssh restart

    ? Connect from host machine to VM:
        ssh <username>@localhost -p <PortNumber/hostPort>

        Example:
            ssh mohamed@localhost -p 4242


    ! FIREWALL (UFW)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Allow incoming connections to a specific port / add rule:
        sudo ufw allow <PortNumber>

    ? Enable the firewall:
        sudo ufw enable
        ~ note :
            - incoming connections to ports not explicitly allowed will be blocked
            - outgoing connections are allowed by default

    ? Check firewall status:
        sudo ufw status  numbered

    ? to delete rule :
        sudo ufw delete allow <PortNumber>
        sudo ufw delete  <idtNumber>
        example :
            sudo ufw delete allow 4242
            sudo ufw delete 1


    ! FILE & DIRECTORY MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Create a file:
        touch <FileName>

    ? Create a folder:
        mkdir <FolderName>

    ? Edit a file:
        nano <Path/FileName>

    ? exit nano editor:
        Ctrl + X 
        

        Example:
            nano /etc/sudoers.d/sudo_config


    ! PARTITIONS & SYSTEM INFORMATION
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Check all partitions:
        lsblk

    ? Check sudo installation path:
        which sudo


    ! PASSWORD MANAGEMENT
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Change user password:
        passwd

    ? Edit password  files (as root):
        sudo nano /etc/login.defs
        sudo nano /etc/pam.d/common-password


    ! CRONTAB CONFIGURATION (UPDATED)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    ? Edit crontab:
        crontab -e

    ? Example: Run monitoring.sh every reboot, then every 10 minutes:
        @reboot /bin/bash -c 'while true; do /home/ralhoura/monitoring.sh; sleep 600; done' &


    ! SUMMARY OF FREQUENT COMMANDS
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    su                  : switch to root
    sudo apt update     : update packages
    sudo apt install    : install program
    sudo service <x>    : manage services
    nano <file>         : edit file
    ssh user@host -p    : connect to VM
    sudo ufw allow      : open firewall port
    sudo ufw enable     : start firewall
    lsblk               : check partitions
    passwd              : change password
*/
