#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function) {
  if(!function) {
    fprintf(stderr, "%s:%d: %s: Assertion %s failed.", file, line, function, assertion);
  } else {
    fprintf(stderr, "%s:%d: Assertion %s failed.", file, line, assertion);
  }
  abort();
}

void _gfortran_concat_string (int destlen, char *dest,
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

int32_t _gfortran_pow_i4_i4(int32_t val, int32_t exppon) {
  return (int32_t) pow(val, exppon);
}

int __printf_chk (int flag, const char *format, ...)
{
  va_list ap;
  int done;
  va_start (ap, format);
  done = vfprintf (stdout, format, ap);
  va_end (ap);
  return done;
}

