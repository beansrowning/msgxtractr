
#ifdef __cplusplus
extern "C" {
#endif

/* This file generated by names.awk do not edit! */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "common.h"
#include "tnef_types.h"
char*
get_tnef_type_str(uint16 d)
{
    static char buf[128];
    static char* str;
    switch(d) {
    case szTRIPLES:
        str="triples";
        break;
    case szSTRING:
        str="string";
        break;
    case szTEXT:
        str="text";
        break;
    case szDATE:
        str="date";
        break;
    case szSHORT:
        str="short";
        break;
    case szLONG:
        str="long";
        break;
    case szBYTE:
        str="byte";
        break;
    case szWORD:
        str="word";
        break;
    case szDWORD:
        str="dword";
        break;
    case szMAX:
        str="max";
        break;
    default:
        str=NULL;
        break;
    }
    if ( str )
    {
        sprintf(buf,"%s <%04x>",str,d);
    }
    else
    {
        sprintf(buf,"%04x",d);
    }
    return buf;
}

#ifdef __cplusplus
}
#endif