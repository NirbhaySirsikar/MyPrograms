#include <CkDh.h>
#include <CkCrypt2.h>

void ChilkatSample(void)
    {

    CkDh dhBob;
    CkDh dhAlice;




    dhBob.UseKnownPrime(2);


    const char *p = 0;
    int g;
    p = dhBob.p();
    g = dhBob.get_G();

    bool success = dhAlice.SetPG(p,g);
    if (success != true) {
        std::cout << "P is not a safe prime" << "\r\n";
        return;
    }




    const char *eBob = 0;
    eBob = dhBob.createE(256);

    const char *eAlice = 0;
    eAlice = dhAlice.createE(256);



    const char *kBob = 0;
    const char *kAlice = 0;

    kBob = dhBob.findK(eAlice);

    kAlice = dhAlice.findK(eBob);

    std::cout << "Bob's shared secret:" << "\r\n";
    std::cout << kBob << "\r\n";
    std::cout << "Alice's shared secret (should be equal to Bob's)" << "\r\n";
    std::cout << kAlice << "\r\n";


    CkCrypt2 crypt;

    crypt.put_EncodingMode("hex");
    crypt.put_HashAlgorithm("md5");

    const char *sessionKey = 0;
    sessionKey = crypt.hashStringENC(kBob);

    std::cout << "128-bit Session Key:" << "\r\n";
    std::cout << sessionKey << "\r\n";

    crypt.put_CryptAlgorithm("aes");
    crypt.put_KeyLength(128);
    crypt.put_CipherMode("cbc");

    const char *iv = 0;
    iv = crypt.hashStringENC(sessionKey);

    std::cout << "Initialization Vector:" << "\r\n";
    std::cout << iv << "\r\n";

    crypt.SetEncodedKey(sessionKey,"hex");
    crypt.SetEncodedIV(iv,"hex");

    const char *cipherText64 = 0;

    crypt.put_EncodingMode("base64");
    cipherText64 = crypt.encryptStringENC("The quick brown fox jumps over the lazy dog");
    std::cout << cipherText64 << "\r\n";

    const char *plainText = 0;
    plainText = crypt.decryptStringENC(cipherText64);

    std::cout << plainText << "\r\n";
    }