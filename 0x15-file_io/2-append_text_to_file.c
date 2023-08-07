#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
ssize_t bytes_written, text_length = 0;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);

if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
        /* Calculate the length of the text_content */
while (text_content[text_length] != '\0')
text_length++;

/* Write text_content to the end of the file */
bytes_written = write(file_descriptor, text_content, text_length);

close(file_descriptor);

if (bytes_written != text_length)
return (-1);
}
else
{
close(file_descriptor);
}

return (1);
}
