#include "blockchain.h"

/**
 * block_destroy - destroys a block for a blockchain structure
 *
 * @block: block in the blockchain to destroy
 *
 * Return: Nothing
 */
void block_destroy(block_t *block)
{
	free(block);
}
