#define BUF_SIZE 2048

int main()
{
    char buf[BUF_SIZE];
    int cc;

    while ((cc = read (0, buf, BUF_SIZE)) > 0) {
        write(1, buf, cc);
    }

    exit(0);
}
