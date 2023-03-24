#ifndef _PROCESSPOOL_H
#define _PROCESSPOOL_H

#include <iostream>
#include <sys/epoll.h>

class process{
public:
    process():m_pid(-1){

    }
private:
    pid_t m_pid;
    int m_pipefd[2];
};