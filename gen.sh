cat head > lookup_gen.c
#objdump -T $1|less|grep \*UND| cut -f2|cut -d ' ' -f4-10| while read line; do echo void "$line"\(\)\;;done >> lookup_gen.c
echo 'void *lookup_libc(const char *name) {' >> lookup_gen.c
objdump -T $1|less|grep \*UND| cut -f2|cut -d ' ' -f4-10| while read line; do echo extern char "$line"\;if\(\!my_strcmp\(name,\""$line"\"\)\)return "$line"\;;done >> lookup_gen.c
cat end >> lookup_gen.c