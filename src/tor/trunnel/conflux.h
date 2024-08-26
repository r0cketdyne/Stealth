/* conflux.h -- generated by Trunnel v1.5.3.
 * https://gitweb.torproject.org/trunnel.git
 * You probably shouldn't edit this file.
 */
#ifndef TRUNNEL_CONFLUX_H
#define TRUNNEL_CONFLUX_H

#include <stdint.h>
#include "ext/trunnel/trunnel.h"

#define CONFLUX_UX_NO_OPINION 0
#define CONFLUX_UX_MIN_LATENCY 1
#define CONFLUX_UX_LOW_MEM_LATENCY 2
#define CONFLUX_UX_HIGH_THROUGHPUT 3
#define CONFLUX_UX_LOW_MEM_THROUGHPUT 4
#if !defined(TRUNNEL_OPAQUE) && !defined(TRUNNEL_OPAQUE_TRN_CELL_CONFLUX_LINK)
struct trn_cell_conflux_link_st {
  uint8_t version;
  TRUNNEL_DYNARRAY_HEAD(, uint8_t) payload;
  uint8_t trunnel_error_code_;
};
#endif
typedef struct trn_cell_conflux_link_st trn_cell_conflux_link_t;
#if !defined(TRUNNEL_OPAQUE) && !defined(TRUNNEL_OPAQUE_TRN_CELL_CONFLUX_LINK_PAYLOAD_V1)
struct trn_cell_conflux_link_payload_v1_st {
  uint8_t nonce[32];
  uint64_t last_seqno_sent;
  uint64_t last_seqno_recv;
  uint8_t desired_ux;
  uint8_t trunnel_error_code_;
};
#endif
typedef struct trn_cell_conflux_link_payload_v1_st trn_cell_conflux_link_payload_v1_t;
#if !defined(TRUNNEL_OPAQUE) && !defined(TRUNNEL_OPAQUE_TRN_CELL_CONFLUX_LINKED)
struct trn_cell_conflux_linked_st {
  uint8_t version;
  TRUNNEL_DYNARRAY_HEAD(, uint8_t) payload;
  uint8_t trunnel_error_code_;
};
#endif
typedef struct trn_cell_conflux_linked_st trn_cell_conflux_linked_t;
#if !defined(TRUNNEL_OPAQUE) && !defined(TRUNNEL_OPAQUE_TRN_CELL_CONFLUX_LINKED_ACK)
struct trn_cell_conflux_linked_ack_st {
  TRUNNEL_DYNARRAY_HEAD(, uint8_t) payload;
  uint8_t trunnel_error_code_;
};
#endif
typedef struct trn_cell_conflux_linked_ack_st trn_cell_conflux_linked_ack_t;
#if !defined(TRUNNEL_OPAQUE) && !defined(TRUNNEL_OPAQUE_TRN_CELL_CONFLUX_SWITCH)
struct trn_cell_conflux_switch_st {
  uint32_t seqnum;
  uint8_t trunnel_error_code_;
};
#endif
typedef struct trn_cell_conflux_switch_st trn_cell_conflux_switch_t;
/** Return a newly allocated trn_cell_conflux_link with all elements
 * set to zero.
 */
trn_cell_conflux_link_t *trn_cell_conflux_link_new(void);
/** Release all storage held by the trn_cell_conflux_link in 'victim'.
 * (Do nothing if 'victim' is NULL.)
 */
void trn_cell_conflux_link_free(trn_cell_conflux_link_t *victim);
/** Try to parse a trn_cell_conflux_link from the buffer in 'input',
 * using up to 'len_in' bytes from the input buffer. On success,
 * return the number of bytes consumed and set *output to the newly
 * allocated trn_cell_conflux_link_t. On failure, return -2 if the
 * input appears truncated, and -1 if the input is otherwise invalid.
 */
ssize_t trn_cell_conflux_link_parse(trn_cell_conflux_link_t **output, const uint8_t *input, const size_t len_in);
/** Return the number of bytes we expect to need to encode the
 * trn_cell_conflux_link in 'obj'. On failure, return a negative
 * value. Note that this value may be an overestimate, and can even be
 * an underestimate for certain unencodeable objects.
 */
