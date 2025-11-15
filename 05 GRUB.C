//! GRUB (GRand Unified Bootloader)
/*
    ^ 1) definition
        # GRUB is a program that runs when you turn on a computer with a Linux-based operating system
            # Its main job is to load the Linux kernel and start the system

    ^ 2) Bootloader
        # GRUB is a bootloader — it’s the first software that runs after your 
              computer’s BIOS or UEFI. It bridges the gap between hardware and the OS
              
        $ GRUB plays a crucial role in the boot process of Linux-based operating systems,
        $ providing a flexible and customizable bootloader solution that facilitates system booting,
        $ kernel loading, and system recovery
               
    ^ 3) Purpose
        # The main purpose of GRUB is to locate the operating system kernel 
              on your disk and load it into memory

    ^ 4) Menu interface
        # When you power on your computer, GRUB can show a menu listing all available 
              operating systems, letting you choose which one to start

    ^ 5) Command-line interface
        # GRUB also has a command-line interface for advanced users. 
              It allows you to manually specify the kernel file and parameters to boot

    ^ 6) Multi-boot capability
        # GRUB supports multiple operating systems (Windows, Linux, BSD, etc.) 
              on the same machine — this is called “multi-boot”

    ^ 7) Configuration file
        # GRUB’s main configuration file is usually found at:
              /boot/grub/grub.cfg
              This file contains all boot entries, default system options, and timeout settings

    ^ 8) Recovery and Troubleshooting
        # If GRUB is corrupted or misconfigured, the system might show a “grub rescue>” prompt
              From there, you can manually boot your OS or reinstall GRUB

    ^ 9) Customization
        # You can edit GRUB themes, menu titles, background images, and default timeout

    ^ 10) Common commands
            - grub-install : installs GRUB to a disk
            - update-grub  : regenerates the configuration file
            - grub-reboot  : reboots into a specific menu entry once

    ^ 11) Summary
        # GRUB is an essential part of Linux systems, handling the boot process 
              flexibly and allowing multiple OS choices
*/
/*
        +-------------+
        |  BIOS/UEFI  |
        +-------------+
               |
               v
        +-------------+
        |    GRUB     |
        +-------------+
               |
               v
        +-------------+
        |   Kernel    |
        +-------------+
               |
               v
        +--------------------+
        |  Operating System  |
        +--------------------+
*/
