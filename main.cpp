#include <boost/url/src.hpp>

using namespace boost::urls;

int main(){
    // Parse a URL. This allocates no memory. The view
// references the character buffer without taking ownership.
//
url_view uv( "https://www.example.com/path/to/file.txt?id=1001&name=John%20Doe&results=full" );

// Print the query parameters with percent-decoding applied
//
for( auto v : uv.params() )
    std::cout << v.key << "=" << v.value << " ";

// Prints: id=1001 name=John Doe results=full

// Create a modifiable copy of `uv`, with ownership of the buffer
//
url u = uv;

// Change some elements in the URL
//
u.set_scheme( "http" )
 .set_encoded_host( "boost.org" )
 .set_encoded_path( "/index.htm" )
 .remove_query()
 .remove_fragment()
 .params().append( {"key", "value"} );

std::cout << u <<'\n';

// Prints: http://boost.org/index.htm?key=value
}