ssize_t trn_cell_conflux_link_encoded_len(const trn_cell_conflux_link_t *obj);
/** Try to encode the trn_cell_conflux_link from 'input' into the
 * buffer at 'output', using up to 'avail' bytes of the output buffer.
 * On success, return the number of bytes used. On failure, return -2
 * if the buffer was not long enough, and -1 if the input was invalid.
 */
ssize_t trn_cell_conflux_link_encode(uint8_t *output, size_t avail, const trn_cell_conflux_link_t *input);
/** Check whether the internal state of the trn_cell_conflux_link in
 * 'obj' is consistent. Return NULL if it is, and a short message if
 * it is not.
 */
const char *trn_cell_conflux_link_check(const trn_cell_conflux_link_t *obj);
/** Clear any errors that were set on the object 'obj' by its setter
 * functions. Return true iff errors were cleared.
 */
int trn_cell_conflux_link_clear_errors(trn_cell_conflux_link_t *obj);
/** Return the value of the version field of the
 * trn_cell_conflux_link_t in 'inp'
 */
uint8_t trn_cell_conflux_link_get_version(const trn_cell_conflux_link_t *inp);
/** Set the value of the version field of the trn_cell_conflux_link_t
 * in 'inp' to 'val'. Return 0 on success; return -1 and set the error
 * code on 'inp' on failure.
 */
int trn_cell_conflux_link_set_version(trn_cell_conflux_link_t *inp, uint8_t val);
/** Return the length of the dynamic array holding the payload field
 * of the trn_cell_conflux_link_t in 'inp'.
 */
size_t trn_cell_conflux_link_getlen_payload(const trn_cell_conflux_link_t *inp);
/** Return the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_link_t in 'inp'.
 */
uint8_t trn_cell_conflux_link_get_payload(trn_cell_conflux_link_t *inp, size_t idx);
/** As trn_cell_conflux_link_get_payload, but take and return a const
 * pointer
 */
uint8_t trn_cell_conflux_link_getconst_payload(const trn_cell_conflux_link_t *inp, size_t idx);
/** Change the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_link_t in 'inp', so that it will
 * hold the value 'elt'.
 */
int trn_cell_conflux_link_set_payload(trn_cell_conflux_link_t *inp, size_t idx, uint8_t elt);
/** Append a new element 'elt' to the dynamic array field payload of
 * the trn_cell_conflux_link_t in 'inp'.
 */
int trn_cell_conflux_link_add_payload(trn_cell_conflux_link_t *inp, uint8_t elt);
/** Return a pointer to the variable-length array field payload of
 * 'inp'.
 */
uint8_t * trn_cell_conflux_link_getarray_payload(trn_cell_conflux_link_t *inp);
/** As trn_cell_conflux_link_get_payload, but take and return a const
 * pointer
 */
const uint8_t  * trn_cell_conflux_link_getconstarray_payload(const trn_cell_conflux_link_t *inp);
/** Change the length of the variable-length array field payload of
 * 'inp' to 'newlen'.Fill extra elements with 0. Return 0 on success;
 * return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_link_setlen_payload(trn_cell_conflux_link_t *inp, size_t newlen);
/** Return a newly allocated trn_cell_conflux_link_payload_v1 with all
 * elements set to zero.
 */
trn_cell_conflux_link_payload_v1_t *trn_cell_conflux_link_payload_v1_new(void);
/** Release all storage held by the trn_cell_conflux_link_payload_v1
 * in 'victim'. (Do nothing if 'victim' is NULL.)
 */
void trn_cell_conflux_link_payload_v1_free(trn_cell_conflux_link_payload_v1_t *victim);
/** Try to parse a trn_cell_conflux_link_payload_v1 from the buffer in
 * 'input', using up to 'len_in' bytes from the input buffer. On
 * success, return the number of bytes consumed and set *output to the
 * newly allocated trn_cell_conflux_link_payload_v1_t. On failure,
 * return -2 if the input appears truncated, and -1 if the input is
 * otherwise invalid.
 */
