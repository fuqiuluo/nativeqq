#ifndef NATIVEQQ_OICQ_H
#define NATIVEQQ_OICQ_H

#define SUB_APPID 0x200302d5


#include "net/client.h"

namespace oicq {


    /**
     * OICQ主类
     */
    class Oicq {
    public:
        /**
         * 密码登录
         * @param uin
         * @param pwdMd5
         */
        void getStByPwd(long uin, const char* pwdMd5);

    public:
        /**
         * 当前对象是否已登录
         */
        bool isLogin = false;

    protected:

        /**
         * net发包类
         */
        OicqClient client;
    };
}

#endif //NATIVEQQ_OICQ_H
