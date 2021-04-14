#ifndef _SERVER_H_
#define _SERVER_H_

#include <string>

namespace CodeCraft2021 {


    class Server
    {

    public:
        // �ͺ�,Ψһ��ʶ�����Ȳ����� 20���������ֺʹ�СдӢ���ַ�����
        std::string serverType;
        // CPU����
        long cpu;
        // �ڴ��С
        long memory;
        // Ӳ���ɱ�
        long oricost;
        // ÿ���ܺĳɱ�
        long dailycost;

        // ���캯��, ʹ�ò�������
        Server(std::string& serverType, long cpu, long memory, long oricost, long dailycost);

        // ���캯��, ʹ���ַ�������
        Server(std::vector<std::string>& serverString);

        // �޲ι��캯��, ���� unordered_map�Ĳ���
        Server();

        // ��������
        ~Server();

        void toString();
    };
}

#endif