ssize_t trn_cell_conflux_link_payload_v1_parse(trn_cell_conflux_link_payload_v1_t **output, const uint8_t *input, const size_t len_in);
/** Return the number of bytes we expect to need to encode the
 * trn_cell_conflux_link_payload_v1 in 'obj'. On failure, return a
 * negative value. Note that this value may be an overestimate, and
 * can even be an underestimate for certain unencodeable objects.
 */
ssize_t trn_cell_conflux_link_payload_v1_encoded_len(const trn_cell_conflux_link_payload_v1_t *obj);
/** Try to encode the trn_cell_conflux_link_payload_v1 from 'input'
 * into the buffer at 'output', using up to 'avail' bytes of the
 * output buffer. On success, return the number of bytes used. On
 * failure, return -2 if the buffer was not long enough, and -1 if the
 * input was invalid.
 */
ssize_t trn_cell_conflux_link_payload_v1_encode(uint8_t *output, size_t avail, const trn_cell_conflux_link_payload_v1_t *input);
/** Check whether the internal state of the
 * trn_cell_conflux_link_payload_v1 in 'obj' is consistent. Return
 * NULL if it is, and a short message if it is not.
 */
const char *trn_cell_conflux_link_payload_v1_check(const trn_cell_conflux_link_payload_v1_t *obj);
/** Clear any errors that were set on the object 'obj' by its setter
 * functions. Return true iff errors were cleared.
 */
int trn_cell_conflux_link_payload_v1_clear_errors(trn_cell_conflux_link_payload_v1_t *obj);
/** Return the (constant) length of the array holding the nonce field
 * of the trn_cell_conflux_link_payload_v1_t in 'inp'.
 */
size_t trn_cell_conflux_link_payload_v1_getlen_nonce(const trn_cell_conflux_link_payload_v1_t *inp);
/** Return the element at position 'idx' of the fixed array field
 * nonce of the trn_cell_conflux_link_payload_v1_t in 'inp'.
 */
uint8_t trn_cell_conflux_link_payload_v1_get_nonce(trn_cell_conflux_link_payload_v1_t *inp, size_t idx);
/** As trn_cell_conflux_link_payload_v1_get_nonce, but take and return
 * a const pointer
 */
uint8_t trn_cell_conflux_link_payload_v1_getconst_nonce(const trn_cell_conflux_link_payload_v1_t *inp, size_t idx);
/** Change the element at position 'idx' of the fixed array field
 * nonce of the trn_cell_conflux_link_payload_v1_t in 'inp', so that
 * it will hold the value 'elt'.
 */
int trn_cell_conflux_link_payload_v1_set_nonce(trn_cell_conflux_link_payload_v1_t *inp, size_t idx, uint8_t elt);
/** Return a pointer to the 32-element array field nonce of 'inp'.
 */
uint8_t * trn_cell_conflux_link_payload_v1_getarray_nonce(trn_cell_conflux_link_payload_v1_t *inp);
/** As trn_cell_conflux_link_payload_v1_get_nonce, but take and return
 * a const pointer
 */
const uint8_t  * trn_cell_conflux_link_payload_v1_getconstarray_nonce(const trn_cell_conflux_link_payload_v1_t *inp);
/** Return the value of the last_seqno_sent field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp'
 */
uint64_t trn_cell_conflux_link_payload_v1_get_last_seqno_sent(const trn_cell_conflux_link_payload_v1_t *inp);
/** Set the value of the last_seqno_sent field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp' to 'val'. Return 0 on
 * success; return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_link_payload_v1_set_last_seqno_sent(trn_cell_conflux_link_payload_v1_t *inp, uint64_t val);
/** Return the value of the last_seqno_recv field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp'
 */
