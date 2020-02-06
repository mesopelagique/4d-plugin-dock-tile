# 4d-plugin-dock-tile

Control the dock tile.

### Platform

| carbon | cocoa | win32 | win64 |
|:------:|:-----:|:---------:|:---------:|
||<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" /> |<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" /> |<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />

### Version

<img src="https://user-images.githubusercontent.com/1725068/41266195-ddf767b2-6e30-11e8-9d6b-2adf6a9f57a5.png" width="32" height="32" /> <img width="32" alt="4D" src="https://user-images.githubusercontent.com/1725068/73986501-15964580-4981-11ea-9ac1-73c5cee50aae.png"> <img src="https://user-images.githubusercontent.com/1725068/73900128-1c19b400-48d2-11ea-9979-f5c6acaac8d4.png" width="32" height="32" />

Commands
---

```c
// --- Dock
DOCK_Get_badge
DOCK_SET_BADGE
DOCK_CANCEL_BOUNCE
DOCK_Bounce
DOCK_SET_ICON
DOCK_Get_icon

// --- Size
DOCK_GET_SIZE
DOCK_GET_SCREEN_FRAME
```

Example
-------
To resize the window to touch the Dock.

```
DOCK GET SCREEN FRAME ($x;$y;$width;$height)

$offsetY:=102  //Design Mode Tool Bar

SET WINDOW RECT($x;$offsetY;$x+$width;$height+Menu bar height;Frontmost window)
```
