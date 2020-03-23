#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of f and b and p, and lower & upper case") {
    string text = "Success is not final failure is not fatal it is the courage to continue that counts";
    CHECK(find(text, "binal") == string("final"));
    CHECK(find(text, "pataL") == string("fatal"));
    CHECK(find(text, "FailUre") == string("failure"));
    CHECK(find(text, "CouNts") == string("counts"));
}



TEST_CASE("Test replacement of v and w, and lower & upper case") {
    string text = "the best argument against democracy is a five minute conversation with the average voter";
    CHECK(find(text, "Vith") == string("with"));
    CHECK(find(text, "woter") == string("voter"));
    CHECK(find(text, "Voter") == string("voter"));
    CHECK(find(text, "DemOcrAcy") == string("democracy"));
}



TEST_CASE("Test replacement of g and j, and lower & upper case") {
    string text = "If you are going through hell keep going";
    CHECK(find(text, "Joinj") == string("going"));
    CHECK(find(text, "tHrouJh") == string("through"));
    CHECK(find(text, "joinG") == string("going"));
    CHECK(find(text, "iF") == string("If"));
}




TEST_CASE("Test replacement of s and z, and lower & upper case") {
    string text = "A pessimist sees the difficulty in every opportunity an optimist sees the opportunity in every difficulty";
    CHECK(find(text, "peZzimiSt") == string("pessimist"));
    CHECK(find(text, "oPtimizt") == string("optimist"));
    CHECK(find(text, "zeez") == string("sees"));
    CHECK(find(text, "SeeZ") == string("sees"));
}



TEST_CASE("Test replacement of d and t, and lower & upper case") {
    string text = "this report by its very length defends itself against the Disk if being read";
    CHECK(find(text, "Tefents") == string("defends"));
    CHECK(find(text, "reporD") == string("report"));
    CHECK(find(text, "reat") == string("read"));
    CHECK(find(text, "tisk") == string("Disk"));
}



TEST_CASE("Test replacement of o and u, and lower & upper case") {
    string text = "I have nothing tU offer but bluud toil tears and sweat ";
    CHECK(find(text, "blood") == string("bluud"));
    CHECK(find(text, "nUthing") == string("nothing"));
    CHECK(find(text, "tOil") == string("toil"));
    CHECK(find(text, "to") == string("tU"));
}