uint64_t trn_cell_conflux_link_payload_v1_get_last_seqno_recv(const trn_cell_conflux_link_payload_v1_t *inp);
/** Set the value of the last_seqno_recv field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp' to 'val'. Return 0 on
 * success; return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_link_payload_v1_set_last_seqno_recv(trn_cell_conflux_link_payload_v1_t *inp, uint64_t val);
/** Return the value of the desired_ux field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp'
 */
uint8_t trn_cell_conflux_link_payload_v1_get_desired_ux(const trn_cell_conflux_link_payload_v1_t *inp);
/** Set the value of the desired_ux field of the
 * trn_cell_conflux_link_payload_v1_t in 'inp' to 'val'. Return 0 on
 * success; return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_link_payload_v1_set_desired_ux(trn_cell_conflux_link_payload_v1_t *inp, uint8_t val);
/** Return a newly allocated trn_cell_conflux_linked with all elements
 * set to zero.
 */
trn_cell_conflux_linked_t *trn_cell_conflux_linked_new(void);
/** Release all storage held by the trn_cell_conflux_linked in
 * 'victim'. (Do nothing if 'victim' is NULL.)
 */
void trn_cell_conflux_linked_free(trn_cell_conflux_linked_t *victim);
/** Try to parse a trn_cell_conflux_linked from the buffer in 'input',
 * using up to 'len_in' bytes from the input buffer. On success,
 * return the number of bytes consumed and set *output to the newly
 * allocated trn_cell_conflux_linked_t. On failure, return -2 if the
 * input appears truncated, and -1 if the input is otherwise invalid.
 */
ssize_t trn_cell_conflux_linked_parse(trn_cell_conflux_linked_t **output, const uint8_t *input, const size_t len_in);
/** Return the number of bytes we expect to need to encode the
 * trn_cell_conflux_linked in 'obj'. On failure, return a negative
 * value. Note that this value may be an overestimate, and can even be
 * an underestimate for certain unencodeable objects.
 */
ssize_t trn_cell_conflux_linked_encoded_len(const trn_cell_conflux_linked_t *obj);
/** Try to encode the trn_cell_conflux_linked from 'input' into the
 * buffer at 'output', using up to 'avail' bytes of the output buffer.
 * On success, return the number of bytes used. On failure, return -2
 * if the buffer was not long enough, and -1 if the input was invalid.
 */
ssize_t trn_cell_conflux_linked_encode(uint8_t *output, size_t avail, const trn_cell_conflux_linked_t *input);
/** Check whether the internal state of the trn_cell_conflux_linked in
 * 'obj' is consistent. Return NULL if it is, and a short message if
 * it is not.
 */
const char *trn_cell_conflux_linked_check(const trn_cell_conflux_linked_t *obj);
/** Clear any errors that were set on the object 'obj' by its setter
 * functions. Return true iff errors were cleared.
 */
int trn_cell_conflux_linked_clear_errors(trn_cell_conflux_linked_t *obj);
/** Return the value of the version field of the
 * trn_cell_conflux_linked_t in 'inp'
 */
uint8_t trn_cell_conflux_linked_get_version(const trn_cell_conflux_linked_t *inp);
/** Set the value of the version field of the
 * trn_cell_conflux_linked_t in 'inp' to 'val'. Return 0 on success;
 * return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_linked_set_version(trn_cell_conflux_linked_t *inp, uint8_t val);
/** Return the length of the dynamic array holding the payload field
 * of the trn_cell_conflux_linked_t in 'inp'.
 */
size_t trn_cell_conflux_linked_getlen_payload(const trn_cell_conflux_linked_t *inp);
/** Return the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_linked_t in 'inp'.
 */
uint8_t trn_cell_conflux_linked_get_payload(trn_cell_conflux_linked_t *inp, size_t idx);
/** As trn_cell_conflux_linked_get_payload, but take and return a
 * const pointer
 */
uint8_t trn_cell_conflux_linked_getconst_payload(const trn_cell_conflux_linked_t *inp, size_t idx);
/** Change the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_linked_t in 'inp', so that it will
 * hold the value 'elt'.
 */
