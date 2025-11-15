//! sudo policies
    //? in this section : you will create a file in :
        /etc/sudoers.d/sudo_config


    
//! steps :
    //? all steps do it in correct place in the read me file 

//! explain each command :    
            // Defaults    passwd_tries=3
                //# Number of allowed sudo password attempts before failure
            // Defaults  badpass_message="message"
                //# Custom message displayed when the password entered is wrong
            // Defaults  logfile="/var/log/sudo/sudo_config"
                //# File where sudo actions will be logged
            // Defaults  log_input, log_output
                //# Enable logging of both user inputs (commands) and outputs (results)
            // Defaults  iolog_dir="/var/log/sudo"
                //#  Directory where sudo I/O logs will be stored
            // Defaults  requiretty
                //# Require sudo to be run only from a terminal session (prevents background/scripted sudo)
            // Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
                //# Restrict sudo to execute commands only from trusted system directories (as a subject need)









