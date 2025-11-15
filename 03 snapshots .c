//! snapshots
/*
    ^ definition :
        ? is a “picture” of the entire virtual machine’s state at a specific point in time

    ^ includes:
        ~ The virtual hard disk contents
        ~ The memory (RAM) state
        ~ The machine configuration    

    ^ notes:
        % Taking a snapshot means freezing the current state so that 
                % you can revert back to it later, just like a time checkpoint
                
    ^ Important:
        % Taking snapshots alters the virtual disk’s signature
        % This makes your signature.txt invalid → project = 0
*/


//! Why Are Snapshots Sometimes Forbidden in Projects?
//// Projects—especially in education or production—often prohibit snapshots for these reasons:
/* 
^     Performance Issues:
              Multiple snapshots slow down the virtual 
              machine and consume large disk space.

^    Not a Real Backup:
              Snapshots are not backups. 
              If the base disk is corrupted, all snapshots are lost.

^    Management Complexity:
                Having many snapshots makes it hard 
                to track progress or maintain consistent environments
^ Educational Reason:
                Using snapshots removes the learning challenge.
                The project wants you to fix mistakes manually, not by reverting to old states.

*/


//! Snapshot vs Save State
/*
~      | ------------ | --------------------------------------- | ----------------------------------------- |
!      | Aspect       | Snapshot                                | Save State                                |
~      | ------------ | --------------------------------------- | ----------------------------------------- |
?      | **Purpose**  | Long-term restore point                 | Temporary pause/resume                    |
?      | **Usage**    | Can create multiple snapshots anytime   | Used to resume later from current session |
?      | **Saves**    | Disk + Memory + Settings                | Only the live memory                      |
?      | **Duration** | Long-term (historical)                  | Short-term (temporary)                    |
?      | **Risk**     | Can slow performance and use much space | Usually safe and lightweight              |
~      | ------------ | --------------------------------------- | ----------------------------------------- |
*/


