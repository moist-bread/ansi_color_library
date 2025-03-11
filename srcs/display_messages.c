#include "../ansi_color_codes.h"

void swatch_table(void)
{
	printf(UWHT "\n        ★☆★ ANSI COLOR SWATCH TABLE ★☆★        \n\n" reset);

	printf(BLK "BLK   " RED "RED   " GRN "GRN   " YEL "YEL   " BLU "BLU   " MAG "MAG   " CYN "CYN   " WHT "WHT" reset "\n");
	printf(UBLK "UBLK  " URED "URED  " UGRN "UGRN  " UYEL "UYEL  " UBLU "UBLU  " UMAG "UMAG  " UCYN "UCYN  " UWHT "UWHT " reset "\n");
	printf(BBLK "BBLK  " BRED "BRED  " BGRN "BGRN  " BYEL "BYEL  " BBLU "BBLU  " BMAG "BMAG  " BCYN "BCYN  " BWHT "BWHT" reset "\n");
	printf(HBLK "HBLK  " HRED "HRED  " HGRN "HGRN  " HYEL "HYEL  " HBLU "HBLU  " HMAG "HMAG  " HCYN "HCYN  " HWHT "HWHT" reset "\n");
	printf(BHBLK "BHBLK " BHRED "BHRED " BHGRN "BHGRN " BHYEL "BHYEL " BHBLU "BHBLU " BHMAG "BHMAG " BHCYN "BHCYN " BHWHT "BHWHT" reset "\n");
	printf(BLKB "BLKB  " REDB "REDB  " GRNB "GRNB  " YELB "YELB  " BLUB "BLUB  " MAGB "MAGB  " CYNB "CYNB  " WHTB "WHTB "reset "\n");
	printf(BLKHB "BLKHB " REDHB "REDHB " GRNHB "GRNHB " YELHB "YELHB " BLUHB "BLUHB " MAGHB "MAGHB " CYNHB "CYNHB " WHTHB "WHTHB" reset "\n");
}

void header_defines(void)
{
	printf(UWHT "\n\n  ★☆★ .HEADER DEFINES CTRL+C TABLE ★☆★  \n" reset);

	printf("\n\n// ★☆★ regular text\n");
	printf(BLK WHTB "#define BLK \"\\e[0;30m\"" reset "\n" RED "#define RED \"\\e[0;31m\"\n" GRN "#define GRN \"\\e[0;32m\"\n");
	printf(YEL "#define YEL \"\\e[0;33m\"\n" BLU "#define BLU \"\\e[0;34m\"\n" MAG "#define MAG \"\\e[0;35m\"\n");
	printf(CYN "#define CYN \"\\e[0;36m\"\n" WHT "#define WHT \"\\e[0;37m\"" reset "\n\n");

	printf("\n\n// ★☆★ regular underline text\n");
	printf(UBLK WHTB "#define UBLK \"\\e[4;30m\"" reset "\n" URED "#define URED \"\\e[4;31m\"\n" UGRN "#define UGRN \"\\e[4;32m\"\n");
	printf(UYEL "#define UYEL \"\\e[4;33m\"\n" UBLU "#define UBLU \"\\e[4;34m\"\n" UMAG "#define UMAG \"\\e[4;35m\"\n");
	printf(UCYN "#define UCYN \"\\e[4;36m\"\n" UWHT "#define UWHT \"\\e[4;37m\"" reset "\n\n");

	printf("\n\n// ★☆★ regular bold text\n");
	printf(BBLK "#define BBLK \"\\e[1;30m\"\n" BRED "#define BRED \"\\e[1;31m\"\n" BGRN "#define BGRN \"\\e[1;32m\"\n");
	printf(BYEL "#define BYEL \"\\e[1;33m\"\n" BBLU "#define BBLB \"\\e[1;34m\"\n" BMAG "#define BMAG \"\\e[1;35m\"\n");
	printf(BCYN "#define BCYN \"\\e[1;36m\"\n" BWHT "#define BWHT \"\\e[1;37m\"" reset "\n\n");

	printf("\n\n// ★☆★ high intensty text\n");
	printf(HBLK "#define HBLK \"\\e[0;90m\"\n" HRED "#define HRED \"\\e[0;91m\"\n" HGRN "#define HGRN \"\\e[0;92m\"\n");
	printf(HYEL "#define HYEL \"\\e[0;93m\"\n" HBLU "#define HBLB \"\\e[0;94m\"\n" HMAG "#define HMAG \"\\e[0;95m\"\n");
	printf(HCYN "#define HCYN \"\\e[0;96m\"\n" HWHT "#define HWHT \"\\e[0;97m\"" reset "\n\n");

	printf("\n\n// ★☆★ bold high intensty text\n");
	printf(BHBLK "#define BHBLK \"\\e[1;90m\"\n" BHRED "#define BHRED \"\\e[1;91m\"\n" BHGRN "#define BHGRN \"\\e[1;92m\"\n");
	printf(BHYEL "#define BHYEL \"\\e[1;93m\"\n" BHBLU "#define BHBLB \"\\e[1;94m\"\n" BHMAG "#define BHMAG \"\\e[1;95m\"\n");
	printf(BHCYN "#define BHCYN \"\\e[1;96m\"\n" BHWHT "#define BHWHT \"\\e[1;97m\"" reset "\n\n");

	printf("\n\n// ★☆★ regular background\n");
	printf(BLKB "#define BLKB \"\\e[40m\"" reset "\n" REDB "#define REDB \"\\e[41m\"" reset "\n" GRNB "#define GRNB \"\\e[42m\"" reset "\n");
	printf(YELB "#define YELB \"\\e[43m\"" reset "\n" BLUB "#define BLBB \"\\e[44m\"" reset "\n" MAGB "#define MAGB \"\\e[45m\"" reset "\n");
	printf(CYNB "#define CYNB \"\\e[46m\"" reset "\n" BLK WHTB "#define WHTB \"\\e[47m\"" reset "\n\n");

	printf("\n\n// ★☆★ high intensty background\n");
	printf(BLKHB "#define BLKHB \"\\e[0;100m\"" reset "\n" REDHB "#define REDHB \"\\e[0;101m\"" reset "\n" GRNHB "#define GRNHB \"\\e[0;102m\"" reset "\n");
	printf(YELHB "#define YELHB \"\\e[0;103m\"" reset "\n" BLUHB "#define BLBHB \"\\e[0;104m\"" reset "\n" MAGHB "#define MAGHB \"\\e[0;105m\"" reset "\n");
	printf(CYNHB "#define CYNHB \"\\e[0;106m\"" reset "\n" WHTHB "#define WHTHB \"\\e[0;107m\"" reset "\n\n");

	printf("\n\n// ★☆★ reset\n");
	printf("#define reset \"\\e[0m\"\n\n");
}

