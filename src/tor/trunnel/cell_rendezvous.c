/* cell_rendezvous.c -- generated by Trunnel v1.5.3.
 * https://gitweb.torproject.org/trunnel.git
 * You probably shouldn't edit this file.
 */
#include <stdlib.h>
#include "ext/trunnel/trunnel-impl.h"

#include "trunnel/cell_rendezvous.h"

#define TRUNNEL_SET_ERROR_CODE(obj) \
  do {                              \
    (obj)->trunnel_error_code_ = 1; \
  } while (0)

#if defined(__COVERITY__) || defined(__clang_analyzer__)
/* If we're running a static analysis tool, we don't want it to complain
 * that some of our remaining-bytes checks are dead-code. */
int cellrendezvous_deadcode_dummy__ = 0;
#define OR_DEADCODE_DUMMY || cellrendezvous_deadcode_dummy__
#else
#define OR_DEADCODE_DUMMY
#endif

#define CHECK_REMAINING(nbytes, label)                           \
  do {                                                           \
    if (remaining < (nbytes) OR_DEADCODE_DUMMY) {                \
      goto label;                                                \
    }                                                            \
  } while (0)

trn_cell_rendezvous1_t *
trn_cell_rendezvous1_new(void)
{
  trn_cell_rendezvous1_t *val = trunnel_calloc(1, sizeof(trn_cell_rendezvous1_t));
  if (NULL == val)
    return NULL;
  return val;
}

/** Release all storage held inside 'obj', but do not free 'obj'.
 */
static void
trn_cell_rendezvous1_clear(trn_cell_rendezvous1_t *obj)
{
  (void) obj;
  TRUNNEL_DYNARRAY_WIPE(&obj->handshake_info);
  TRUNNEL_DYNARRAY_CLEAR(&obj->handshake_info);
}

void
trn_cell_rendezvous1_free(trn_cell_rendezvous1_t *obj)
{
  if (obj == NULL)
    return;
  trn_cell_rendezvous1_clear(obj);
  trunnel_memwipe(obj, sizeof(trn_cell_rendezvous1_t));
  trunnel_free_(obj);
}

size_t
trn_cell_rendezvous1_getlen_rendezvous_cookie(const trn_cell_rendezvous1_t *inp)
{
  (void)inp;  return TRUNNEL_REND_COOKIE_LEN;
}

uint8_t
trn_cell_rendezvous1_get_rendezvous_cookie(trn_cell_rendezvous1_t *inp, size_t idx)
{
  trunnel_assert(idx < TRUNNEL_REND_COOKIE_LEN);
  return inp->rendezvous_cookie[idx];
}

uint8_t
trn_cell_rendezvous1_getconst_rendezvous_cookie(const trn_cell_rendezvous1_t *inp, size_t idx)
{
  return trn_cell_rendezvous1_get_rendezvous_cookie((trn_cell_rendezvous1_t*)inp, idx);
}
int
trn_cell_rendezvous1_set_rendezvous_cookie(trn_cell_rendezvous1_t *inp, size_t idx, uint8_t elt)
{
  trunnel_assert(idx < TRUNNEL_REND_COOKIE_LEN);
  inp->rendezvous_cookie[idx] = elt;
  return 0;
}

uint8_t *
trn_cell_rendezvous1_getarray_rendezvous_cookie(trn_cell_rendezvous1_t *inp)
{
  return inp->rendezvous_cookie;
}
const uint8_t  *
trn_cell_rendezvous1_getconstarray_rendezvous_cookie(const trn_cell_rendezvous1_t *inp)
{
  return (const uint8_t  *)trn_cell_rendezvous1_getarray_rendezvous_cookie((trn_cell_rendezvous1_t*)inp);
}
size_t
trn_cell_rendezvous1_getlen_handshake_info(const trn_cell_rendezvous1_t *inp)
{
  return TRUNNEL_DYNARRAY_LEN(&inp->handshake_info);
}

uint8_t
trn_cell_rendezvous1_get_handshake_info(trn_cell_rendezvous1_t *inp, size_t idx)
{
  return TRUNNEL_DYNARRAY_GET(&inp->handshake_info, idx);
}

