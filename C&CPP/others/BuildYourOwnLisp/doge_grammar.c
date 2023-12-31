#include "mpc.h"

int main(int argc,char**argv){
    mpc_parser_t* Addjective=mpc_new("adjective");
    mpc_parser_t* Noun=mpc_new("noun");
    mpc_parser_t* Pharse=mpc_new("pharse");
    mpc_parser_t* Doge=mpc_new("doge");

    mpca_lang(MPCA_LANG_DEFAULT,
     "                                           \
      adjective : \"wow\" | \"many\"            \
                |  \"so\" | \"such\";           \
      noun      : \"lisp\" | \"language\"       \
                | \"book\" | \"build\" | \"c\"; \
      phrase    : <adjective> <noun>;           \
      doge      : <phrase>*;                    \
    ",
    Addjective,Noun,Pharse,Doge);
    mpc_cleanup(4,Addjective,Noun,Pharse,Doge);
    return 0;
}