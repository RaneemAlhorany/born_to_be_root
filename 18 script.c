//! Script
/*
    //? A script is simply a file that contains a sequence of commands.
    //? These commands are executed automatically when the script runs.

    ~ In other words:
        # A script is a set of instructions written inside a file.
        # When executed, the system processes each command in order,
        # performing every action step-by-step without requiring manual input.

    ~ Purpose:
        # Scripts are used to automate tasks, enforce rules, configure systems,
        # and reduce human errors by ensuring the same commands run consistently.

    ~ Benefit:
        # Instead of typing commands manually one by one,
        # a script runs everything at once — fast, organized, and error-free.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////

//! Architecture
/*
    ? To display the architecture and detailed system information of your OS,
      you will use the command:

            uname -a

    ? The option "-a" means "--all", which tells uname to print:
        - Kernel name
        - Node (hostname)
        - Kernel release
        - Kernel version
        - Machine hardware name (CPU architecture)
        - Processor type
        - Hardware platform
        - Operating system

    # This command provides all available system details,
      except when the CPU or hardware platform cannot be detected.

    ! The command:
        uname -a    // prints full system architecture and kernel info
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Physical Cores
/*
    ? To determine the number of physical CPU cores in the system,
      we can use the  lscpu command, which summarizes CPU architecture details

    ^ Command explanation:
        lscpu | grep 'Socket(s):' | awk '{print $2}'

        # lscpu
            Displays detailed information about the CPU architecture
              (sockets, cores per socket, threads, vendor, etc).

        # grep 'Socket(s):'
            Filters the output to show only the line that contains the number of CPU sockets.
              Each “socket” represents one physical CPU chip installed on the motherboard.

        # awk '{print $2}'
            Prints the second column (the numeric value) from that line — i.e., the number of physical sockets.

    ? Example output:
        Socket(s):        1  
         Means there is one physical CPU.

    ^ To get the total number of physical cores:
        You can combine this with:
            lscpu | grep 'Core(s) per socket:' | awk '{print $4}'

        Then multiply both values:
            total_physical_cores = sockets × cores_per_socket

    ^ In this simplified version:
        cpuf=$(lscpu | grep 'Socket(s):' | awk '{print $2}')

        # cpuf → stores the number of physical CPU sockets (physical processors).

    ? Summary:
        # lscpu → shows CPU architecture  
        # grep 'Socket(s):' → finds number of sockets (physical CPUs)  
        # awk '{print $2}' → extracts the numeric value  
        # Result → total number of physical processors in the system
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Virtual Cores 
/*
    ? To determine the number of virtual CPU cores (logical processors),
      we again reference the system information found in:

            /proc/cpuinfo

    ? Each virtual core is represented in this file with an entry labeled:

            processor : <number>

      where each “processor” entry corresponds to a logical CPU that the OS can use.

    ^ To count all virtual cores:
        # We search for lines containing the word "processor".
        # Then we count how many such lines appear.

    ! Command:
        grep "processor" /proc/cpuinfo | wc -l

        ~ grep "processor" : finds every logical CPU entry
        ~ wc -l : counts the total number of entries

        note : 
            wc: short for word count

    ? The result represents the total number of virtual cores (logical processors)
      available to the operating system.

    % This method is similar to counting physical cores, but here we check for "processor"
      instead of "physical id", because each logical CPU is indexed starting from 0, 1, 2, etc.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! additional info:

    //! Difference Between Physical Cores and Virtual Cores
    /*
        ? Understanding the difference between physical and virtual (logical) CPU cores 
        is important for system performance analysis and virtualization.

        
        ^ Physical Cores
                ~ Physical cores are the actual hardware processing units inside the CPU.
                ~ Each core can execute independent instructions simultaneously.
                ~ They represent true hardware parallelism.

                # Example:
                    A CPU with 4 physical cores contains 4 real, physical execution units.
                ? Identified in /proc/cpuinfo using:
                    "physical id"

        ^ Virtual Cores (Logical Processors)
                ~ Virtual cores are created through CPU features such as:
                    - Hyper-Threading (Intel)
                    - SMT: Simultaneous Multithreading (AMD)
                ~ Each physical core can present 2 (or more) logical cores to the operating system.
                ~ This improves scheduling efficiency and allows better utilization of CPU resources,
                        but does not equal “double performance”.
                # Example:
                    → 4 physical cores with Hyper-Threading enabled  
                    become 8 virtual (logical) cores.
                ? Identified in /proc/cpuinfo using:
                    "processor"

        ^ Key Differences
            * Physical cores = actual hardware processing units  
            * Virtual cores = logical threads exposed by the physical core  
            * Virtual cores improve efficiency but do not equal true cores  
            * The OS treats each virtual core as a separate CPU, even though two logical cores
                    may share the same physical hardware resources

        ^ Summary
                Physical cores = real hardware  
                Virtual cores = logical threads  
                Virtual > physical only when CPU supports Hyper-Threading / SMT  
                Tools:
                    - grep "physical id" : count physical cores
                    - grep "processor"   : count virtual cores  
    */

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! RAM (Random Access Memory)
/*
    ? To display information about the RAM in real time, we use the command:
            free
      which shows:
        - Total RAM
        - Used RAM
        - Free RAM
        - Cached/Buffers
        - Swap usage

    ------------------------------------------------------------------------------------------------------|
    |   -       |    total    |    used    |    free    |    shared   |   buff/cache   |   available      |
    ------------------------------------------------------------------------------------------------------|
    |  Mem:     |    ####     |    ##      |    ###     |       #     |       374      |      788         | 
    |   Swap:   |    ####     |    ##      |    ###     |       0#     |                |                  |
    ------------------------------------------------------------------------------------------------------|

    ? For help and more details:
            free --help

    ? Since the subject requires the unit to be in megabytes (MB),
      we will use the command:
            free --mega
      which prints RAM information using MB units

    ^ Command: Get USED RAM in MB
        free --mega | awk '$1 == "Mem:" {print $3}'

        # free --mega  → prints RAM info in MB
        # awk          → analyzes each line
        # $1 == "Mem:" → selects the line starting with "Mem:"
        # print $3     → prints the 3rd column (used memory)

    ^ Command: Get TOTAL RAM in MB
        free --mega | awk '$1 == "Mem:" {print $2}'

        # print $2     → prints the 2nd column (total memory available)

    ^ Command: Get percentage of USED RAM
        free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'

        # $3/$2*100    → used memory / total memory × 100
        # printf(...)  → prints the percentage with 2 decimal places
        # %.2f%%       → example output: (43.21%)

    ^ Summary of What Each Value Represents:
        $2 → total memory (MB)
        $3 → used memory (MB)
        used% = ($3 / $2) * 100

    
    ? Result:
        These commands allow you to extract:
            - Total RAM in MB
            - Used RAM in MB
            - Percentage of used memory
        in a clean and precise format using free + awk.
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Disk memory
/*
    ? To view the occupied and available disk memory, we use the command:
            df
      which stands for "disk filesystem".
      It provides a complete summary of disk space usage for mounted filesystems.

    ? Since the subject requires values in megabytes (MB), we use:
            df -m
      This ensures all disk values are displayed in MB.

    ^ Filtering the relevant disk partitions:
        * Include only partitions under "/dev/" → real disk devices:
            grep "/dev/"

        * Exclude the /boot partition (not included in subject calculations):
            grep -v "/boot"

        This ensures the calculations consider only the main system partitions.

    ^ Disk Usage Table (Conceptual Example):

    --------------------------------------------------------------------------|
    |            |   total (MB)   |   used (MB)   |    free (MB)             |
    --------------------------------------------------------------------------|
    |   DISK     |     ####       |      ###       |      ###                |
    |   SWAP     |     ####       |      ###       |      ###                |
    --------------------------------------------------------------------------|

    (This table represents what df -m logically shows after filtering.)

    ^ Calculating Disk Usage Percentage:
        The commands below calculate:
            - total disk size  (sum of $2)
            - total used space (sum of $3)
            - used percentage  (used / total × 100)

        Where:
            $2 → total memory per partition (MB)
            $3 → used memory per partition (MB)
            use   += $3 → accumulate total used
            total += $2 → accumulate total size

    ^ Commands

        // Total disk size (converted to GB)
        disk_total=$(df -m | grep "/dev/" | grep -v "/boot" \
            | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
            // disk_t = total disk MB
            // divide by 1024 to convert to GB
            // output example: "19.8Gb"

        // Total used disk space (MB)
        disk_use=$(df -m | grep "/dev/" | grep -v "/boot" \
            | awk '{disk_u += $3} END {print disk_u}')
            // disk_u = used disk MB

        // Disk usage percentage
        disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" \
            | awk '{disk_u += $3} {disk_t += $2} END {printf("%d"), disk_u/disk_t*100}')
            // prints integer percent of disk usage

    ^ Summary:
        ✓ df -m → show disk usage in MB  
        ✓ grep "/dev/" → include actual disk partitions  
        ✓ grep -v "/boot" → exclude boot partition  
        ✓ awk → sum memory and compute usage percent  

        Output variables:
            disk_total   → total disk in GB  
            disk_use     → used disk in MB  
            disk_percent → disk usage percentage  

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! CPU usage percentage
/*
    ? To view the percentage of CPU usage, we use the command:
            vmstat
      which displays detailed system statistics such as:
        - processes
        - memory usage
        - CPU activity
        - system interrupts
        - waiting times
        - context switching

    ? vmstat with intervals:
        When using:
            vmstat 1 4
        It means:
            * Take system samples every 1 second
            * Collect a total of 4 samples
        The first line from vmstat is always averages since boot,
        so we use tail -1 to get the LAST sample only.

    ^ Explanation of the extraction pipeline:

        vmstat 1 4 | tail -1 | awk '{print $15}'

        Where:
            vmstat 1 4
                ~ prints 4 CPU usage samples (1 per second)

            tail -1
                ~ returns ONLY the last sample line,
                  which gives the most current CPU state

            awk '{print $15}'
                ~ prints the 15th column,
                  which corresponds to:
                    %id  → CPU idle percentage
                  (the percentage of CPU that is NOT being used)

    ^ Why we subtract from 100:
        Column 15 from vmstat = percentage of idle CPU  
        But we need percentage of used CPU

        So:
            CPU usage = 100 - idle%

        Example:
            idle = 82  
            → CPU usage = 100 - 82 = 18%

    ^ Final Commands Used in the Script:

        // CPU LOAD
        cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
            // cpul = CPU idle percentage (column 15)

        ? compute CPU usage
        cpu_op=$(expr 100 - $cpul)
            // cpu_op = CPU usage percentage (100 - idle)
            ~ expr mean expression 

        ? format result with one decimal
        cpu_fin=$(printf "%.1f" $cpu_op)
            // cpu_fin = formatted CPU usage with 1 decimal place

    
    ^ Summary:
        vmstat : get real-time CPU statistics  
        tail -1 : get last updated sample  
        awk '{print $15}' : extract idle percentage  
        100 - idle : compute CPU usage  
        ✓ printf "%.1f" : format result with one decimal  

    ? Result:
        You obtain a clean and accurate percentage representing the current CPU usage,
        formatted and ready for display in your monitoring script.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Last reboot
/*
    ? To display the date and time of the last system reboot, we use:
            who -b
      which prints the last boot time of the operating system.

    ? Example output of "who -b":
            system boot  2024-02-01  09:23

      But this includes extra text we don't need.

    ^ Filtering the output:
        We only want:
            - The date  (field 3)
            - The time  (field 4)

        So we use AWK to print only the third and fourth words:

            awk '$1 == "system" {print $3 " " $4}'

        Explanation:
            #    $1 == "system"   → match the line starting with "system"
            #    $3               → date
            #    $4               → time
            print $3 " " $4  → print them together

    ^ explain command:
        who -b | awk '$1 == "system" {print $3 " " $4}'

        This prints something like:
            2024-02-01 09:23

        Which is the exact last reboot datetime.

    ^ Script usage:

        // LAST BOOT
        lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')
            // lb = last boot date and time in one formatted string

    ^ Summary:
        who -b : prints the system boot time  
        awk : extracts only date and time  
        lb variable : stores the final output  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! LVM active
/*
    ? To check if LVM is active or not, we use the lsblk command.
      lsblk displays detailed information about all block devices:
        - hard drives
        - SSDs
        - virtual disks
        - partitions
        - LVM volumes
    
    ~ lsblk : stands for list block devices

    ? In the TYPE column from lsblk, if LVM is being used, you will see entries labeled "lvm".

    ? Our goal:
        - Count how many lines contain the word "lvm".
        - If the count is greater than 0 → LVM is active.
        - If the count is 0 → LVM is NOT active.

    ? To count occurrences:
        lsblk | grep "lvm" | wc -l

        # grep "lvm" → finds lines that contain "lvm"
        # wc -l      → counts how many matches exist

    ? Then we wrap this logic inside an IF statement to print yes/no:
        ~ to check if LVM is active or not.

        if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then 
            echo yes; 
        else 
            echo no; 
        fi

    command:
        # LVM USE
        lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)
            // lvmu = "yes" if LVM exists, otherwise "no"

    
    ^  Explanation of lvmu command (Breakdown of the full logic):
    
    ? 1) lsblk
        - Lists all block devices: disks, partitions, LVM volumes, virtual disks…
        - The output includes a TYPE column.
        - If LVM is active, some entries will have TYPE = "lvm".

    ? 2) grep "lvm"
        - Searches lsblk output for any lines containing the word "lvm".
        - If found → LVM is in use on at least one partition.

    ? 3) wc -l
        - Counts how many lines matched the grep search.
        - The result is:
            0 → LVM NOT active
            >0 → LVM active

    ? 4) if [ ... -gt 0 ]
        - "-gt" means "greater than".
        - So the condition checks:
              If number of "lvm" lines > 0 → TRUE (LVM active)

    ? 5) then echo yes
        - If LVM is active, print "yes".

    ? 6) else echo no
        - If LVM is not active, print "no".

    ? 7) lvmu=$( ... )
        - The entire IF statement is executed inside $( ).
        - The result ("yes" or "no") is stored inside the variable lvmu.


    ? 8) "fi" 
        - to signal the end of the entire IF/ELSE structure
       ~ note:
             Without "fi", Bash would not know where the IF statement ends.

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! TCP connections
/*
    ? To check the number of established TCP connections, we use the ss command.
                ss

    ? We apply the flag to show only TCP sockets :
            -t
    ? and: show all states (listening, established, closing…) by using flag :
            -a

      Together:
            ss -ta
        → lists all TCP connections in all states.

    ^ Filtering:
        ~ Among all TCP connections, we only want those that are ESTABLISHED.
          These indicate active, fully open connections between machines.

        ~ To filter them:
            grep ESTAB
        → keeps only lines where the state is "ESTAB" (short for ESTABLISHED).

    ^ Counting:
        ~ We count how many established connections exist using:
            wc -l
        ~ This gives us the exact number of currently active TCP sessions.

    ^ Full command:
        tcpc=$(ss -ta | grep ESTAB | wc -l)

        Explanation:
            ss -ta         → list all TCP sockets
            grep ESTAB      → filter only established connections
            wc -l           → count them
            tcpc = will store the number of established TCP connections

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Number of users
/*
    ? To check how many **unique users** are currently logged into the system,  
      we use the `users` command together with sorting and filtering tools.

    ^ Command used:
        ulog=$(users | tr ' ' '\n' | sort | uniq | wc -w)

    ^ Step-by-step explanation:

        # users
            → Lists all currently logged-in usernames, separated by spaces.
              Example:
                  user1 user2 user1 user3
              (Note: the same user may appear more than once if logged in multiple times.)

        # tr ' ' '\n'
            → Translates spaces into new lines.
              This converts the list into one username per line:
                  user1
                  user2
                  user1
                  user3

        # sort
            → Sorts the usernames alphabetically.
              Sorted output:
                  user1
                  user1
                  user2
                  user3

        # uniq
            → Removes duplicate consecutive lines.
              After this step:
                  user1
                  user2
                  user3

        # wc -w
            → Counts the number of words (or lines, since each username is on its own line now).
              This gives the total number of **unique logged-in users**.

    ? Example:
        Input:  user1 user2 user1 user3  
        Output:  3  

    ^ Summary:
        ~ users → list logged-in usernames  
        ~ tr → convert to line format  
        ~ sort + uniq → remove duplicates  
        ~ wc -w → count unique users  
        ~ ulog → stores total number of unique active users  
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! IP address & MAC
/*
    ? To obtain the IP address of the machine, we use:
            hostname -I
      This command prints all IP addresses assigned to the host.
      It is simple, clean, and fits the project requirements.

    ? To obtain the MAC address, we use the ip link command.
      ip link displays information about all network interfaces, including:
        - interface names
        - states (UP / DOWN)
        - MAC addresses
        - MTU size
        - network device details

    ~ Since ip link prints multiple interfaces, we need to filter the output.

    ? We use:
            grep "link/ether"
      because:
        - "link/ether" is the line that contains the MAC address
        - The MAC address appears as the *second* field of that line

    ~ Then we extract the MAC using awk:
            awk '{print $2}'
        → prints only the second column
        → which is the MAC address (format: XX:XX:XX:XX:XX:XX)

    ^ Full command to extract MAC:
            ip link | grep "link/ether" | awk '{print $2}'

        Explanation:
            ip link             → list network interfaces
            grep "link/ether"   → find lines containing MAC info
            awk '{print $2}'    → extract MAC address value

    ^ Script usage:

        # NETWORK
        ip=$(hostname -I)
            // ip  = machine's IP address

        mac=$(ip link | grep "link/ether" | awk '{print $2}')
            // mac = machine's MAC address from network interface

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//! Number of commands executed with sudo
/*
    ? To obtain the number of commands executed using sudo, we use the journalctl command.
      journalctl is a system tool responsible for collecting, managing, and reading system logs.

    
    ^ Step 1: Filter logs by executable name using _COMM=sudo
        journalctl _COMM=sudo

        ? Why _COMM?
            - _COMM filters entries by the name of the executable used.
            - Since we want only logs generated by the sudo executable,
              using _COMM=sudo ensures we get *only* sudo-related logs.

        This removes noise from other processes.

    ^ Step 2: Filter only command execution logs
        journalctl logs will include entries such as:
            - session start
            - session end
            - PAM authentication
            - sudo command execution

        We only want the lines that record **actual sudo commands** executed.

        For this we use:
            grep COMMAND

        Meaning:
            - It extracts only the entries representing the command run with sudo.
            - Lines for login, logout, or authorization are ignored.

    ^ Step 3: Count the number of sudo commands executed
        wc -l

        → This counts the number of lines returned by the previous filters.
        → Each line = one executed sudo command.

    ^ Full command:
        journalctl _COMM=sudo | grep COMMAND | wc -l

        Breakdown:
            journalctl _COMM=sudo   → show only logs generated by sudo
            grep COMMAND             → select only executed sudo commands
            wc -l                    → count how many commands were executed

    
    ^ How to verify it works:
        1) Run the command:
                journalctl _COMM=sudo | grep COMMAND | wc -l
        2) Execute something with sudo, for example:
                sudo ls
        3) Run the first command again.
        4) The number should increase by 1.

    
    ^ Script usage:

        # SUDO
        cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
            // cmnd = number of commands executed with sudo

*/



























