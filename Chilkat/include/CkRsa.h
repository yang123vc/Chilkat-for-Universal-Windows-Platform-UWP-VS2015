// CkRsa.h: interface for the CkRsa class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkRsa_H
#define _CkRsa_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkPrivateKey;
class CkPublicKey;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkRsa
class CK_VISIBLE_PUBLIC CkRsa  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkRsa(const CkRsa &);
	CkRsa &operator=(const CkRsa &);

    public:
	CkRsa(void);
	virtual ~CkRsa(void);

	static CkRsa *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// This property only applies when encrypting, decrypting, signing, or verifying
	// signatures for strings. When encrypting strings, the input string is first
	// converted to this charset before encrypting.
	// 
	// When decrypting, the decrypted data is interpreted as a string with this charset
	// encoding and converted to the appropriate return. For example, ActiveX's
	// returning strings always return Unicode (2 bytes/char). Java strings are utf-8.
	// Chilkat C++ strings are ANSI or utf-8. .NET strings are Unicode.
	// 
	// When signing string data, the input string is first converted to this charset
	// before being hashed and signed. When verifying the signature for string data,
	// the input string is first converted to this charset before the verification
	// process begins.
	// 
	void get_Charset(CkString &str);
	// This property only applies when encrypting, decrypting, signing, or verifying
	// signatures for strings. When encrypting strings, the input string is first
	// converted to this charset before encrypting.
	// 
	// When decrypting, the decrypted data is interpreted as a string with this charset
	// encoding and converted to the appropriate return. For example, ActiveX's
	// returning strings always return Unicode (2 bytes/char). Java strings are utf-8.
	// Chilkat C++ strings are ANSI or utf-8. .NET strings are Unicode.
	// 
	// When signing string data, the input string is first converted to this charset
	// before being hashed and signed. When verifying the signature for string data,
	// the input string is first converted to this charset before the verification
	// process begins.
	// 
	const char *charset(void);
	// This property only applies when encrypting, decrypting, signing, or verifying
	// signatures for strings. When encrypting strings, the input string is first
	// converted to this charset before encrypting.
	// 
	// When decrypting, the decrypted data is interpreted as a string with this charset
	// encoding and converted to the appropriate return. For example, ActiveX's
	// returning strings always return Unicode (2 bytes/char). Java strings are utf-8.
	// Chilkat C++ strings are ANSI or utf-8. .NET strings are Unicode.
	// 
	// When signing string data, the input string is first converted to this charset
	// before being hashed and signed. When verifying the signature for string data,
	// the input string is first converted to this charset before the verification
	// process begins.
	// 
	void put_Charset(const char *newVal);

	// Encoding mode to be used in methods ending in "ENC", such as EncryptStringENC.
	// Valid EncodingModes are "base64", "hex", "url", or "quoted-printable" (or "qp").
	// Encryption methods ending in "ENC" will return encrypted data as a string
	// encoded according to this property's value. Decryption methods ending in "ENC"
	// accept an encoded string as specified by this property. The string is first
	// decoded and then decrypted. The default value is "base64".
	// 
	// This property also applies to the "ENC" methods for creating and verifying
	// digital signatures.
	// 
	void get_EncodingMode(CkString &str);
	// Encoding mode to be used in methods ending in "ENC", such as EncryptStringENC.
	// Valid EncodingModes are "base64", "hex", "url", or "quoted-printable" (or "qp").
	// Encryption methods ending in "ENC" will return encrypted data as a string
	// encoded according to this property's value. Decryption methods ending in "ENC"
	// accept an encoded string as specified by this property. The string is first
	// decoded and then decrypted. The default value is "base64".
	// 
	// This property also applies to the "ENC" methods for creating and verifying
	// digital signatures.
	// 
	const char *encodingMode(void);
	// Encoding mode to be used in methods ending in "ENC", such as EncryptStringENC.
	// Valid EncodingModes are "base64", "hex", "url", or "quoted-printable" (or "qp").
	// Encryption methods ending in "ENC" will return encrypted data as a string
	// encoded according to this property's value. Decryption methods ending in "ENC"
	// accept an encoded string as specified by this property. The string is first
	// decoded and then decrypted. The default value is "base64".
	// 
	// This property also applies to the "ENC" methods for creating and verifying
	// digital signatures.
	// 
	void put_EncodingMode(const char *newVal);

	// The default value is false, which means that signatures and encrypted output
	// will be created using the big endian byte ordering. A value of true will
	// produce little-endian output, which is what Microsoft's Crypto API produces.
	// 
	// Important: Prior to v9.5.0.49, this property behaved the opposite as it should
	// for encryption. When updating from an older version of Chilkat to v9.5.0.49 or
	// greater, the following change is required:
	//     If the application did NOT explicity set the LittleEndian property, then no
	//     change is required for encryption/decryption. If signatures were being created
	//     or verified, then explicitly set this property to true.
	//     If the application explicitly set this property, then reverse the setting
	//     ONLY if doing encryption/decryption. No changes are required if doing signature
	//     creation/verification.
	// 
	bool get_LittleEndian(void);
	// The default value is false, which means that signatures and encrypted output
	// will be created using the big endian byte ordering. A value of true will
	// produce little-endian output, which is what Microsoft's Crypto API produces.
	// 
	// Important: Prior to v9.5.0.49, this property behaved the opposite as it should
	// for encryption. When updating from an older version of Chilkat to v9.5.0.49 or
	// greater, the following change is required:
	//     If the application did NOT explicity set the LittleEndian property, then no
	//     change is required for encryption/decryption. If signatures were being created
	//     or verified, then explicitly set this property to true.
	//     If the application explicitly set this property, then reverse the setting
	//     ONLY if doing encryption/decryption. No changes are required if doing signature
	//     creation/verification.
	// 
	void put_LittleEndian(bool newVal);

	// If true, skips unpadding when decrypting. The default is false. This
	// property value is typically left unchanged.
	bool get_NoUnpad(void);
	// If true, skips unpadding when decrypting. The default is false. This
	// property value is typically left unchanged.
	void put_NoUnpad(bool newVal);

	// The number of bits of the key generated or imported into this RSA encryption
	// object. Keys ranging in size from 384 bits to 4096 bits can be generated by
	// calling GenerateKey. A public or private key may be imported by calling
	// ImportPublicKey or ImportPrivateKey. A key must be available either via
	// GenerateKey or import before any of the encrypt/decrypt methods may be called.
	int get_NumBits(void);

	// Selects the hash algorithm for use within OAEP padding. The valid choices are
	// "sha1", "sha256", "sha384", "sha512", "md2", "md5", "haval", "ripemd128",
	// "ripemd160","ripemd256", or "ripemd320". The default is "sha1".
	void get_OaepHash(CkString &str);
	// Selects the hash algorithm for use within OAEP padding. The valid choices are
	// "sha1", "sha256", "sha384", "sha512", "md2", "md5", "haval", "ripemd128",
	// "ripemd160","ripemd256", or "ripemd320". The default is "sha1".
	const char *oaepHash(void);
	// Selects the hash algorithm for use within OAEP padding. The valid choices are
	// "sha1", "sha256", "sha384", "sha512", "md2", "md5", "haval", "ripemd128",
	// "ripemd160","ripemd256", or "ripemd320". The default is "sha1".
	void put_OaepHash(const char *newVal);

	// Controls whether Optimal Asymmetric Encryption Padding (OAEP) is used for the
	// padding scheme (for encrypting/decrypting). If set to false, PKCS1 v1.5
	// padding is used. If set to true, PKCS1 v2.0 (OAEP) padding is used.
	// 
	// When creating digital signatures, this property controls whether RSA-PSS or
	// PKCS1 v1.5 is used. If true, then the RSA-PSS signature scheme is used. The
	// default value of this property is false.
	// 
	bool get_OaepPadding(void);
	// Controls whether Optimal Asymmetric Encryption Padding (OAEP) is used for the
	// padding scheme (for encrypting/decrypting). If set to false, PKCS1 v1.5
	// padding is used. If set to true, PKCS1 v2.0 (OAEP) padding is used.
	// 
	// When creating digital signatures, this property controls whether RSA-PSS or
	// PKCS1 v1.5 is used. If true, then the RSA-PSS signature scheme is used. The
	// default value of this property is false.
	// 
	void put_OaepPadding(bool newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Decrypts byte data using the RSA encryption algorithm. usePrivateKey should be set to
	// true if the private key is to be used for decrypting. Otherwise it should be
	// set to false if the public key is to be used for decrypting.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptBytes(CkByteData &inData, bool usePrivateKey, CkByteData &outData);


	// Same as DecryptBytes, except the input is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptBytesENC(const char *str, bool bUsePrivateKey, CkByteData &outData);


	// Decrypts encrypted string data and returns an unencrypted string. usePrivateKey should be
	// set to true if the private key is to be used for decrypting. Otherwise it
	// should be set to false if the public key is to be used. The Charset property
	// controls how the component interprets the decrypted string. Depending on the
	// programming language, strings are returned to the application as Unicode, utf-8,
	// or ANSI. Internal to DecryptString, the decrypted string is automatically
	// converted from the charset specified by the Charset property to the encoding
	// required by the calling programming language.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptString(CkByteData &binarySig, bool usePrivateKey, CkString &outStr);

	// Decrypts encrypted string data and returns an unencrypted string. usePrivateKey should be
	// set to true if the private key is to be used for decrypting. Otherwise it
	// should be set to false if the public key is to be used. The Charset property
	// controls how the component interprets the decrypted string. Depending on the
	// programming language, strings are returned to the application as Unicode, utf-8,
	// or ANSI. Internal to DecryptString, the decrypted string is automatically
	// converted from the charset specified by the Charset property to the encoding
	// required by the calling programming language.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const char *decryptString(CkByteData &binarySig, bool usePrivateKey);

	// Same as DecryptString, except the input is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool DecryptStringENC(const char *encodedSig, bool usePrivateKey, CkString &outStr);

	// Same as DecryptString, except the input is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const char *decryptStringENC(const char *encodedSig, bool usePrivateKey);

	// Encrypts byte data using the RSA encryption algorithm. usePrivateKey should be set to
	// true if the private key is to be used for encrypting. Otherwise it should be
	// set to false if the public key is to be used for encrypting.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool EncryptBytes(CkByteData &binaryData, bool usePrivateKey, CkByteData &outData);


	// Same as EncryptBytes, except the output is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool EncryptBytesENC(CkByteData &data, bool bUsePrivateKey, CkString &outStr);

	// Same as EncryptBytes, except the output is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const char *encryptBytesENC(CkByteData &data, bool bUsePrivateKey);

	// Encrypts a string using the RSA encryption algorithm. usePrivateKey should be set to
	// true if the private key is to be used for encrypting. Otherwise it should be
	// set to false if the public key is to be used for encrypting. The string is
	// first converted (if necessary) to the character encoding specified by the
	// Charset property before encrypting. The encrypted bytes are returned.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool EncryptString(const char *stringToEncrypt, bool usePrivateKey, CkByteData &outData);


	// Same as EncryptString, except the output is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	bool EncryptStringENC(const char *str, bool bUsePrivateKey, CkString &outStr);

	// Same as EncryptString, except the output is an encoded string. The encoding is
	// specified by the EncodingMode property, which can have values such as "base64",
	// "hex", "quoted-printable", "url", etc.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false.
	// 
	const char *encryptStringENC(const char *str, bool bUsePrivateKey);

	// Exports the private-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	bool ExportPrivateKey(CkString &outStr);

	// Exports the private-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	const char *exportPrivateKey(void);

	// Exports the private-key to a private key object. This is typically called after
	// generating a new RSA key via the GenerateKey method. Once the private key object
	// is obtained, it may be saved in a variety of different formats.
	// The caller is responsible for deleting the object returned by this method.
	CkPrivateKey *ExportPrivateKeyObj(void);


	// Exports the public-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	bool ExportPublicKey(CkString &outStr);

	// Exports the public-key of an RSA key pair to XML format. This is typically
	// called after generating a new RSA key via the GenerateKey method.
	const char *exportPublicKey(void);

	// Exports the public key to a public key object. Once the public key object is
	// obtained, it may be saved in a variety of different formats.
	// The caller is responsible for deleting the object returned by this method.
	CkPublicKey *ExportPublicKeyObj(void);


	// Generates a new RSA public/private key pair. The number of bits can range from
	// 512 to 8192. Typical key lengths are 1024, 2048, or 4096 bits. After successful
	// generation, the public/private parts of the key can be exported to XML via the
	// ExportPrivateKey and ExportPublicKey methods.
	// 
	// Note: Prior to version 9.5.0.49, the max key size was 4096 bits. Generating an
	// 8192-bit RSA key takes a considerable amount of time and CPU processing power.
	// There are no event callbacks or progress monitoring for RSA key generation.
	// Calling this will block the thread until it returns.
	// 
	bool GenerateKey(int numBits);


	// Imports a private key from XML format. After successful import, the private key
	// can be used to encrypt or decrypt. A private key (by definition) contains both
	// private and public parts. This is because the public key consist of modulus and
	// exponent. The private key consists of modulus, exponent, P, Q, DP, DQ, InverseQ,
	// and D using base64 representation:
	// _LT_RSAKeyValue>
	//   _LT_Modulus>..._LT_/Modulus>
	//   _LT_Exponent>..._LT_/Exponent>
	//   _LT_P>..._LT_/P>
	//   _LT_Q>..._LT_/Q>
	//   _LT_DP>..._LT_/DP>
	//   _LT_DQ>..._LT_/DQ>
	//   _LT_InverseQ>..._LT_/InverseQ>
	//   _LT_D>..._LT_/D>
	// _LT_/RSAKeyValue>
	// 
	// Important: The Rsa object can contain either a private key or a public key, but
	// not both. Importing a private key overwrites the existing key regardless of
	// whether the type of key is public or private.
	// 
	bool ImportPrivateKey(const char *xmlKey);


	// Imports a private key from a private key object. The imported private key is
	// used in methods that sign or decrypt.
	bool ImportPrivateKeyObj(CkPrivateKey &key);


	// Imports a public key from XML format. After successful import, the public key
	// can be used to encrypt or decrypt.
	// 
	// Note: Importing a public key overwrites the key that is currently contained in
	// this object - even if it's a private key.
	// 
	// A public key consists of modulus and exponent using base64 representation:
	// _LT_RSAKeyValue>
	//   _LT_Modulus>..._LT_/Modulus>
	//   _LT_Exponent>..._LT_/Exponent>
	// _LT_/RSAKeyValue>
	// 
	// Important: The Rsa object can contain either a private key or a public key, but
	// not both. Importing a private key overwrites the existing key regardless of
	// whether the type of key is public or private.
	// 
	bool ImportPublicKey(const char *xmlKey);


	// Imports a public key from a public key object. The imported public key is used
	// in methods that encrypt data or verify signatures.
	bool ImportPublicKeyObj(CkPublicKey &key);


	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data
	// consists of binary bytes, and returns the signature bytes.
	bool OpenSslSignBytes(CkByteData &data, CkByteData &outBytes);


	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data
	// consists of binary bytes, and returns the signature as a string encoded
	// according to the EncodingMode property (base64, hex, etc.).
	bool OpenSslSignBytesENC(CkByteData &data, CkString &outStr);

	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data
	// consists of binary bytes, and returns the signature as a string encoded
	// according to the EncodingMode property (base64, hex, etc.).
	const char *openSslSignBytesENC(CkByteData &data);

	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data is a
	// string, and returns the signature bytes.
	bool OpenSslSignString(const char *str, CkByteData &outBytes);


	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data is a
	// string, and returns the signature as a string encoded according to the
	// EncodingMode property (base64, hex, etc.).
	bool OpenSslSignStringENC(const char *str, CkString &outStr);

	// Duplicates OpenSSL's rsautl utility for creating RSA signatures. Input data is a
	// string, and returns the signature as a string encoded according to the
	// EncodingMode property (base64, hex, etc.).
	const char *openSslSignStringENC(const char *str);

	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original bytes.
	bool OpenSslVerifyBytes(CkByteData &signature, CkByteData &outBytes);


	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original bytes.
	bool OpenSslVerifyBytesENC(const char *str, CkByteData &outBytes);


	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original string.
	bool OpenSslVerifyString(CkByteData &data, CkString &outStr);

	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data consists of the raw signature bytes and returns
	// the original string.
	const char *openSslVerifyString(CkByteData &data);

	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original string.
	bool OpenSslVerifyStringENC(const char *str, CkString &outStr);

	// Duplicates OpenSSL's rsautl utility for verifying RSA signatures and recovering
	// the original data. Input data is a signature string encoded according to the
	// EncodingMode property (base64, hex, etc.). Returns the original string.
	const char *openSslVerifyStringENC(const char *str);

	// Creates an RSA digital signature by hashing binaryData and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when a byte array of 0 length is returned.
	// 
	bool SignBytes(CkByteData &binaryData, const char *hashAlgorithm, CkByteData &outData);


	// Creates an RSA digital signature by hashing binaryData and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// The digital signature is returned as an encoded string, where the encoding is
	// specified by the EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when null reference is returned.
	// 
	bool SignBytesENC(CkByteData &binaryData, const char *hashAlgorithm, CkString &outStr);

	// Creates an RSA digital signature by hashing binaryData and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// The digital signature is returned as an encoded string, where the encoding is
	// specified by the EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when null reference is returned.
	// 
	const char *signBytesENC(CkByteData &binaryData, const char *hashAlgorithm);

	// The same as the SignBytes method, except the hash to be signed is passed
	// directly.
	bool SignHash(CkByteData &hashBytes, const char *hashAlg, CkByteData &outBytes);


	// The same as SignBytesENC except the hash is passed directly.
	bool SignHashENC(const char *encodedHash, const char *hashAlg, CkString &outStr);

	// The same as SignBytesENC except the hash is passed directly.
	const char *signHashENC(const char *encodedHash, const char *hashAlg);

	// Creates an RSA digital signature by hashing strToBeHashed and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when a byte array of 0 length is returned.
	// 
	bool SignString(const char *strToBeHashed, const char *hashAlgorithm, CkByteData &outData);


	// Creates an RSA digital signature by hashing strToBeHashed and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// The digital signature is returned as an encoded string, where the encoding is
	// specified by the EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when null reference is returned.
	// 
	bool SignStringENC(const char *strToBeHashed, const char *hashAlgorithm, CkString &outStr);

	// Creates an RSA digital signature by hashing strToBeHashed and then signing the hash. The
	// hash algorithm is specified by hashAlgorithm, which may be "SHA-1", "MD5", "MD2",
	// "SHA-256", "SHA-384", or "SHA-512". The recommended hash algorithm is "SHA-1".
	// The digital signature is returned as an encoded string, where the encoding is
	// specified by the EncodingMode property.
	// 
	// Important: If trying to match OpenSSL results, set the LittleEndian property =
	// false. (The LittleEndian property should also be set to false to match
	// Amazon web services, such as CloudFront.)
	// 
	// A private key is required to create a digital signature.
	// 
	// An error is indicated when null reference is returned.
	// 
	const char *signStringENC(const char *strToBeHashed, const char *hashAlgorithm);

	// Imports a .snk file to an XML document that can be imported via the
	// ImportPrivateKey method.
	bool SnkToXml(const char *filename, CkString &outStr);

	// Imports a .snk file to an XML document that can be imported via the
	// ImportPrivateKey method.
	const char *snkToXml(const char *filename);

	// Unlocks the component. This must be called once prior to calling any other
	// method.
	bool UnlockComponent(const char *unlockCode);


	// Verifies an RSA digital signature. Returns true if the signature is valid for
	// the originalData. The hashAlgorithm may be "SHA-1", "MD5", "MD2", "SHA-256", "SHA-384", or
	// "SHA-512". The recommended hash algorithm is "SHA-1".
	bool VerifyBytes(CkByteData &originalData, const char *hashAlgorithm, CkByteData &signatureBytes);


	// Verifies an RSA digital signature. Returns true if the signature is valid for
	// the originalData. The hashAlgorithm may be "SHA-1", "MD5", "MD2", "SHA-256", "SHA-384", or
	// "SHA-512". The recommended hash algorithm is "SHA-1".
	// 
	// The encodedSig is a digital signature encoded according to the EncodingMode property
	// (i.e. base64, hex, etc.).
	// 
	bool VerifyBytesENC(CkByteData &originalData, const char *hashAlgorithm, const char *encodedSig);


	// The same as VerifyBytes except the hash of the original data is passed directly.
	bool VerifyHash(CkByteData &hashBytes, const char *hashAlg, CkByteData &sigBytes);


	// The same as VerifyBytesENC except the hash of the original data is passed
	// directly.
	bool VerifyHashENC(const char *encodedHash, const char *hashAlg, const char *encodedSig);


	// Returns true if the XML contains a valid RSA private key. Otherwise returns
	// false.
	bool VerifyPrivateKey(const char *xml);


	// Verifies an RSA digital signature. Returns true if the signature is valid for
	// the originalString. The hashAlgorithm may be "SHA-1", "MD5", "MD2", "SHA-256", "SHA-384", or
	// "SHA-512". The recommended hash algorithm is "SHA-1".
	bool VerifyString(const char *originalString, const char *hashAlgorithm, CkByteData &binarySig);


	// Verifies an RSA digital signature. Returns true if the signature is valid for
	// the originalString. The hashAlgorithm may be "SHA-1", "MD5", "MD2", "SHA-256", "SHA-384", or
	// "SHA-512". The recommended hash algorithm is "SHA-1".
	// 
	// The encodedSig is a digital signature encoded according to the EncodingMode property
	// (i.e. base64, hex, etc.).
	// 
	bool VerifyStringENC(const char *originalString, const char *hashAlgorithm, const char *encodedSig);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
