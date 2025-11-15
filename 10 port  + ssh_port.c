//! Port
/*
    ^ Introduction:
        ? A port is a virtual gateway inside a computer that allows data to reach the correct program or service
        ? It helps multiple applications use the same network connection (IP address) without mixing their data

    ^ Description:
        A port is identified by a number (from 0 to 65535) and works together with an IP address to send and receive data.  
        Each network service listens on a specific port — for example:
            - HTTP uses port 80
            - HTTPS uses port 443
            - SSH uses port 22
        When data arrives at a device, the system checks the port number to know which program should handle it.

    ^ Port Ranges:
        ? Well-Known Ports (0–1023):
            # Reserved for common services like web (80, 443), SSH (22), and email (25).
        ? Registered Ports (1024–49151):
            # Used by user or company applications that need specific ports.
        ? Dynamic / Private Ports (49152–65535):
            # Used temporarily by applications for short network connections.

    ^ How It Works:
        ? The combination of IP address and port number forms a unique connection called a “socket”.
        ? Example:
            - Your browser connects to IP 192.168.1.10 on port 80 → reaches the web server.
            - At the same time, SSH may use port 22 on the same IP → connects securely.

    ^ Common Uses:
        $ Allow multiple network services to run on the same device.
        $ Help firewalls and routers control which services are accessible.
        $ Identify services like web servers, SSH access, and database systems.

    ^ Security Notes:
        * Only open the ports you actually need — others should stay closed.
        * Use firewalls to protect open ports.
        * Attackers often scan open ports to find vulnerabilities.

    ^ Summary:
        * A port is a logical door that directs network traffic to the right application.
        * Ports make it possible for many services to share one IP address safely.
        * They are essential for communication, connection management, and network security.
*/

//! SSH Port
/*
    ^ Description:
        ? The default port used by SSH (Secure Shell) is port 22
        ? It allows secure remote login and command execution between a client and a server
        ? SSH encrypts all communication through this port to protect data from interception or unauthorized access

    ^ Details:
        - Port 22 is the standard listening port for the SSH daemon (sshd).
        - Changing the default SSH port can improve security by reducing automated attack attempts.
        - Firewalls and routers must allow traffic through this port for SSH connections to work.

    ^ Summary:
        * SSH uses port 22 by default for secure remote connections.
        * It can be changed to another port for additional security.
        * Ensuring this port is open and protected is essential for safe remote administration.
*/


//! SSH Port Connection Flow (Port 22)
 /* 
   ^ Overview:
        * The SSH protocol uses port 22 by default for secure communication.
        * It allows encrypted connections between a client and a remote server.

    ^ Step-by-Step Connection:

        🧑‍💻 Client (Local Machine)                     🖥️ Server (Remote Host)
        ────────────────────────────────               ────────────────────────────────

        1️⃣ The user runs an SSH command:
             → ssh user@192.168.1.10

        2️⃣ The system identifies:
             • IP Address → 192.168.1.10   (target device)
             • Port Number → 22            (SSH service port)

        3️⃣ A connection request is sent through the network
             🌐 using port 22.

        4️⃣ On the server side:
             • The SSH daemon (sshd) listens on port 22 👂
             • It waits for incoming SSH connection requests.

        5️⃣ The server receives the request and performs authentication:
             🔒 The user provides a password or public/private key.

        6️⃣ Once authentication succeeds:
             ✅ A secure encrypted channel is established.
             🔁 The user can now execute commands or transfer files safely.

    ^ Important Notes:
        • All communication passing through port 22 is encrypted.
        • IP address identifies the device, while the port identifies the service.
        • Together, they form a unique socket: (IP + Port = SSH connection).

    ^ Summary:
        SSH listens on port 22 by default.
        It ensures secure, encrypted remote access and data exchange between systems.
*/
