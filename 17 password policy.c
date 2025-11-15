//! password policy
/*
    # in this section : you will create or modify the file in :
        /etc/login.defs
    # and apply password complexity rules in :
        /etc/pam.d/common-password

*/
//! steps :
    //? apply all steps in the correct place inside your README project file

//! Password expiration rules : 
    //? (PASS_MAX_DAYS / PASS_MIN_DAYS)


//! explain each command :    


    //~ PASS_MAX_DAYS:
        //? Maximum number of days a password can be used before it expires.
        //? Example: PASS_MAX_DAYS 30 → user must change password every 30 days.

    //~ PASS_MIN_DAYS:
        //? Minimum number of days before the user is allowed to change the password again.
        //? Example: PASS_MIN_DAYS 2 → must wait 2 days before changing password again. 

    //~ PASS_WARN_AGE: 
        //? Number of days before password expiration to display a warning.
        //? Example: PASS_WARN_AGE 7 → warning starts 7 days before expiry.

    //~ minlen=10
        //? The minimum number of characters required for a password.
        //? Password must be at least 10 characters long.

    //~ ucredit=-1 
        //? Password must contain at least ONE uppercase (capital) letter.
        //? (-1) means minimum required.
        //? (+1) would mean maximum allowed.

    //~ lcredit=-1 
        //? Password must contain at least ONE lowercase letter.
        //? (-1) means minimum required.
        //? (+1) would mean maximum allowed.

    //~ dcredit=-1 
        //? Password must contain at least ONE numerical digit (0–9).

    //~ maxrepeat=3 
        //? Prevents repeating the same character more than 3 times in a row.
        //? "AAA" allowed, but "AAAA" NOT allowed.

    //~ reject_username 
        //? Password cannot contain the username inside it.
        //? Prevents weak passwords like: "mohammed123mohammed".

    //~ difok=7 
        //? At least 7 characters must be different from the previous password.
        //? Prevents tiny changes like changing only one number.

    //~ enforce_for_root 
        //? Enforces all password rules for the ROOT account as well.
        //? Root must follow the same complexity policy as normal users.



//! Password quality rules using libpam-pwquality 
//! libpam-pwquality
/*
    ? libpam-pwquality is a PAM (Pluggable Authentication Module) library used to enforce
      strong password policies on Linux systems.

    ? It ensures that all newly created or changed passwords meet specific security requirements,
      helping protect the system from weak or easy-to-guess passwords.

    ^ What libpam-pwquality does:
        - Checks password complexity during password creation or modification.
        - Enforces rules such as:
            * minimum length
            * uppercase letters requirement
            * lowercase letters requirement
            * digits requirement
            * special characters
            * disallowing repeated characters
            * disallowing username inside password
            * differences required from previous password

    ^ Where the configuration is located:
        /etc/security/pwquality.conf

        ~ This file controls the rules enforced by libpam-pwquality.

        Examples of configurable fields:
            minlen=10            → minimum password length
            ucredit=-1           → require at least one uppercase letter
            lcredit=-1           → require at least one lowercase letter
            dcredit=-1           → require at least one digit
            maxrepeat=3          → prevent repeated characters more than 3 times
            reject_username      → disallow password containing username
            difok=7              → require at least 7 character differences from old password
            enforce_for_root     → apply rules to root as well

    ^ Where it is used:
        - The module is applied through the PAM system in:
            /etc/pam.d/common-password

        ~ This file determines how password checking is done for all users.

        ~ You normally add rules like:
            password   requisite    pam_pwquality.so retry=3 minlen=10 ucredit=-1 lcredit=-1 ...

    ^ Installing libpam-pwquality:
        sudo apt install libpam-pwquality
        ~ This installs the module and its configuration files.

    ^ Purpose in the Born2BeRoot project:
        - Enforces strong password rules as required by the subject.
        - Ensures that all users (including root) follow the same security standards.

*/


//! PAM Module
/*
    ? PAM stands for "Pluggable Authentication Module".
      It is a flexible authentication framework used by Linux systems to manage:
        - user login
        - password changes
        - SSH authentication
        - sudo privileges
        - service access controls

    ^ What PAM does:
        ~ PAM allows the system to use different authentication methods
          without modifying programs like sudo, login, sshd, passwd, etc.

        ~ Instead of each program having its own authentication system,
          PAM centralizes all authentication through modules.

        * Examples of PAM modules:
            - pam_unix.so         → Standard Unix authentication (passwords in /etc/shadow)
            - pam_pwquality.so    → Enforce password strength rules
            - pam_limits.so       → Control resource limits per user
            - pam_deny.so         → Always deny access
            - pam_permit.so       → Always allow access
            - pam_env.so          → Set or read environment variables
            - pam_securetty.so    → Restrict root login to secure terminals

    ^ Where PAM configurations are stored:
        The main configuration directory is:
            /etc/pam.d/

        Each service (sudo, login, ssh, password change) has its own config file.

        Examples:
            /etc/pam.d/common-auth      → Authentication rules
            /etc/pam.d/common-password  → Password policies
            /etc/pam.d/common-session   → Session management
            /etc/pam.d/common-account   → Account restrictions

    ^ How PAM works (high-level):
        1) A user tries to authenticate (e.g., typing sudo or logging in).
        2) The program (sudo/login/ssh) calls PAM.
        3) PAM checks the module stack defined for that service.
        4) Each module:
            - approves
            - denies
            - or adds extra checks
        5) Access is granted only if the rules allow it.

    ^ Example (password requirements):
        Editing `/etc/pam.d/common-password`:
            password requisite pam_pwquality.so retry=3 minlen=10 dcredit=-1 …

        This enforces strong password requirements during `passwd`.

    ^ Why PAM is important:
        - Provides centralized authentication
        - Highly customizable
        - Improves system security
        - Required for password policy enforcement in Born2BeRoot

*/


//! Advantages and disadvantages of password policies (General Overview)
/*
    ? Password policies (such as max days, complexity rules, character requirements, etc.)
      are designed to increase system security by ensuring that all user passwords are strong,
      hard to guess, and regularly updated.

    ^ General Advantages:
        - Improve overall system security by preventing weak or easy passwords.
        - Reduce the risk of brute-force attacks and password cracking.
        - Make it harder for attackers to exploit reused or old passwords.
        - Force users to follow security best practices.
        - Help prevent common mistakes such as using the username or repeated characters.
        - Protect high-privileged accounts like root with stronger requirements.
        - Ensure password rotation, reducing the impact of compromised passwords.

    ^ General Disadvantages:
        - Complex password rules may frustrate users or make passwords harder to remember.
        - Users might write passwords on paper or save them insecurely to remember them.
        - Frequent expiration rules may lead to simpler, predictable passwords.
        - Too many restrictions can reduce usability and productivity.
        - Some password rules can be unnecessarily strict for small systems or personal devices.
        - Higher complexity increases support requests (password resets, lockouts).

    ^ Summary:
        - Strong password policies significantly increase system protection,
          but must be balanced to avoid making passwords too difficult to use.
*/


