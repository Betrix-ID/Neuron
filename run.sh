#!/system/bin/sh
# Checking ID shell
if [ "$(id -u)" -ne 2000 ]; then
    echo "[ Error |@UnixeID(Yeye)]"
    exit 1
fi
# Smart Notification
shell() {
    sor="$1"
    cmd notification post -S bigtext -t '♨️ Neuron' 'Tag' "$sor" > /dev/null 2>&1
}
# Style display Terminal
    echo
    echo "     ☆================================☆"
    echo
    echo "       ~ Description. Neuron.... "
    echo
    echo "       - Author                 :  @UnixeID"
    echo "       - Point                    :  Experimental [ Propertis ]"
    echo "       - Release               :  11 - Mar - 2025"
    echo "       - Name Shell         :  Neuron"
    echo
    echo "    |_______________________________________|"
    echo "    \______________________________________/"
    echo
    echo "   Priority Neuron. "
    sleep 2
    echo
    echo
     rm -rf /data/local/tmp/vsync
     cp /sdcard/Job/vsync /data/local/tmp 
     chmod +x /data/local/tmp/vsync 
       if [ "$1" = "-E" ]; then
        shell "Wait To Applay Min 1-3"
        /data/local/tmp/vsync -E
    elif [ "$1" = "-F" ]; then
        /data/local/tmp/vsync -F
    elif [ "$1" = "-l" ]; then
        /data/local/tmp/vsync -l
    elif [ "$1" = "-h" ]; then
       /data/local/tmp/vsync -h
    else
        printf "Usage Joy [-g|-b|-l|-w|-h]\n"
    fi
    