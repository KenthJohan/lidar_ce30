## Linux Deps
```bash
sudo apt install build-essential
sudo apt-get install libboost-all-dev
sudo apt-get install cmake

ce30_recorder -s | ./fod -i -a tcp://192.168.1.176:9002
```

## Windows Deps
```
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-boost
```

## Setup Samba

```bash
sudo nano /etc/samba/smb.conf
```

```bash
[no_password_folder]
    path = /home
    writeable = yes
    guest ok = yes
    writable = yes
    available = yes
    browsable = yes
    public = yes
    force user = root
```