void makefile_defines(void)
{
	printf(UWHT "\n\n  ★☆★ MAKEFILE DEFINES CTRL+C TABLE ★☆★  \n" reset);

	printf("\n\n#-‵,┊ regular colors\n");
	printf(BLK WHTB "BLK = \\e[0;30m" reset "\n" RED "RED = \\e[0;31m\n" GRN "GRN = \\e[0;32m\n");
	printf(YEL "YEL = \\e[0;33m\n" BLU "BLU = \\e[0;34m\n" MAG "MAG = \\e[0;35m\n");
	printf(CYN "CYN = \\e[0;36m\n" WHT "WHT = \\e[0;37m" reset "\n\n");

	printf("\n\n#-‵,┊ regular underline colors\n");
	printf(UBLK WHTB "UBLK = \\e[4;30m" reset "\n" URED "URED = \\e[4;31m\n" UGRN "UGRN = \\e[4;32m\n");
	printf(UYEL "UYEL = \\e[4;33m\n" UBLU "UBLU = \\e[4;34m\n" UMAG "UMAG = \\e[4;35m\n");
	printf(UCYN "UCYN = \\e[4;36m\n" UWHT "UWHT = \\e[4;37m" reset "\n\n");
	
	printf("\n\n#-‵,┊ regular bold colors\n");
	printf(BBLK "BBLK = \\e[1;30m\n" BRED "BRED = \\e[1;31m\n" BGRN "BGRN = \\e[1;32m\n");
	printf(BYEL "BYEL = \\e[1;33m\n" BBLU "BBLB = \\e[1;34m\n" BMAG "BMAG = \\e[1;35m\n");
	printf(BCYN "BCYN = \\e[1;36m\n" BWHT "BWHT = \\e[1;37m" reset "\n\n");

	printf("\n\n#-‵,┊ high intensity colors\n");
	printf(HBLK "HBLK = \\e[0;90m\n" HRED "HRED = \\e[0;91m\n" HGRN "HGRN = \\e[0;92m\n");
	printf(HYEL "HYEL = \\e[0;93m\n" HBLU "HBLB = \\e[0;94m\n" HMAG "HMAG = \\e[0;95m\n");
	printf(HCYN "HCYN = \\e[0;96m\n" HWHT "HWHT = \\e[0;97m" reset "\n\n");

	printf("\n\n#-‵,┊ bold high intensity colors\n");
	printf(BHBLK "BHBLK = \\e[1;90m\n" BHRED "BHRED = \\e[1;91m\n" BHGRN "BHGRN = \\e[1;92m\n");
	printf(BHYEL "BHYEL = \\e[1;93m\n" BHBLU "BHBLB = \\e[1;94m\n" BHMAG "BHMAG = \\e[1;95m\n");
	printf(BHCYN "BHCYN = \\e[1;96m\n" BHWHT "BHWHT = \\e[1;97m" reset "\n\n");

	printf("\n\n#-‵,┊ regular background colors\n");
	printf(BLKB "BLKB = \\e[40m" reset "\n" REDB "REDB = \\e[41m" reset "\n" GRNB "GRNB = \\e[42m" reset "\n");
	printf(YELB "YELB = \\e[43m" reset "\n" BLUB "BLBB = \\e[44m" reset "\n" MAGB "MAGB = \\e[45m" reset "\n");
	printf(CYNB "CYNB = \\e[46m" reset "\n" BLK WHTB "WHTB = \\e[47m" reset "\n\n");	
	
	printf("\n\n#-‵,┊ high intensity background colors\n");
	printf(BLKHB "BLKHB = \\e[0;100m" reset "\n" REDHB "REDHB = \\e[0;101m" reset "\n" GRNHB "GRNHB = \\e[0;102m" reset "\n");
	printf(YELHB "YELHB = \\e[0;103m" reset "\n" BLUHB "BLBHB = \\e[0;104m" reset "\n" MAGHB "MAGHB = \\e[0;105m" reset "\n");
	printf(CYNHB "CYNHB = \\e[0;106m" reset "\n" WHTHB "WHTHB = \\e[0;107m" reset "\n\n");

	printf("\n\n#-‵,┊ reset\n");
	printf("DEF = \\e[0m\n\n");
}

void example_uses(void)
{
	printf("placeholder text\n");
}