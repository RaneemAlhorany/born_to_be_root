//! LVM (logical volume manager)

/* 
    ! definnition :
        # LVM (Logical Volume Manager) 
            % is a tool in Linux used to manage storage more flexibly
            % It allows you to create, resize, and manage disk partitions (called logical volumes) more easily than traditional methods

    ! explanation :
        ? LVM is a system for managing disk storage in a flexible way
        ? It allows you to create, resize, and manage (called logical volumes) more easily 
        ?than traditional partitioning methods LVM sits on top of physical storage devices (like hard drives or SSDs) 
        ? and provides an abstraction layer that makes it easier to manage storage

    ! main usage :
        ~ flexibility
        ~ Without LVM, if a partition (like /home) gets full, you must repartition or reinstall
        ~ With LVM, you can expand or move it easily without losing data or stopping the system

    ! how LVM works: 
        % Imagine you have several disks, and instead of using each separately, LVM combines them into one large pool
        % From this pool, you can create smaller parts /virtual partitions called (logical volumes (LVs))
        % which act like normal partitions where you put files and folders /that can be resized or moved as needed
    
    ! components of LVM:
        $ Physical Volumes (PVs):
            # These are the actual physical storage devices (like /dev/sda) that are used by LVM

        $ Volume Groups (VGs):
            # These are pools of storage created by combining multiple physical volumes. 
            ~ You can think of a VG as a big storage container

        $ Logical Volumes (LVs):
            # These are the virtual partitions created within a volume group. You can create, resize, and delete logical volumes as needed

    ! example scenario:
        ? Think of physical disks as LEGO blocks 🧱
        ? You combine them to form a set (Volume Group),
        ? and from that set, you build different shapes (Logical Volumes) depending on your needs

    ^ Benefits of using LVM:
        ~ Flexibility: You can easily resize logical volumes without needing to repartition the disk
        ~ Snapshots: LVM allows you to create snapshots of logical volumes, which can be useful for backups or testing
        ~ Improved storage management: You can add or remove physical volumes from a volume group as your storage needs change

    ^ Common use cases:
        ? Servers that require dynamic storage allocation
        ? Systems that need frequent resizing of partitions
        ? Environments where data integrity and backup are critical

    ^ Summary:
        * LVM is a powerful tool for managing disk storage in Linux systems
        * It provides flexibility and ease of management compared to traditional partitioning methods
        * Understanding LVM is essential for system administrators who need to manage complex storage requirements
*/


