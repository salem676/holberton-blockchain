#include "hblk_crypto.h"

/**
 * sha256 - computes the hash 256 of a sequence of bytes
 * @s: String to compute the hash for
 * @len: Len of s
 * @digest: Array to return the hash data
 *
 * Return: Pointer to digest
 */
uint8_t *sha256(int8_t const *s, size_t len,
		uint8_t digest[SHA256_DIGEST_LENGTH])
{
	if (!s || !len || !digest)
		return (NULL);

	return (SHA256((const unsigned char *)s, len, digest));
}
