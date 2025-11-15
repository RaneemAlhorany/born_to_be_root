//! Aptitude
/*
    ? Aptitude is a package management tool for Debian-based Linux distributions.
    ? It allows you to install, remove, update, and search for software packages.

    ^ Key Features:
        - Interactive text-based interface for easier navigation and package management.
        - Command-line interface for scripting and automation.
        - Resolves package dependencies automatically.
        - Tracks package installations, removals, and updates.

    ^ Common Commands:
        // Update package lists
        sudo aptitude update

        // Install a specific package
        sudo aptitude install package_name

        // Remove a package
        sudo aptitude remove package_name

        // Search for packages by keyword
        sudo aptitude search keyword

        // Upgrade installed packages to the latest versions
        sudo aptitude upgrade

    ^ Notes:
        - Aptitude provides more detailed dependency resolution than apt/apt-get.
        - You can switch between the interactive interface and command-line mode as needed.

    ^ Example:
        $ sudo aptitude install vim
        // Installs the Vim editor on your system
*/


//! APT (Advanced Package Tool)
/*
    ? APT is the default package management system for Debian-based Linux distributions.
    ? It allows users to manage software packages, including installation, removal, upgrading, and searching.

    ^ Key Features:
        - Resolves dependencies automatically.
        - Works with .deb packages from repositories.
        - Can be used both in command-line and scripting environments.
        - Provides detailed information about packages.

    ^ Common Commands:
        // Update package lists from repositories
        sudo apt update

        // Upgrade installed packages to latest versions
        sudo apt upgrade

        // Install a specific package
        sudo apt install package_name

        // Remove a package
        sudo apt remove package_name

        // Search for packages
        apt search keyword

        // Show detailed info about a package
        apt show package_name

    ^ Notes:
        - Unlike aptitude, APT is simpler and commonly pre-installed on Debian-based distributions.
        - Use "sudo" to have administrative privileges when installing or removing packages.

    ^ Example:
        $ sudo apt install curl
        // Installs the curl tool for transferring data with URLs
*/

//! The difference between Aptitude and APT
/*
    ? Both Aptitude and APT are package management tools for Debian-based systems, 
      but they have some differences in functionality, interface, and usage.

    ^ APT (Advanced Package Tool):
        - Command-line tool for installing, updating, and removing packages.
        - Commands: apt update, apt install <package>, apt remove <package>, apt upgrade
        - Simpler interface, focuses on basic package management.
        - Does not have a built-in text-based interactive UI (APT vs apt-get vs apt-cache).

    ^ Aptitude:
        - More advanced package manager, also works from the command line.
        - Provides an interactive text-based interface (like a menu-driven UI).
        - Can resolve complex dependency problems more intelligently than apt.
        - Commands: aptitude install <package>, aptitude remove <package>, aptitude update
        - Shows a list of recommended and suggested packages before installing.
        - Can automatically choose solutions when dependencies conflict.

    ^ Key Differences:
        - Aptitude has both CLI and interactive UI; APT is CLI only.
        - Aptitude is smarter in resolving dependency conflicts.
        - Aptitude can keep track of automatically installed packages and unused packages better.
        - Both can install, remove, and update packages, but apt is simpler for scripts and automation.

    ^ Summary:
        - Use apt for quick commands and automation.
        - Use aptitude if you want an interactive interface or advanced dependency resolution.
*/

//! AppArmor
/*
    ? AppArmor (Application Armor) is a Linux security module that provides mandatory access control (MAC).
    ? It restricts programs to a limited set of resources, reducing the risk of system compromise.

    ^ Key Features:
        - Uses security profiles to define what each program can access.
        - Profiles can be in "enforce" mode (restricts actions) or "complain" mode (logs violations without blocking).
        - Helps protect against unauthorized file access, network use, and system modifications.
        - Easier to configure than SELinux for many users.

    ^ Common Commands:
        // Check AppArmor status
        sudo aa-status

        // Enforce a profile
        sudo aa-enforce /etc/apparmor.d/profile_name

        // Set a profile to complain mode
        sudo aa-complain /etc/apparmor.d/profile_name

        // Reload all profiles
        sudo systemctl reload apparmor

    ^ Notes:
        - AppArmor profiles are typically located in /etc/apparmor.d/
        - Ensures that even if a program is compromised, damage is limited to allowed actions.
        - Pre-installed in many Debian and Ubuntu distributions.

    ^ Example:
        $ sudo aa-status
        // Shows which profiles are loaded, enforced, or in complain mode
*/
