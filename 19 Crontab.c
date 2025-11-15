//! crontab
/*
    # you will modify the file in :
        sudo crontab -e

    ? crontab is a background task scheduler in Linux
      It allows you to automatically run scripts or commands at specific times,
      intervals, or system events — without needing user interaction

    ^ What crontab does:
        $ Runs tasks periodically (every minute, hour, day…)
        $ Executes scripts automatically after reboot
        $ Handles background system automation
        $ Ideal for running monitoring.sh regularly

    ^ Editing the crontab file:
            crontab -e
        This opens the user's cron table in the default editor.
    
    ^ Standard cron timing format:
            * * * * *  command
            | | | | |
            | | | | └── day of week (0–7)
            | | | └──── month (1–12)
            | | └────── day of month (1–31)
            | └──────── hour (0–23)
            └────────── minute (0–59)

    ! the command used in Born2BeRoot:

        @reboot /bin/bash -c 'while true; do /home/ralhoura/monitoring.sh; sleep 600; done' &

    
    ^ Explanation of this command:

        @reboot
            ~ Runs the command every time the system starts

        /bin/bash -c ' ... '
            ~ Tells bash to execute the entire quoted string as a command

        while true; do
            ~ Infinite loop that repeats forever after boot

        /home/ralhoura/monitoring.sh
            ~ Runs your monitoring script

        sleep 600
            ~ Waits 600 seconds (10 minutes) before repeating.

        &  
            ~ uns the whole loop in the background, so the system can boot normally.

    ^ Why this method is used:
        # Ensures monitoring.sh runs continuously  
        # No need for classic "* * * * *" scheduling  
        # Starts automatically after each reboot  
        # Reliable for Born2BeRoot monitoring requirements  

    ^ Additional useful crontab commands:
        crontab -l   → list current cron jobs  
        crontab -r   → remove all cron jobs  
        sudo service cron status   → check cron  
        sudo service cron restart  → restart cron  

    ? Summary:
        - crontab automates background tasks
        - "@reboot" starts your monitoring loop after boot
        - Script re-runs every 10 minutes using sleep
*/
