cat head > lookup_gen.c
#objdump -T $1|less|grep \*UND| cut -f2|cut -d ' ' -f4-10| while read line; do echo void "$line"\(\)\;;done >> lookup_gen.c
echo 'void *lookup_libc(const char *name) {' >> lookup_gen.c
#for f in $*;do echo $f;objdump -T $f|grep \*UND| cut -f2-100|cut -d ' ' -f4-100|grep Is; done

SYMS=$(for f in $*; do objdump -T $f|grep \*UND| cut -f2-100|cut -d ' ' -f4-100; done)
SYMS2=' '
for s in $SYMS
do
case $SYMS2 in
*\ $s\ *) ;;
*)
case $s in
_Jv_RegisterClasses|__gmon_start__|_ITM_registerTMCloneTable|_ITM_deregisterTMCloneTable) ;;
curl*|__asan_*|__ubsan_*|*UTIL_*|*RuneLocale*);;
__ctype_tolower|__ctype_toupper|__ctype_b);;
*) echo extern char "$s"\;if\(\!my_strcmp\(name,\""$s"\"\)\)return \&"$s"\; >> lookup_gen.c
;;
esac
SYMS2="$SYMS2 $s "
;;
esac
done

cat end >> lookup_gen.c