uint8_t
trn_cell_rendezvous1_getconst_handshake_info(const trn_cell_rendezvous1_t *inp, size_t idx)
{
  return trn_cell_rendezvous1_get_handshake_info((trn_cell_rendezvous1_t*)inp, idx);
}
int
trn_cell_rendezvous1_set_handshake_info(trn_cell_rendezvous1_t *inp, size_t idx, uint8_t elt)
{
  TRUNNEL_DYNARRAY_SET(&inp->handshake_info, idx, elt);
  return 0;
}
int
trn_cell_rendezvous1_add_handshake_info(trn_cell_rendezvous1_t *inp, uint8_t elt)
{
  TRUNNEL_DYNARRAY_ADD(uint8_t, &inp->handshake_info, elt, {});
  return 0;
 trunnel_alloc_failed:
  TRUNNEL_SET_ERROR_CODE(inp);
  return -1;
}

uint8_t *
trn_cell_rendezvous1_getarray_handshake_info(trn_cell_rendezvous1_t *inp)
{
  return inp->handshake_info.elts_;
}
const uint8_t  *
trn_cell_rendezvous1_getconstarray_handshake_info(const trn_cell_rendezvous1_t *inp)
{
  return (const uint8_t  *)trn_cell_rendezvous1_getarray_handshake_info((trn_cell_rendezvous1_t*)inp);
}
int
trn_cell_rendezvous1_setlen_handshake_info(trn_cell_rendezvous1_t *inp, size_t newlen)
{
  uint8_t *newptr;
  newptr = trunnel_dynarray_setlen(&inp->handshake_info.allocated_,
                 &inp->handshake_info.n_, inp->handshake_info.elts_, newlen,
                 sizeof(inp->handshake_info.elts_[0]), (trunnel_free_fn_t) NULL,
                 &inp->trunnel_error_code_);
  if (newlen != 0 && newptr == NULL)
    goto trunnel_alloc_failed;
  inp->handshake_info.elts_ = newptr;
  return 0;
 trunnel_alloc_failed:
  TRUNNEL_SET_ERROR_CODE(inp);
  return -1;
}
const char *
trn_cell_rendezvous1_check(const trn_cell_rendezvous1_t *obj)
{
  if (obj == NULL)
    return "Object was NULL";
  if (obj->trunnel_error_code_)
    return "A set function failed on this object";
  return NULL;
}

ssize_t
trn_cell_rendezvous1_encoded_len(const trn_cell_rendezvous1_t *obj)
{
  ssize_t result = 0;

  if (NULL != trn_cell_rendezvous1_check(obj))
     return -1;


  /* Length of u8 rendezvous_cookie[TRUNNEL_REND_COOKIE_LEN] */
  result += TRUNNEL_REND_COOKIE_LEN;

  /* Length of u8 handshake_info[] */
  result += TRUNNEL_DYNARRAY_LEN(&obj->handshake_info);
  return result;
}
int
trn_cell_rendezvous1_clear_errors(trn_cell_rendezvous1_t *obj)
{
  int r = obj->trunnel_error_code_;
  obj->trunnel_error_code_ = 0;
  return r;
}
ssize_t
trn_cell_rendezvous1_encode(uint8_t *output, const size_t avail, const trn_cell_rendezvous1_t *obj)
{
  ssize_t result = 0;
  size_t written = 0;
  uint8_t *ptr = output;
  const char *msg;
#ifdef TRUNNEL_CHECK_ENCODED_LEN
  const ssize_t encoded_len = trn_cell_rendezvous1_encoded_len(obj);
#endif

  if (NULL != (msg = trn_cell_rendezvous1_check(obj)))
    goto check_failed;

#ifdef TRUNNEL_CHECK_ENCODED_LEN
  trunnel_assert(encoded_len >= 0);
#endif

  /* Encode u8 rendezvous_cookie[TRUNNEL_REND_COOKIE_LEN] */
  trunnel_assert(written <= avail);
  if (avail - written < TRUNNEL_REND_COOKIE_LEN)
    goto truncated;
  memcpy(ptr, obj->rendezvous_cookie, TRUNNEL_REND_COOKIE_LEN);
  written += TRUNNEL_REND_COOKIE_LEN; ptr += TRUNNEL_REND_COOKIE_LEN;

  /* Encode u8 handshake_info[] */
  {
    size_t elt_len = TRUNNEL_DYNARRAY_LEN(&obj->handshake_info);
    trunnel_assert(written <= avail);
    if (avail - written < elt_len)
      goto truncated;
    if (elt_len)
      memcpy(ptr, obj->handshake_info.elts_, elt_len);
    written += elt_len; ptr += elt_len;
  }


  trunnel_assert(ptr == output + written);
#ifdef TRUNNEL_CHECK_ENCODED_LEN
  {
    trunnel_assert(encoded_len >= 0);
    trunnel_assert((size_t)encoded_len == written);
  }

#endif

  return written;

 truncated:
  result = -2;
  goto fail;
 check_failed:
  (void)msg;
  result = -1;
  goto fail;
 fail:
  trunnel_assert(result < 0);
  return result;
}

