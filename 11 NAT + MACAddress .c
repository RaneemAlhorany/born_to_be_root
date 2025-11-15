//! NAT (Network Address Translation)
/*
    ^ Introduction:
        ? NAT stands for Network Address Translation.
        ? It is a networking technique used to modify IP address information in packet headers
          while they are in transit across a router or firewall.
        ? NAT allows multiple devices on a local network to share a single public IP address.
        ~ A technique used to translate private IP addresses to public IPs and vice versa.
        $ Commonly used by routers connecting local networks to the internet.


    ^ Description:
        NAT works by translating private IP addresses (used inside a local network)
        into a public IP address (used on the Internet), and vice versa.
        This process happens in the router or gateway that connects the local network to the outside world.

        Example:
            - Inside the home network, devices have private IPs like:
                192.168.1.2 , 192.168.1.3 , 192.168.1.4
            - The router has one public IP (e.g., 213.45.67.89)
            - NAT translates all outgoing requests from private IPs into the router’s public IP.
            - When responses return, the router translates them back to the correct private IP.

        This allows many internal devices to access the Internet using just one public address.

    ^ Main Types of NAT:
        ? Static NAT:
            # Maps one private IP to one public IP permanently (1:1 mapping).
        ? Dynamic NAT:
            # Maps a private IP to a public IP from a pool of available public addresses (temporary mapping).
        ? PAT (Port Address Translation) / NAT Overload:
            # Maps multiple private IPs to a single public IP using different port numbers.
            # This is the most common form used in home and business networks.

    ^ How It Works (Simplified Flow):
        1️⃣ A device in the LAN sends a packet to the Internet.
        2️⃣ The router replaces the source private IP with its public IP.
        3️⃣ It keeps a record (translation table) of which internal device made the request.
        4️⃣ When a response comes back, the router looks up this table to send the data back to the right device.

    ^ Advantages:
        * Conserves public IP addresses by allowing multiple devices to share one.
        * Adds a basic layer of security by hiding internal network structure.
        * Allows flexible IP management for internal and external communication.

    ^ Disadvantages:
        * Can cause issues with certain applications that require direct end-to-end connections.
            (- Some applications may fail due to address translation.)
        * Adds small processing overhead to routers.
        * Makes hosting public servers from private networks more complex.

    ^ Common Use Cases:
        $ Home and Office Networks:
            % Allow all local devices to connect to the Internet using one public IP.
        $ Security Firewalls:
            % Hide private network structure from external users.
        $ Cloud and Data Centers:
            % Manage large-scale IP translation for virtualized environments.

    ^ Summary:
        * NAT is a method of translating private IP addresses into public ones for Internet communication.
        * It enables many devices to share one public IP, improving efficiency and security.
        * The most widely used form, PAT (Port Address Translation), is what most home routers use.
        * NAT plays a vital role in conserving IPv4 addresses and securing local networks.
*/


//! MAC Address
/*
    ^ MAC (Media Access Control) Address
            ~ A unique physical identifier assigned to each network interface card (NIC).

    # Format:
            - 6 groups of hexadecimal numbers, e.g., 00:1A:2B:3C:4D:5E

    $ Purpose:
            - Used to identify devices within a local area network (LAN).
            - Operates at Layer 2 (Data Link Layer) of the OSI Model.

    % Notes:
            - Assigned by the manufacturer and usually cannot be changed.
            - Different from IP addresses, which operate at the Network Layer.
            - Can be temporarily changed using a method called "MAC Spoofing".

    ! Importance:
            - Enables device communication within LAN.
            - Helps control network access and track connected devices.
*/
