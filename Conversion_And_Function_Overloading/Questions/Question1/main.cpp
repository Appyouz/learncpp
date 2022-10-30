int main()
{
    int a { 5 }; // 1a  No conversion needed
    int b { 'a' }; // 1b  Numeric promotion
    int c { 5.4 }; // 1c Won't compile due to narrowing conversion
    int d { true }; // Numeric conversion of bool true to int
    int e { static_cast<int>(5.4) }; // 1e  Numeric conversion of 5.4 to int
    double f { 5.0f }; // 1f // Numeric promotion
    double g { 5 }; // 1g  // Numeric conversion

    // Extra credit section
    long h { 5 }; // 1h  Numeric conversion of int ot long

    float i { f }; // 1i (uses previously defined variable f)  Won't compile
    float j { 5.0 }; // 1j Numeric conversion of double to float

}
