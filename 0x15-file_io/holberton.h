#ifndef IO_H
#define IO_H
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
void read_error(char *file_read);
void write_error(char *write_file);
void close_error(char *fd);
void file_exists(char *argv1, char *argv2);
#endif