TEST_CASE("Test replacement of i and y, and lower & upper case") {
    string text = "Russia is a rYddle wrapped in a mystery inside an Enygma";
    CHECK(find(text, "RussYa") == string("Russia"));
    CHECK(find(text, "riddle") == string("rYddle"));
    CHECK(find(text, "YnsIde") == string("inside"));
    CHECK(find(text, "enigma") == string("Enygma"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "It has been said that democracy is the WorSt form of joWernmenD except all the others that have been tried";
    CHECK(find(text, "government") == string("joWernmenD"));
    CHECK(find(text, "temoKraqi") == string("democracy"));
    CHECK(find(text, "worst") == string("WorSt"));
    CHECK(find(text, "Utherz") == string("others"));
    
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "history is vrYdden by the victors";
    CHECK(find(text, "hYstorI") == string("history"));
    CHECK(find(text, "written") == string("vrYdden"));
    CHECK(find(text, "by") == string("by"));
    CHECK(find(text, "wyctorz") == string("victors"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Dhe enemy of my enemy is my prient";
    CHECK(find(text, "EnemY") == string("enemy"));
    CHECK(find(text, "friend") == string("prient"));
    CHECK(find(text, "Mi") == string("my"));
    CHECK(find(text, "the") == string("Dhe"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "IB a MAN does his best what else is there";
    CHECK(find(text, "There") == string("there"));
    CHECK(find(text, "Vhad") == string("what"));
    CHECK(find(text, "man") == string("MAN"));
    CHECK(find(text, "If") == string("IB"));
}





TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Courage is Bear hoding on a minute LunJer";
    CHECK(find(text, "fear") == string("Bear"));
    CHECK(find(text, "mYnude") == string("minute"));
    CHECK(find(text, "longer") == string("LunJer"));
    CHECK(find(text, "A") == string("a"));
}


TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "If ewerIune is thinking ALIKE then sombody is not thinking ";
    CHECK(find(text, "everyone") == string("ewerIune"));
    CHECK(find(text, "ZumbUdi") == string("sombody"));
    CHECK(find(text, "thYncinG") == string("thinking"));
    CHECK(find(text, "alike") == string("ALIKE"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Battle is an urgi of disorder";
    CHECK(find(text, "Paddle") == string("Battle"));
    CHECK(find(text, "orgy") == string("urgi"));
    CHECK(find(text, "uP") == string("of"));
    CHECK(find(text, "Dysorter") == string("disorder"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Success is how high Iuo bounce when you hit puDDOm";
    CHECK(find(text, "zukqeZS") == string("Success"));
    CHECK(find(text, "puonqe") == string("bounce"));
    CHECK(find(text, "bottom") == string("puDDOm"));
    CHECK(find(text, "you") == string("Iuo"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Better to fight for something than live for nuthynj";
    CHECK(find(text, "Bighd") == string("fight"));
    CHECK(find(text, "nothing") == string("nuthynj"));
    CHECK(find(text, "ZumedhYng") == string("something"));
    CHECK(find(text, "for") == string("for"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "It is not that Y am so smart it is just that I stay with problems longer ";
    CHECK(find(text, "Frublemz") == string("problems"));
    CHECK(find(text, "I") == string("Y"));
    CHECK(find(text, "zMARd") == string("smart"));
    CHECK(find(text, "Vidh") == string("with"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Pure mAdhEmaTiKz is in its way the poetry of luJyqal ideas";
    CHECK(find(text, "mathematics") == string("mAdhEmaTiKz"));
    CHECK(find(text, "BoeDri") == string("poetry"));
    CHECK(find(text, "vAi") == string("way"));
    CHECK(find(text, "logical") == string("luJyqal"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Love YZ a better DeaqhEr than doti";
    CHECK(find(text, "pedder") == string("better"));
    CHECK(find(text, "is") == string("YZ"));
    CHECK(find(text, "duty") == string("doti"));
    CHECK(find(text, "teacher") == string("DeaqhEr"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "vhen the solution is SymFle God is answering";
    CHECK(find(text, "zulUtiOn") == string("solution"));
    CHECK(find(text, "simple") == string("SymFle"));
    CHECK(find(text, "AnzwerynJ") == string("answering"));
    CHECK(find(text, "When") == string("vhen"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "God always takes THE zymbelSd way";
    CHECK(find(text, "Jut") == string("God"));
    CHECK(find(text, "simpelst") == string("zymbelSd"));
    CHECK(find(text, "Wai") == string("way"));
    CHECK(find(text, "the") == string("THE"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "The faster you go the zhUrder you ARE";
    CHECK(find(text, "BazdEr") == string("faster"));
    CHECK(find(text, "shorter") == string("zhUrder"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "are") == string("ARE"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "Information is not knowledge";
    CHECK(find(text, "Ynpurmadyun") == string("Information"));
    CHECK(find(text, "INFORMATION") == string("Information"));
    CHECK(find(text, "qnuvletje") == string("knowledge"));
    CHECK(find(text, "cnUWleDge") == string("knowledge"));
}



TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "KuynqitenCe is Jodz VaI of remaining AnUnImuos";
    CHECK(find(text, "Coincidence") == string("KuynqitenCe"));
    CHECK(find(text, "anonymous") == string("AnUnImuos"));
    CHECK(find(text, "way") == string("VaI"));
    CHECK(find(text, "Gods") == string("Jodz"));
}




TEST_CASE("Test replace muiltply letters, and change cases") {
    string text = "LYWe laught love";
    CHECK(find(text, "live") == string("LYWe"));
    CHECK(find(text, "lAojhd") == string("laught"));
    CHECK(find(text, "LauGhT") == string("laught"));
    CHECK(find(text, "love") == string("love"));
}


