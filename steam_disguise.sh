#!/bin/bash
export STEAM_RUNTIME_PREFER_HOST_LIBRARIES=0
export STEAM_COMPAT_MOUNTS=/mnt/games
export STEAM_COMPAT_SESSION_ID=steam-linux
export WINEPREFIX=~/.wine/steam-wine
export WINEARCH=win64
export WINEDLLOVERRIDES="dxgi=n"
export WINEDEBUG=-all
export WINEDLLOVERRIDES="gameoverlayrenderer64=n,b"
export WINEFSYNC=1
export WINE_LARGE_ADDRESS_AWARE=1
export WINE_FULLSCREEN_FSR=1
export WINEESYNC=1
export STEAM_COMPAT_DATA_PATH="$HOME/.local/share/Steam/steamapps/compatdata"
export DXVK_HUD=0
exec /usr/bin/steam "$@"

