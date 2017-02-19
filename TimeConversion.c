//Time Conversion

int main (void) {

    int hh, mm, ss;
    char tt[3] = "";

    scanf ("%d:%d:%d %[^\n]%*c", &hh, &mm, &ss, tt);

    hh = (strcmp (tt, "PM") == 0 && hh != 12) ? hh + 12 : hh;
    if (strcmp (tt, "AM") == 0 && hh == 12) hh = 0;
    printf ("%02d:%02d:%02d\n\n", hh, mm, ss);

    return 0;
}
