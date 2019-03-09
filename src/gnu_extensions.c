#include <stdlib.h>
#include <string.h>

void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function) {
  if(!function) {
    fprintf(stderr, "%s:%d: %s: Assertion %s failed.", file, line, function, assertion);
  } else {
    fprintf(stderr, "%s:%d: Assertion %s failed.", file, line, assertion);
  }
  abort();
}

void concat_string (int destlen, char *dest,
	       int len1, const char *s1,
	       int len2, const char *s2)
{
  if (len1 >= destlen)
    {
      memcpy (dest, s1, destlen * sizeof (char));
      return;
    }
  memcpy (dest, s1, len1 * sizeof (char));
  dest += len1;
  destlen -= len1;

  if (len2 >= destlen)
    {
      memcpy (dest, s2, destlen * sizeof (char));
      return;
    }

  memcpy (dest, s2, len2 * sizeof (char));
  memset (&dest[len2], ' ', destlen - len2);
}
