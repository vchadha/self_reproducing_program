/*
 * Test self-producing program
 * Varun Chadha
 */

#include <iostream>

std::string program_body = "int main( )\n{\n\tstd::cout << \"/*\\n * Test self-producing program\\n * Varun Chadha\\n */\\n\\n#include <iostream>\";\n\tstd::cout << \"\\n\\nstd::string program_body = \\\"\";\n\tfor ( int i = 0; i < program_body.length(); i++ )\n\t{\n\t\tif ( program_body[i] == '\\n' )\n\t\t{\n\t\t\tstd::cout << \"\\\\n\";\n\t\t}\n\t\telse if ( program_body[i] == '\\t' )\n\t\t{\n\t\t\tstd::cout << \"\\\\t\";\n\t\t}\n\t\telse if ( program_body[i] == '\\\\' )\n\t\t{\n\t\t\tstd::cout << \"\\\\\\\\\";\n\t\t}\n\t\telse if ( program_body[i] == '\\\"' )\n\t\t{\n\t\t\tstd::cout << \"\\\\\\\"\";\n\t\t}\n\t\telse\n\t\t{\n\t\t\tstd::cout << program_body[i];\n\t\t}\n\t}\n\tstd::cout << \"\\\";\";\n\tstd::cout << \"\\n\\n\" << program_body;\n\treturn ( 0 );\n}\n";

int main( )
{
    std::cout << "/*\n * Test self-producing program\n * Varun Chadha\n */\n\n#include <iostream>";
    std::cout << "\n\nstd::string program_body = \"";
    for ( int i = 0; i < program_body.length(); i++ )
    {
        if ( program_body[i] == '\n' )
        {
            std::cout << "\\n";
        }
        else if ( program_body[i] == '\t' )
        {
            std::cout << "\\t";
        }
        else if ( program_body[i] == '\\' )
        {
            std::cout << "\\\\";
        }
        else if ( program_body[i] == '\"' )
        {
            std::cout << "\\\"";
        }
        else
        {
            std::cout << program_body[i];
        }
    }
    std::cout << "\";";
    std::cout << "\n\n" << program_body;
    return ( 0 );
}
