#ifndef BITCOIN_BLIND_H_
#define BITCOIN_BLIND_H_ 1

#include "key.h"
#include "pubkey.h"
#include "primitives/transaction.h"

void ECC_Blinding_Start();
void ECC_Blinding_Stop();

int UnblindOutput(const CKey& blinding_key, const CTxOut& txout, CAmount& amount_out, std::vector<unsigned char>& blinding_factor_out);
void BlindOutputs(const std::vector<std::vector<unsigned char> >& input_blinding_factors, const std::vector<std::vector<unsigned char> >& output_blinding_factors, const std::vector<CPubKey>& output_pubkeys, CMutableTransaction& tx);

#endif
