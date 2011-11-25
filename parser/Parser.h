typedef struct data {
    int length;
    char *content;
} data;

data *craft_info[24][24];

#define TAGLISTSIZE 100
char updated_tags[TAGLISTSIZE];
int tag_index;

int to_int(char c);

char to_char(int i);

void update_tag(int a, int b, char *str, int len);

int update_cache(char *init);

void initCrc8(void);

char crc8(const char* data, char initialChecksum, int length);

char* createProtocolMessage(const char* tag, const char* data);