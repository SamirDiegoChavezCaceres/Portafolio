
class String {
    public:
        String(char* str);
        ~String();
        void printS();
        int getLength();
        bool isSubstring(String* str);
        bool isRotation(String* str);
    private:
        char* str;
        int length;
};