import socket
def find_servic_name():
    protocolname='tcp'
    for port in [80,25]:
        print "Port: %s => service name: %s" %(port, socket.getservbyport(port,protocolname))
    print "port:%s => service name: %s"%(53,socket.getservbyport(53,'udp'))

if __name__=='__main__':
    find_servic_name()
    
