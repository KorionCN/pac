/**
 * form: https://github.com/manugarg/pacparser
 */
#include <stdio.h>

int pacparser_init();
int pacparser_parse_pac(char* pacfile);
char *pacparser_find_proxy(char *url, char *host);
void pacparser_cleanup();

int main(int argc, char* argv[])
{
  char *proxy;
  pacparser_init();
  pacparser_parse_pac(argv[1]);
  proxy = pacparser_find_proxy(argv[2], argv[3]);
  printf("%s\n", proxy);
  pacparser_cleanup();
}
