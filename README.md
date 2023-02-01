# GTA V Decompiled Scripts

Current Version: V1.66 Build 2824

This repository contains all necessary components to export the scripts of GTA5.

If you don't want to decompile the scripts yourself you can find them in the folder: `decompiled_scripts`.

Note that this is a git repository, so there is a history, if you want to look at older scripts.

- Thanks to **Sainan**

## Doing it yourself

1. Clone this repo.
2. Install [sfk](http://stahlworks.com/downloads.html), we will use this tool to change one byte in all scripts so that OpenIV can decrypt the scripts
3. Use OpenIV to navigate to `update/update2.rpf/x64/levels/gta5/script/script_rel.rpf`.
4. Press Ctrl+A then right-click and select "extract" to extract all scripts into the "raw_scripts" folder.
5. Download the background script from `http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_xxxx_y.rpf` where `xxxx_y` equals your the game build, e.g. [`bg_ng_2802_0.rpf`](http://prod.cloud.rockstargames.com/titles/gta5/pcros/bgscripts/bg_ng_2802_0.rpf) for build 2802, and extract "valentinerpreward2" via OpenIV and copy it to ``raw scripts``.
6. Open a terminal in the folder where you just copied the raw scripts. And execute the following command: 
    ```
    sfk rep -binary /525343370C/525343370A/ -dir . -file .ysc
    --> replace byte: 0xB with 0xA
    --> only shows the diff

    sfk rep -binary /525343370C/525343370A/ -dir . -file .ysc -yes
    --> confirm editing
    ```
7. Upload the edied raw scripts somewhere with OpenIV in your GTA 5 directory. 
8. Press Ctrl+A then right-click and select "Save Content/Export" to export all scripts to ``scripts``
9. Run following command on your terminal: `php bulk_decompile.php`.
