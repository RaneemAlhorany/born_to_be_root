//! Host Port
/*
    ^ Introduction:
        # The host port is a specific communication endpoint on the host machine (your real computer) 
        # used to send or receive data between the host and other systems, including virtual machines.

    ^ Description:
        ~ When using virtualization software (like VirtualBox or VMware), the host port is part of the 
                port forwarding configuration.
        ~ It represents the port number on the host machine that receives incoming traffic 
                and forwards it to a corresponding port inside the virtual machine.

    ^ Example:
        % Host Port: 8080
        % Guest Port: 80  
        $ Accessing "localhost:8080" on the host redirects the request to 
                $ port 80 inside the guest (VM).

    ^ Purpose:
        * Allows access to services running inside the VM from the host
        * Used in NAT mode to forward specific network requests
        * Acts as a bridge between the external (host) environment and the internal (guest) service

    ^ Summary:
        ~ The host port is the external entry point that listens for network requests and 
                forwards them to the correct port on the virtual machine
*/


//! Guest Port
/*
        ^ Introduction:
            # The guest port is a communication endpoint inside the virtual machine where a specific 
                        service or application listens for incoming connections.

        ^ Description:
            ~ In port forwarding, the guest port defines which service within the VM will receive the 
                         traffic coming from the host port.
            ~ It represents the internal destination of the redirected data.

        ^ Example:
            % Host Port: 8080
            % Guest Port: 80  
            $ Traffic sent to "localhost:8080" on the host is delivered to port 80 on the guest, 
                        where a web server (like Apache or Nginx) might be running.

        ^ Purpose:
            ? Specifies the internal service or application that receives forwarded traffic.
            ? Enables communication between host and guest through NAT configuration.
            ? Helps isolate services inside the virtual environment while still allowing access.

        ^ Summary:
               # The guest port is the internal port inside the virtual machine that listens for 
                            forwarded connections from the host, 
                # allowing controlled and secure communication between host and guest systems.
*/


//! Difference Between Host Port vs Guest Port
/*
    ^ Definition:
        % Host Port:
            $ The port number on the host (real) machine that receives incoming network traffic
        % Guest Port:
            $ The port number inside the virtual machine (guest) where a service or application is listening

    ^ Role in Port Forwarding:
        ~ Host Port:
            ? Acts as the external access point for network requests.
        ~ Guest Port:
            ? Acts as the internal destination that processes those requests.

    ^ Example:
        $ If you set up port forwarding:
            % Host Port: 8080
            % Guest Port: 80  
            # When you access "localhost:8080" on your host machine, the request is forwarded
            # to port 80 inside the guest VM (where a web server may be running).

    ^ Location:
        ? Host Port:
            #  Exists on the host operating system.
        ? Guest Port:
            #  Exists inside the virtual machine.

    ^ Accessibility:
        % Host Port:
            ? Accessible from outside or from the host itself.
        % Guest Port:
            ?  Accessible only inside the VM unless forwarded.

    ^ Purpose:
        $ Host Port:
            %  Provides an entry point to connect from the host or external network.
        $ Guest Port:
            %  Handles the actual service or process inside the VM.

    ^ Summary:
        ~ The host port is the external gateway that listens for incoming connections, 
            ~ while the guest port is the internal endpoint inside the virtual 
            ~ machine that receives and handles the forwarded traffic.  
        ~Together, they enable communication between the host and guest through port forwarding.
*/