/** As trn_cell_rendezvous1_parse(), but do not allocate the output
 * object.
 */
static ssize_t
trn_cell_rendezvous1_parse_into(trn_cell_rendezvous1_t *obj, const uint8_t *input, const size_t len_in)
{
  const uint8_t *ptr = input;
  size_t remaining = len_in;
  ssize_t result = 0;
  (void)result;

  /* Parse u8 rendezvous_cookie[TRUNNEL_REND_COOKIE_LEN] */
  CHECK_REMAINING(TRUNNEL_REND_COOKIE_LEN, truncated);
  memcpy(obj->rendezvous_cookie, ptr, TRUNNEL_REND_COOKIE_LEN);
  remaining -= TRUNNEL_REND_COOKIE_LEN; ptr += TRUNNEL_REND_COOKIE_LEN;

  /* Parse u8 handshake_info[] */
  TRUNNEL_DYNARRAY_EXPAND(uint8_t, &obj->handshake_info, remaining, {});
  obj->handshake_info.n_ = remaining;
  if (remaining)
    memcpy(obj->handshake_info.elts_, ptr, remaining);
  ptr += remaining; remaining -= remaining;
  trunnel_assert(ptr + remaining == input + len_in);
  return len_in - remaining;

 truncated:
  return -2;
 trunnel_alloc_failed:
  return -1;
}

ssize_t
trn_cell_rendezvous1_parse(trn_cell_rendezvous1_t **output, const uint8_t *input, const size_t len_in)
{
  ssize_t result;
  *output = trn_cell_rendezvous1_new();
  if (NULL == *output)
    return -1;
  result = trn_cell_rendezvous1_parse_into(*output, input, len_in);
  if (result < 0) {
    trn_cell_rendezvous1_free(*output);
    *output = NULL;
  }
  return result;
}
trn_cell_rendezvous2_t *
trn_cell_rendezvous2_new(void)
{
  trn_cell_rendezvous2_t *val = trunnel_calloc(1, sizeof(trn_cell_rendezvous2_t));
  if (NULL == val)
    return NULL;
  return val;
}

/** Release all storage held inside 'obj', but do not free 'obj'.
 */
static void
trn_cell_rendezvous2_clear(trn_cell_rendezvous2_t *obj)
{
  (void) obj;
}

void
trn_cell_rendezvous2_free(trn_cell_rendezvous2_t *obj)
{
  if (obj == NULL)
    return;
  trn_cell_rendezvous2_clear(obj);
  trunnel_memwipe(obj, sizeof(trn_cell_rendezvous2_t));
  trunnel_free_(obj);
}

size_t
trn_cell_rendezvous2_getlen_handshake_info(const trn_cell_rendezvous2_t *inp)
{
  (void)inp;  return TRUNNEL_HANDSHAKE_INFO_LEN;
}

uint8_t
trn_cell_rendezvous2_get_handshake_info(trn_cell_rendezvous2_t *inp, size_t idx)
{
  trunnel_assert(idx < TRUNNEL_HANDSHAKE_INFO_LEN);
  return inp->handshake_info[idx];
}

uint8_t
trn_cell_rendezvous2_getconst_handshake_info(const trn_cell_rendezvous2_t *inp, size_t idx)
{
  return trn_cell_rendezvous2_get_handshake_info((trn_cell_rendezvous2_t*)inp, idx);
}
int
trn_cell_rendezvous2_set_handshake_info(trn_cell_rendezvous2_t *inp, size_t idx, uint8_t elt)
{
  trunnel_assert(idx < TRUNNEL_HANDSHAKE_INFO_LEN);
  inp->handshake_info[idx] = elt;
  return 0;
}

