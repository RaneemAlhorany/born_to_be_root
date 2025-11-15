//! Host Machine Port Forwarding Configuration
/*

    ^ Introduction:
            Port forwarding configuration on the host machine allows external network traffic (from your host) 
            to be redirected to a specific port inside the guest (virtual machine).

    ^ Definition:
            ~ Port forwarding allows network traffic from the host (real machine) to be redirected to a specific port inside the guest (virtual machine).

    ^ Description:
            When using virtualization software (like VirtualBox or VMware), the virtual machine is isolated from 
            the physical network. To access a service (like SSH or a web server) running inside the VM, 
            port forwarding is used to map a host port to a guest port.


    # Example:
            - Host Port: 2222
            - Guest Port: 22
            => Connecting to "localhost:2222" on the host forwards traffic to port 22 inside the VM.

    $ Purpose:
        - Enables access to services (e.g., SSH, Web Server) running inside the VM from the host machine.
        - Essential for communication between host and guest when using NAT mode.
        - Allows testing and development in isolated environments.


    % Configuration  Location:
         VM Settings → Network → Adapter → NAT → Advanced → Port Forwarding.

    ! Summary:
        # Port forwarding bridges external access to internal VM ports, allowing the host to communicate with virtualized services.
        # Port forwarding on the host machine creates a link between host and guest ports, 
                allowing secure and controlled access to virtualized services from the host environment.
*/
