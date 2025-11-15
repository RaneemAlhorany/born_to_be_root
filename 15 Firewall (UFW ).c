//! Firewall (UFW = Uncomplicated Firewall)
/*
    ^ Introduction:
        ~ A firewall is a security system that monitors and controls incoming and outgoing 
                        network traffic based on predefined security rules
        ~ It acts as a barrier between a trusted internal network and untrusted external networks, such as the Internet

    ^ What is UFW:
            % UFW (Uncomplicated Firewall) is a user-friendly front-end for managing the Linux 
                            firewall, built on top of iptables
            % It simplifies firewall management with easy-to-use commands, making it accessible for beginners and professionals alike

    ^ Main Purpose:
            * Protects the system from unauthorized access.
            * Controls which services or ports can be accessed from outside.
            * Prevents attacks and restricts suspicious connections.
            * Ensures only trusted traffic is allowed.

    ^ Main Features:
            ~ Simple and readable command-line interface.
            ~ Supports both IPv4 and IPv6.
            ~ Allows or denies traffic on specific ports.
            ~ Provides easy status checks and logging options.
            ~ Lightweight and included by default in many Linux distributions.

    ^ Basic Commands:
            $ Turn on the firewall
                sudo ufw enable 
            $ Turn off the firewall
                sudo ufw disable 
            $ Check current firewall rules
                sudo ufw status
            $ Allow traffic on port 22 (SSH)
                sudo ufw allow 22
            $ Block traffic on port 80 (HTTP)
                sudo ufw deny 80
            $  Remove a rule
                sudo ufw delete allow 22

    ^ Example:
            To allow SSH and block HTTP traffic:
            Result : SSH access is permitted, but web traffic on port 80 is blocked.

    ^ Summary:
            ~ UFW (Uncomplicated Firewall) makes managing network security simple and effective. 
            ~ It provides clear commands to configure which connections are allowed or blocked, 
                    helping secure Linux systems against unauthorized access and attacks.  
            # In short, UFW offers a strong, easy-to-use layer of protection for your system.

    ^ note :
            # Once enabled the firewall:
                * All incoming connections are denied by default.
                * All outgoing connections are allowed by default.

*/

