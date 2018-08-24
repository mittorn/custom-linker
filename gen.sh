cat head > lookup_gen.c
#objdump -T $1|less|grep \*UND| cut -f2|cut -d ' ' -f4-10| while read line; do echo void "$line"\(\)\;;done >> lookup_gen.c
echo 'void *lookup_libc(const char *name) {' >> lookup_gen.c
objdump -T $1|less|grep \*UND| cut -f2-100|cut -d ' ' -f4-100| grep -v _Jv_RegisterClasses| grep -v __gmon_start__ | grep -v _ITM_registerTMCloneTable | grep -v _ITM_deregisterTMCloneTable | while read line; do echo extern char "$line"\;if\(\!my_strcmp\(name,\""$line"\"\)\)return \&"$line"\;;done >> lookup_gen.c
cat end >> lookup_gen.c