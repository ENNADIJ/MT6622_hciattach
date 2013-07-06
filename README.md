MT6622_hciattach
================


build:
cd /picuntu/myrepo/MT6622_hciattach/mediatek/source/external/bluetooth/driver

power 0 Switch off BT device
power 1 Switch on BT device

Firmware in /system/etf/firmware/MTK_MT6622_E2_Patch.nb0

hciattach -n -t10 -s 115200 /dev/ttyS0 mtk   to start hci device

TODO:
------------------
Restore log functions
Cleanup debugging printf

Possibly move device setup within bt_hwctl kernel module to use standard hciattach
