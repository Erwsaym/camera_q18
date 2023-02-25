#include <iostream>

#include <SFML/Network.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    sf::TcpSocket socket;
    socket.connect(sf::IpAddress("192.168.1.26"), 51503);

    std::string message = "{\"msg_index\":34,\"msg_name\":\"GetMdSwitch\",\"ipc_pwd\":\"B9468F27414C952E67E7A439ABB2FD85\",\"from\":0,\"ipc_id\":\"26300645364\"}";

    socket.send(message.data(), message.size());

    char *buffer = new char[1024]{0};
    std::size_t received = 0;
    socket.receive(buffer, 1024, received);

    std::cout << "RECEIVED : " << buffer << std::endl;

    socket.disconnect();

    return 0;
}
