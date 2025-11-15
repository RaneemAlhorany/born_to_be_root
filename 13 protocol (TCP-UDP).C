//! Protocols
/*
    ^ Introduction:
        ~ Protocols are a set of rules and standards that define how data is transmitted, received, 
                ~ and interpreted between devices over a network.
        ~ They ensure proper communication and data exchange between different systems.

    ^ Description:
       # A protocol acts as a common language between computers, enabling them to communicate 
                #  regardless of their hardware or software differences. 
       # Each protocol specifies the format, timing, sequencing, and error control for data transmission.

    ^ Main Functions:
        * Data Formatting:
            ? Defines how data should be structured before transmission.
        *Addressing: 
            ? Identifies the source and destination of data.
        *Error Detection and Correction: 
            ?Ensures data integrity during transmission.
        *Flow Control:
            ? Manages the rate of data exchange to prevent congestion.
        *Session Management: 
            ? Establishes, maintains, and terminates communication sessions.

    ^ Common Network Protocols:
        $ HTTP (Hypertext Transfer Protocol):
                 Used for transferring web pages.
        $ HTTPS (HTTP Secure):
                 Encrypted version of HTTP for secure web communication.
        $ FTP (File Transfer Protocol):
                 Used for transferring files between systems.
        $ SSH (Secure Shell):
                Provides secure remote login and command execution.
        $ TCP (Transmission Control Protocol):
                 Ensures reliable, ordered data transmission.
        $ UDP (User Datagram Protocol):
                 Offers fast but connectionless communication.
        $ IP (Internet Protocol):   
                 Handles addressing and routing of data packets.
        $ SMTP (Simple Mail Transfer Protocol):
                 Used for sending emails.
        $ DNS (Domain Name System):
                 Translates domain names into IP addresses.

    ^ Importance:
            ~ Protocols are the foundation of network communication.
            ~ Without them, devices would not be able to understand or respond to each other. 
            ~ They ensure data security, reliability, and interoperability in modern networking.

    ^ Summary:
        #  Protocols are standardized communication rules that make network interaction possible. 
        # They define how data is sent, received, and verified, ensuring consistent and secure 
                 communication between devices in a networked environment.
*/


//! TCP (Transmission Control Protocol)
/*
        ^ Introduction:
            # TCP is a connection-oriented protocol that ensures reliable and ordered data transmission 
                        between devices over a network.

        ^ Description:
            ~ TCP establishes a connection before data transfer begins and guarantees that all packets 
                    arrive in the correct order without loss or duplication. 
            ~ It uses acknowledgments and retransmissions to ensure reliability.

        ^ Main Features:
            % Connection-oriented:  
                    ? Requires a connection before communication.
            % Reliable delivery: 
                    ? Ensures all data packets reach the destination.
            % Ordered transmission: 
                    ? Packets are reassembled in the correct order.
            % Error checking: 
                    ? Detects and corrects transmission errors.
            % Flow control: 
                    ? Prevents network congestion by adjusting data rate.

        ^ Common Uses:
            * Web browsing (HTTP/HTTPS)
            * Email (SMTP, IMAP, POP3)
            * File transfer (FTP)

        ^ Summary:
            ? TCP is designed for reliability and accuracy, making it ideal for applications
            ! where data integrity is more important than speed.
*/


//! UDP (User Datagram Protocol)
/*
        ^ Introduction:
            # UDP is a connectionless protocol that enables fast but unreliable data transmission 
                         without establishing a dedicated connection.

        ^ Description:
            # UDP sends data as independent packets called datagrams, without verifying whether 
                        they reach their destination or in what order.
            # This makes it faster but less reliable than TCP.

        ^ Main Features:
            ~  Connectionless: 
                    No need to establish a connection.
            ~  Unreliable delivery: 
                    Packets may be lost or arrive out of order.
            ~  No error recovery: 
                    No retransmission of lost packets.
            ~  Low latency: 
                    Faster transmission due to less overhead.

        ^ Common Uses:
            $ Live streaming
            $ Online gaming
            $ Voice and video calls (VoIP)
            $ DNS queries

        ^ Summary:
           # UDP prioritizes speed and efficiency over reliability, making it suitable for 
                    applications that can tolerate data loss but require real-time performance.
*/


//! Difference Between TCP vs UDP
/*
        ^ Type:
            ~ TCP: 
                # Connection-oriented (requires a connection before data transfer)
            ~ UDP: 
                # Connectionless (no connection required)

        ^ Reliability:
            ~ TCP: 
                # Reliable — guarantees delivery, order, and error correction
            ~ UDP: 
                # Unreliable — no guarantees of delivery or order

        ^ Speed:
            ~ TCP: 
                # Slower due to connection setup, acknowledgments, and retransmissions
            ~ UDP: 
                # Faster due to minimal overhead

        ^ Data Transmission:
            ~ TCP: 
                # Stream-based (continuous data flow)
            ~ UDP: 
                # Message-based (individual packets)

        ^ Use Cases:
            ~ TCP: 
                # Web browsing, email, file transfer (when reliability matters)
            ~ UDP: 
                # Streaming, gaming, VoIP (when speed matters)

        ^ Summary:
            % TCP focuses on reliability and ordered communication,
                        while UDP focuses on speed and low latency. 
            % The choice between them depends on whether accuracy or 
                        performance is the priority for the application.
*/



