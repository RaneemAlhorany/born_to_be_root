//! steps to make evaluation 
/*
    ^ prepare the vm
        ~ 1) select your vm 
        ~ 2) right click
        ~ 3) choose clone
        ~ 4) choose the path (put the project inside 2 folder just (goinfre or sgonifre))
        ~ 5) start your new vm  clone

        note:   
                It is very important not to reopen the machine since the signature will be modified. 
                For corrections, remember to clone the machine so you can turn it on without fear of changing the signature.
                 
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    ^ for general instructions
            ~ 1) download the clone 
                (it must contains the signature.txt file)
            ~ 2) create new clone from the VM (dont open or use the orginal vm)
                # a) go inside the project (inside the your vm folder that you submit)
                # b) to get the signature text write the following command
                    sha1sum namefile.vim
            ! explain the : signature.yxt file 
                all info you need to know is inside :
                         20 signature.txt.c file

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ^ Mandatory part
        
        ^ project overview :
            ~ 1) how a virtual machine works 
                    all info you need to know is inside :
                            01 intro file
                            02 Virtualization fundamentals + VirtualBox-UTM + VM file

            ~ 2) Therir choice of operating system
                    here i use debian
            ~ 3) The basic differences between CentOs and Debian
                    all info you need to know is inside :
                            04 Debian vs Rocky Linux file
            ~ 4) the purpose of virtual machines
                    we discuss it inside the first point
            ~ 5) if the evaluated student chooose CentOs: what SElinux and DNF are
                    skip it cuz i use debian
            ~ 6) if the evaluated student chose Debian : the difference between aptitude and apt ,and what APPArmor is.
            ~ During the defrnse, a script must display information all minutes.its operation will be checked in
            ~ detail later> if the exp;anations are not clear, the evaluation stops here
                    all info you need to know is inside : 
                        07 APT package manager file
        /////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ Simple setup :
            ~ 1) Ensure that the machine dose not have a graphical environment at launch. A password will be requested before
            ~  attempting to connect to this machine. Finally, connect with a user with the helpof the student being evaluated.
            ~ This user must not be root. pay attention to the password chosen, it must follow the rules imposed in the subject.
                    start lunch the copy of vm (here check it dosent have a  graphical environment )
                    enter the LVM password (enter the encryption password )
                    login with the non root user 
                    attention to the password chosen, it must follow the rules imposed in the subject.
                        (note : we will talk about police password later in user section)
            ~ 2) check that the UFW service is started with the help of the evaluator
                    sudo ufw status
                    (note : we will talk about ufw later in ufu section)
            ~ 3) Check that the SSH service is started with the help of the evaluator
                    sudo service ufw status
                    (note : we will talk about ssh later in ssh section)
            ~ 4) Check that the chosen operating system is Debian or CentOS with the help of the evaluator. if something does not work
            ~ as expected or is not clearly explained, the evaluation stops here.
                    uname -v 
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ User :
            ~ 1) The subject requests that a user with the login of the student being evaluated is present on the virtual machine.
            ~ check that it has been added and that it belongs to the "sudo" and "user42" groups
                        to check : getent group user42 sudo          
            ~ 2) Make sure the rules imposed in the subject concerning the password policy have been put in place by 
            ~following the following steps:
                $ a) first, create a new user
                        sudo adduser name_user
                $ b) Assign it a password of your choice, respecting the subject rules. 
                $ the student being evaluated must now explain to you how they were able to set up 
                $ the rules requested in the subject on their virtual machine
                $ Normally there should be one or two modified files> if there is any problem, the evaluation stops here.
                                all info you need to know is inside :
                                        17 password policy file
                ~ 3) now that you have a new user, ask the student being evaluated to create a group named "evaluating" in
                ~ front of you and assign it to this user.Finally, check that this user belongs to the "evaluating group"
                        step : 
                                1) sudo addgroup evaluation
                                2) sudo adduser nameNewUser evaluation
                                3) getent group evaluation

                ~ 4) finally , ask the student being evaluated to explain the advantages of this password policy, as well as 
                ~ the advantages and disadvantages of its implementation>Of course, answering that is because the subject 
                ~asks for it dies not count.
                                all info you need to know is inside :
                                        17 password policy file
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ Hostname and partitions:
                ~ 1) check that the hostname of the machine is correctly formatted as follows: login42 (login of the student being evaluated)
                      write the command :
                                            hostname
                ~ 2) Modify this hostname by replacing the login with yours
                ~ ,then restart the machine. if on restart, the hostname has not been updated, the evaluation stops here
                         sudo hostnamectl set-hostname [new_hostname]
                         sudo reboot
                ~ 3) you can now restore the machine to the original hostname
                         sudo hostnamectl set-hostname [new_hostname]
                         sudo reboot
                ~ 4) Ask the student being evaluated how to view the partitions for this virtual machine.
                                lsblk
                ~ 5) compare the output with the example given in the subject. 
                        ~ (please note: if the student evaluated makes the bonuses, it will be necessary to refer to the bonus example)
                                here we do the bonus , check it 
                ~ 6) This part is an opportunity to discuss the scores! the student being evaluated should give you a brief explanation of 
                        ~ how LVM works and what it is all about
                                all info you need to know about lvm is inside :
                                        06 LVM file
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ SUDO
                ~ 1) check that the "sudo" program is properly installed on the virtual machine
                        which sudo
                ~ 2) The student being evaluated should now show assigning your new user to the "sudo" group
                        sudo adduser nameNewUse sudo
                # explain wthat is the sudo : all info you need to know about sudo is inside:
                                        08 sudo file
                ~ 3)The subject imposes strict rules for sudo.the student being evaluated must 
                        
                       % first explain the value and operation of sudo using examples of their choice .
                                                16 sudo policies file
                        % in a second step, it must show you the implementation of the rules imposed by the subject
                                cat /var/log/sudo/sudo_config
                
                ~ 4) verify that the "/var/log/sudo/" folder exists and has at least one file. check the contents of the files in this folder,
                ~ you should see a history of the commands used with sudo.
                        cat /var/log/sudo/sudo_config

                ~ finally, try to run a command via sudo. see if the file(s) in the "/var/log/sudo/" folder have been updated
                ~ if something does not work as expected or is not clearly explained, the evaluation stops here
                        ex : sudo addgroup
                        cat /var/log/sudo/sudo_config
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ UFW
                ~ 1) check that the "UFW" program is properly installed on the virtual machine.
                        dpkg -s ufw  
                ~ 2) check that it is working properly
                        sudo service ufw status
                ~ 3) the student being evaluated should explain to you basically what UFW is and the value of using it.
                        all info you need to know is inside :
                                15 Firewall (UFW) file
                ~ 4) list the active rules in UFW. A rule must exist for port 4242
                        sudo ufw status
                ~ 5) add a new rule to open port 8080.check that this one has been added by listing the active rules.
                        sudo ufw allow 8080
                        sudo ufw status
                ~ 6) finally, delete this new rule with the help of the student being evaluated. 
                        ~ if something does not work as expected or is not clearly explaind , the evaluation stops here
                        sudo ufw status numbered
                                [1] 4242
                                [2] 4242
                                [3] 8080
                        sudo ufw delete num_rule
                                ex: sudo ufw delete 3
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ SSH
                ~ 1) check that the SSH service is properly installed on the virtual machine
                        which ssh
                ~ 2) check that it is working properly
                        sudo service ssh status
                ~ 3) the student being evaluated must be able to explain to you basically what SSH is and the value of using it
                        all info you need to know is inside:
                                09 ssh + openssh+ GNU nano + vim file
                                10 port  + ssh_port file 
                ~ 4)verify that the SSH service only uses port 4242
                         sudo service ssh status (it will apear 4242)
                ~ 5) the student being evaluated should help you use SSH in order to log in with the newly created user
                ~ to do this, you can use a key or a simple password. it will depend on the studentbeing evaluated. Of course, you have 
                ~ to make sure that you cannot use SSH with the "root" user as stated in the subject. if something does not work as expected or is not clearly
                ~ explained, the evaluation stops here.
                        open your terminal
                        check the root (should deny it)
                                ssh root@localhost -p 4241
                        then login in non root user 
                                ssh ralhoura@localhost -p 4241
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ^ Script monitoring

        ! The student being evaluated should explain to you simply:
                 ~1) How their script works by showing you the code.
                        you have 2 option :
                                1) cat monitoring.sh
                                2)nano monitoring.sh
                        all info you need to know about the code is inside:
                                18 script file
                ~ 2)  What "cron" is.
                        //  all info you need to know is inside:
                                19 Crontab file
                ~ 3) How the student being evaluated set up their script so that it runs every 10 minutes from when the server starts. 
                ~ Once the correct functioning of the script has been verified, the student being evaluated should ensure that this script 
                ~runs every minute. You can run whatever you want to make sure the script runs with dynamic values correctly.
                        //    sudo crontab -e
                        //        @reboot /bin/bash -c 'while true; do /home/ralhoura/monitoring.sh; sleep 600; done' &
                        // change 600 to 60
                ~Finally, the student being evaluated should make the script stop running when the server has started up, 
                ~but without modifying the script itself. To check this point, you will have to restart the server one last time. 
                        //  pgrep -a -f monitorind.h
                        // get the number  (#)
                        // sudo kill -STOP #
                ~ At startup, it will be necessary to check that the script still exists in the same place, 
                ~ that its rights have remained unchanged, and that it has not been modified. 
                        // sudo reboot









*/