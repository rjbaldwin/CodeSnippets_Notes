// Demo of regex and regular expressions
// rj baldwin 31/07/2023

/*
        Characters with special meaning:

        .   any single char (a "Wildcard")
        [   character class
        {   count
        (   begin grouping
        )   end grouping
        \   next character has a special meaning
        "*" zero or more (without quotes)
        +   one or more
        ?   optional (zero or one)
        |   alternative (or)
        ^   start of line; negation
        $   end of line

        Repeating patterns

        {n}     exactly n times
        {n,}    n or more times
        {n,m}   at least n and at most m times
        "*"     zero or more, that is, {0,} (without quotes)
        +       one or more, that is {1,}
        ?       optional (zero or one), that is, {0,1}

        ==============================================================================


        Character classes

        \d  a decimal digit                                             [[:digit:]]
        \l  a lowercase character                                       [[:lower:]]
        \s  a space (space, tab, etc.)                                  [[:space:]]
        \u  an uppercase character                                      [[:upper:]]
        \w  a letter (a-z or A-Z) or digit (0-9) or an underscore (_)   [[:alnum:]]
        \D  not \d                                                      [^[:digit:]]
        \L  not \l                                                      [^[:lower:]]
        \S  not \s                                                      [^[:space:]]
        \U  not \u                                                      [^[:upper:]]
        \W  not \w                                                      [^[:alnum:]]

        alnum   any alphanumeric character
        alpha   any alphabetic character
        blank   any whitespace char that is not a line seperator
        cntrl   any control character
        d       any decimal digit
        digit   any decimal digit
        graph   any graphical character
        lower   any lowercase character
        print   any printable character
        punct   any punctuation character
        s       any whitespace character
        space   any whitespace character
        upper   any uppercase character
        w       any word character (alphanumeric characters plus the underscore)
        xdigit  any hexadecimal digit character


        <regex> header supports:
        regex_match()           match a regular expression against a string (of known size)
        regex_search()          Search for a string that matches a regular expression in an (arbitrarily long) stream of data
        regex_replace()         Search for strings that match a regular expression in an arbitrarily long stream of data and replace them
        regex_iterator          Iterate over matches and submatches
        regex_token_iterator    iterate over non-matches 

*/



#include <iostream>
#include <string>
#include <regex>

using std::string;
using std::cout;
using std::regex;



// demo 1 - Email varification

bool isEmailValid(const std::string& email) {
    
    const regex emailRegex{R"(\w+(\.\w+)?@\w+\.\w+(\.\w+)?)"};     // Regular expression pattern to validate email addresses

    return std::regex_match(email, emailRegex);                    // Match email to expression
}



int main()
{
    
    std::string email;

    std::cout << "Enter an email address: ";
    std::getline(std::cin, email);

    if (isEmailValid(email)) {
        cout << "Email address is valid.\n";
    }
    else {
        cout << "Invalid!\n";
    }

}