int trn_cell_conflux_linked_set_payload(trn_cell_conflux_linked_t *inp, size_t idx, uint8_t elt);
/** Append a new element 'elt' to the dynamic array field payload of
 * the trn_cell_conflux_linked_t in 'inp'.
 */
int trn_cell_conflux_linked_add_payload(trn_cell_conflux_linked_t *inp, uint8_t elt);
/** Return a pointer to the variable-length array field payload of
 * 'inp'.
 */
uint8_t * trn_cell_conflux_linked_getarray_payload(trn_cell_conflux_linked_t *inp);
/** As trn_cell_conflux_linked_get_payload, but take and return a
 * const pointer
 */
const uint8_t  * trn_cell_conflux_linked_getconstarray_payload(const trn_cell_conflux_linked_t *inp);
/** Change the length of the variable-length array field payload of
 * 'inp' to 'newlen'.Fill extra elements with 0. Return 0 on success;
 * return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_linked_setlen_payload(trn_cell_conflux_linked_t *inp, size_t newlen);
/** Return a newly allocated trn_cell_conflux_linked_ack with all
 * elements set to zero.
 */
trn_cell_conflux_linked_ack_t *trn_cell_conflux_linked_ack_new(void);
/** Release all storage held by the trn_cell_conflux_linked_ack in
 * 'victim'. (Do nothing if 'victim' is NULL.)
 */
void trn_cell_conflux_linked_ack_free(trn_cell_conflux_linked_ack_t *victim);
/** Try to parse a trn_cell_conflux_linked_ack from the buffer in
 * 'input', using up to 'len_in' bytes from the input buffer. On
 * success, return the number of bytes consumed and set *output to the
 * newly allocated trn_cell_conflux_linked_ack_t. On failure, return
 * -2 if the input appears truncated, and -1 if the input is otherwise
 * invalid.
 */
ssize_t trn_cell_conflux_linked_ack_parse(trn_cell_conflux_linked_ack_t **output, const uint8_t *input, const size_t len_in);
/** Return the number of bytes we expect to need to encode the
 * trn_cell_conflux_linked_ack in 'obj'. On failure, return a negative
 * value. Note that this value may be an overestimate, and can even be
 * an underestimate for certain unencodeable objects.
 */
ssize_t trn_cell_conflux_linked_ack_encoded_len(const trn_cell_conflux_linked_ack_t *obj);
/** Try to encode the trn_cell_conflux_linked_ack from 'input' into
 * the buffer at 'output', using up to 'avail' bytes of the output
 * buffer. On success, return the number of bytes used. On failure,
 * return -2 if the buffer was not long enough, and -1 if the input
 * was invalid.
 */
ssize_t trn_cell_conflux_linked_ack_encode(uint8_t *output, size_t avail, const trn_cell_conflux_linked_ack_t *input);
/** Check whether the internal state of the
 * trn_cell_conflux_linked_ack in 'obj' is consistent. Return NULL if
 * it is, and a short message if it is not.
 */
const char *trn_cell_conflux_linked_ack_check(const trn_cell_conflux_linked_ack_t *obj);
/** Clear any errors that were set on the object 'obj' by its setter
 * functions. Return true iff errors were cleared.
 */
int trn_cell_conflux_linked_ack_clear_errors(trn_cell_conflux_linked_ack_t *obj);
/** Return the length of the dynamic array holding the payload field
 * of the trn_cell_conflux_linked_ack_t in 'inp'.
 */
size_t trn_cell_conflux_linked_ack_getlen_payload(const trn_cell_conflux_linked_ack_t *inp);
/** Return the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_linked_ack_t in 'inp'.
 */
uint8_t trn_cell_conflux_linked_ack_get_payload(trn_cell_conflux_linked_ack_t *inp, size_t idx);
/** As trn_cell_conflux_linked_ack_get_payload, but take and return a
 * const pointer
 */
uint8_t trn_cell_conflux_linked_ack_getconst_payload(const trn_cell_conflux_linked_ack_t *inp, size_t idx);
/** Change the element at position 'idx' of the dynamic array field
 * payload of the trn_cell_conflux_linked_ack_t in 'inp', so that it
 * will hold the value 'elt'.
 */
