#include "hblk_crypto.h"

/**
 * ec_verify - verifies a message with public key
 * @key: pointer to struct containing key pair
 * @msg: the message to sign
 * @msglen: length of message
 * @sig: address to store signature
 * Return: 1 if the signature is valid, and 0 otherwise
 */
int ec_verify(EC_KEY const *key, uint8_t const *msg,
		size_t msglen, sig_t const *sig)
{
	int result = 0;

	if (!key || !msg || !sig)
		return (result);
	result = ECDSA_verify(0, msg, msglen, sig->sig, sig->len, (EC_KEY *)key);
	return (result == 1);
}
