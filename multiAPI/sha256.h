#ifndef SHA256_HPP_INCLUDED
#define SHA256_HPP_INCLUDED

#include <string>

namespace hmac_hash {

    class SHA256 {
    	
    protected:
        const static uint32_t sha256_k[];

    public:

        void init();

        
        void update(const uint8_t *message, const size_t length);

        
        void final(uint8_t *digest);

        static const size_t DIGEST_SIZE           = ( 256 / 8);
        static const size_t SHA224_256_BLOCK_SIZE = (512/8);


    protected:
        void transform(const uint8_t *message, const size_t block_nb);
        size_t m_tot_len;
        size_t m_len;
        uint8_t m_block[2 * SHA224_256_BLOCK_SIZE];
        uint32_t m_h[8];
        
    };

    
    std::string sha256(const std::string &input);
}

#endif