int trn_cell_conflux_linked_ack_set_payload(trn_cell_conflux_linked_ack_t *inp, size_t idx, uint8_t elt);
/** Append a new element 'elt' to the dynamic array field payload of
 * the trn_cell_conflux_linked_ack_t in 'inp'.
 */
int trn_cell_conflux_linked_ack_add_payload(trn_cell_conflux_linked_ack_t *inp, uint8_t elt);
/** Return a pointer to the variable-length array field payload of
 * 'inp'.
 */
uint8_t * trn_cell_conflux_linked_ack_getarray_payload(trn_cell_conflux_linked_ack_t *inp);
/** As trn_cell_conflux_linked_ack_get_payload, but take and return a
 * const pointer
 */
const uint8_t  * trn_cell_conflux_linked_ack_getconstarray_payload(const trn_cell_conflux_linked_ack_t *inp);
/** Change the length of the variable-length array field payload of
 * 'inp' to 'newlen'.Fill extra elements with 0. Return 0 on success;
 * return -1 and set the error code on 'inp' on failure.
 */
int trn_cell_conflux_linked_ack_setlen_payload(trn_cell_conflux_linked_ack_t *inp, size_t newlen);
/** Return a newly allocated trn_cell_conflux_switch with all elements
 * set to zero.
 */
trn_cell_conflux_switch_t *trn_cell_conflux_switch_new(void);
/** Release all storage held by the trn_cell_conflux_switch in
 * 'victim'. (Do nothing if 'victim' is NULL.)
 */
void trn_cell_conflux_switch_free(trn_cell_conflux_switch_t *victim);
/** Try to parse a trn_cell_conflux_switch from the buffer in 'input',
 * using up to 'len_in' bytes from the input buffer. On success,
 * return the number of bytes consumed and set *output to the newly
 * allocated trn_cell_conflux_switch_t. On failure, return -2 if the
 * input appears truncated, and -1 if the input is otherwise invalid.
 */
ssize_t trn_cell_conflux_switch_parse(trn_cell_conflux_switch_t **output, const uint8_t *input, const size_t len_in);
/** Return the number of bytes we expect to need to encode the
 * trn_cell_conflux_switch in 'obj'. On failure, return a negative
 * value. Note that this value may be an overestimate, and can even be
 * an underestimate for certain unencodeable objects.
 */
ssize_t trn_cell_conflux_switch_encoded_len(const trn_cell_conflux_switch_t *obj);
/** Try to encode the trn_cell_conflux_switch from 'input' into the
 * buffer at 'output', using up to 'avail' bytes of the output buffer.
 * On success, return the number of bytes used. On failure, return -2
 * if the buffer was not long enough, and -1 if the input was invalid.
 */
ssize_t trn_cell_conflux_switch_encode(uint8_t *output, size_t avail, const trn_cell_conflux_switch_t *input);
/** Check whether the internal state of the trn_cell_conflux_switch in
 * 'obj' is consistent. Return NULL if it is, and a short message if
 * it is not.
 */
const char *trn_cell_conflux_switch_check(const trn_cell_conflux_switch_t *obj);
/** Clear any errors that were set on the object 'obj' by its setter
 * functions. Return true iff errors were cleared.
 */
int trn_cell_conflux_switch_clear_errors(trn_cell_conflux_switch_t *obj);
/** Return the value of the seqnum field of the
 * trn_cell_conflux_switch_t in 'inp'
 */
uint32_t trn_cell_conflux_switch_get_seqnum(const trn_cell_conflux_switch_t *inp);
/** Set the value of the seqnum field of the trn_cell_conflux_switch_t
 * in 'inp' to 'val'. Return 0 on success; return -1 and set the error
 * code on 'inp' on failure.
 */
int trn_cell_conflux_switch_set_seqnum(trn_cell_conflux_switch_t *inp, uint32_t val);


#endif