uint8_t *
trn_cell_rendezvous2_getarray_handshake_info(trn_cell_rendezvous2_t *inp)
{
  return inp->handshake_info;
}
const uint8_t  *
trn_cell_rendezvous2_getconstarray_handshake_info(const trn_cell_rendezvous2_t *inp)
{
  return (const uint8_t  *)trn_cell_rendezvous2_getarray_handshake_info((trn_cell_rendezvous2_t*)inp);
}
const char *
trn_cell_rendezvous2_check(const trn_cell_rendezvous2_t *obj)
{
  if (obj == NULL)
    return "Object was NULL";
  if (obj->trunnel_error_code_)
    return "A set function failed on this object";
  return NULL;
}

ssize_t
trn_cell_rendezvous2_encoded_len(const trn_cell_rendezvous2_t *obj)
{
  ssize_t result = 0;

  if (NULL != trn_cell_rendezvous2_check(obj))
     return -1;


  /* Length of u8 handshake_info[TRUNNEL_HANDSHAKE_INFO_LEN] */
  result += TRUNNEL_HANDSHAKE_INFO_LEN;
  return result;
}
int
trn_cell_rendezvous2_clear_errors(trn_cell_rendezvous2_t *obj)
{
  int r = obj->trunnel_error_code_;
  obj->trunnel_error_code_ = 0;
  return r;
}
ssize_t
trn_cell_rendezvous2_encode(uint8_t *output, const size_t avail, const trn_cell_rendezvous2_t *obj)
{
  ssize_t result = 0;
  size_t written = 0;
  uint8_t *ptr = output;
  const char *msg;
#ifdef TRUNNEL_CHECK_ENCODED_LEN
  const ssize_t encoded_len = trn_cell_rendezvous2_encoded_len(obj);
#endif

  if (NULL != (msg = trn_cell_rendezvous2_check(obj)))
    goto check_failed;

#ifdef TRUNNEL_CHECK_ENCODED_LEN
  trunnel_assert(encoded_len >= 0);
#endif

  /* Encode u8 handshake_info[TRUNNEL_HANDSHAKE_INFO_LEN] */
  trunnel_assert(written <= avail);
  if (avail - written < TRUNNEL_HANDSHAKE_INFO_LEN)
    goto truncated;
  memcpy(ptr, obj->handshake_info, TRUNNEL_HANDSHAKE_INFO_LEN);
  written += TRUNNEL_HANDSHAKE_INFO_LEN; ptr += TRUNNEL_HANDSHAKE_INFO_LEN;


  trunnel_assert(ptr == output + written);
#ifdef TRUNNEL_CHECK_ENCODED_LEN
  {
    trunnel_assert(encoded_len >= 0);
    trunnel_assert((size_t)encoded_len == written);
  }

#endif

  return written;

 truncated:
  result = -2;
  goto fail;
 check_failed:
  (void)msg;
  result = -1;
  goto fail;
 fail:
  trunnel_assert(result < 0);
  return result;
}

/** As trn_cell_rendezvous2_parse(), but do not allocate the output
 * object.
 */
static ssize_t
trn_cell_rendezvous2_parse_into(trn_cell_rendezvous2_t *obj, const uint8_t *input, const size_t len_in)
{
  const uint8_t *ptr = input;
  size_t remaining = len_in;
  ssize_t result = 0;
  (void)result;

  /* Parse u8 handshake_info[TRUNNEL_HANDSHAKE_INFO_LEN] */
  CHECK_REMAINING(TRUNNEL_HANDSHAKE_INFO_LEN, truncated);
  memcpy(obj->handshake_info, ptr, TRUNNEL_HANDSHAKE_INFO_LEN);
  remaining -= TRUNNEL_HANDSHAKE_INFO_LEN; ptr += TRUNNEL_HANDSHAKE_INFO_LEN;
  trunnel_assert(ptr + remaining == input + len_in);
  return len_in - remaining;

 truncated:
  return -2;
}

ssize_t
trn_cell_rendezvous2_parse(trn_cell_rendezvous2_t **output, const uint8_t *input, const size_t len_in)
{
  ssize_t result;
  *output = trn_cell_rendezvous2_new();
  if (NULL == *output)
    return -1;
  result = trn_cell_rendezvous2_parse_into(*output, input, len_in);
  if (result < 0) {
    trn_cell_rendezvous2_free(*output);
    *output = NULL;
  }
  return result;
}
