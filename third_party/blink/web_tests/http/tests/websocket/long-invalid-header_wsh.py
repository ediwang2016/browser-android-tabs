from mod_pywebsocket import handshake


def web_socket_do_extra_handshake(request):
    msg = 'HTTP/1.1 101 WebSocket Protocol Handshake\r\n'
    msg += ('p' * 1024) + '\r\n'
    msg += '\r\n'
    request.connection.write(msg)
    # Prevents pywebsocket from sending its own handshake message.
    raise handshake.AbortedByUserException('Abort the connection')


def web_socket_transfer_data(request):
    pass
