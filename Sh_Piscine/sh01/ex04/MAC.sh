ifconfig | grep ether | grep -v ethernet |awk '{print $2}'
