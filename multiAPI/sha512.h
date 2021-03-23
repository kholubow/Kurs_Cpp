#ifndef SHA512_HPP_INCLUDED
#define SHA512_HPP_INCLUDED

#include <string>

namespace hmac_hash {

    class SHA512 {
    
		
    protected:
        const static uint64_t sha512_k[];


    public:

        void init();

        
        void update(const uint8_t *message, const size_t length);

        
        void final(uint8_t *digest);

        static const size_t DIGEST_SIZE           = ( 512 / 8);
        static const size_t SHA384_512_BLOCK_SIZE = (1024/8);


    protected:
    	
        void transform(const uint8_t *message, const size_t block_nb);
        size_t m_tot_len;
        size_t m_len;
        uint8_t m_block[2 * SHA384_512_BLOCK_SIZE];
        uint64_t m_h[8];
        
    };

    
    std::string sha512(const std::string &input);
    
}

#endif
