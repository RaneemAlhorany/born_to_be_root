//! sudo (Superuser Do)
/*
    ^ definition
        # "sudo" stands for "Superuser Do"
    ^ purpose
        # It allows a regular user to run commands that require administrative (root) privileges
    ^ example
        #install a program:
              sudo apt install firefox
    ^ explanation
        # The "sudo" command temporarily grants you root privileges for that single command only
        ! Execute this command as root, but only temporarily for this command.”
    ^ security
        # The system will ask for your password before running the 
            # command to make sure you have permission.
    ^ difference from root
        # EN: Using "sudo" is safer than logging in as the "root" user, 
              because it limits the time you have admin rights.
    ^ configuration
        # Permissions for who can use "sudo" are stored in the file:
              /etc/sudoers
    ^ multiple examples
            - sudo reboot           → Restart the system
            - sudo apt update       → Update available packages
            - sudo nano /etc/hosts  → Edit a system file
    ^ summary
        # In short, "sudo" is your key to perform administrative tasks 
              without switching to the root account

*/


//! Difference between sudo and su
/*
    ^ definition
            - sudo: means "Superuser Do" → run ONE command as administrator.
            - su: means "Substitute User" or "Switch User" → switch to another user (often root)

    ^ purpose
            - sudo: temporarily gives admin (root) privileges for one command
            - su: permanently changes the current user to another account until you exit

    ^ authentication
            - sudo: asks for YOUR password.
            - su: asks for the TARGET user’s password (like the root password).

    ^ session behavior
            - sudo: returns to your normal user immediately after executing the command
            - su: keeps you logged in as root until you type `exit`

    ^ example
            - sudo apt update        → run update with admin rights (just once).
            - su                     → switch to root user (stay as root until exit).

    ^ security
            - sudo: safer → logs every command + limited privilege time.
            - su: riskier → full control, can cause system damage if careless.


    ^ example workflow
        # EN:
            # Example of using sudo:
                $ sudo apt install vim
                (asks for your password, installs, then returns to normal)
            # Example of using su:
                $ su
                Password: *****
                # now you are root (you can destroy or configure anything)
                # type "exit" to return to normal user

    ^ summary
            sudo → run specific commands as root (temporary)
            su   → become root user completely (until exit)

*/


/*
            +--------+
            |  User  |
            +--------+
               /  \
              /    \
             v      v
      +---------+  +--------+
      |  sudo   |  |   su   |
      +---------+  +--------+
           |           |
           v           v
+----------------+  +------------------+
| Temporary root |  | Permanent root   |
|  privileges    |  |  privileges      |
+----------------+  +------------------+
*/









