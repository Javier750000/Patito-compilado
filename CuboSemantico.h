#ifndef CUBOSEMANTICO_H
#define CUBOSEMANTICO_H
#include <iostream>
#include <map>
using namespace std;

class CuboSemantico
{
    private:
        map<string, map<string, map<string, string> > > cuboSemantico;

    public:
        CuboSemantico();
};

CuboSemantico::CuboSemantico()
{
    cuboSemantico["int"]["int"]["+"]="int";
    cuboSemantico["int"]["int"]["-"]="int";
    cuboSemantico["int"]["int"]["*"]="int";
    cuboSemantico["int"]["int"]["/"]="int";
    cuboSemantico["int"]["int"][">"]="bool";
    cuboSemantico["int"]["int"]["<"]="bool";
    cuboSemantico["int"]["int"][">="]="bool";
    cuboSemantico["int"]["int"]["<="]="bool";
    cuboSemantico["int"]["int"]["="]="int";
    cuboSemantico["int"]["int"]["=="]="bool";
    cuboSemantico["int"]["int"]["<>"]="bool";
    cuboSemantico["int"]["int"]["&&"]="Error";
    cuboSemantico["int"]["int"]["||"]="Error";

    cuboSemantico["int"]["float"]["+"]="float";
    cuboSemantico["int"]["float"]["-"]="float";
    cuboSemantico["int"]["float"]["*"]="float";
    cuboSemantico["int"]["float"]["/"]="float";
    cuboSemantico["int"]["float"][">"]="bool";
    cuboSemantico["int"]["float"]["<"]="bool";
    cuboSemantico["int"]["float"][">="]="bool";
    cuboSemantico["int"]["float"]["<="]="bool";
    cuboSemantico["int"]["float"]["="]="int";
    cuboSemantico["int"]["float"]["=="]="bool";
    cuboSemantico["int"]["float"]["<>"]="bool";
    cuboSemantico["int"]["float"]["&&"]="Error";
    cuboSemantico["int"]["float"]["||"]="Error";

    cuboSemantico["int"]["char"]["+"]="Error";
    cuboSemantico["int"]["char"]["-"]="Error";
    cuboSemantico["int"]["char"]["*"]="Error";
    cuboSemantico["int"]["char"]["/"]="Error";
    cuboSemantico["int"]["char"][">"]="Error";
    cuboSemantico["int"]["char"]["<"]="Error";
    cuboSemantico["int"]["char"][">="]="Error";
    cuboSemantico["int"]["char"]["<="]="Error";
    cuboSemantico["int"]["char"]["="]="Error";
    cuboSemantico["int"]["char"]["=="]="Error";
    cuboSemantico["int"]["char"]["<>"]="Error";
    cuboSemantico["int"]["char"]["&&"]="Error";
    cuboSemantico["int"]["char"]["||"]="Error";

    cuboSemantico["int"]["bool"]["+"]="Error";
    cuboSemantico["int"]["bool"]["-"]="Error";
    cuboSemantico["int"]["bool"]["*"]="Error";
    cuboSemantico["int"]["bool"]["/"]="Error";
    cuboSemantico["int"]["bool"][">"]="Error";
    cuboSemantico["int"]["bool"]["<"]="Error";
    cuboSemantico["int"]["bool"][">="]="Error";
    cuboSemantico["int"]["bool"]["<="]="Error";
    cuboSemantico["int"]["bool"]["="]="Error";
    cuboSemantico["int"]["bool"]["=="]="Error";
    cuboSemantico["int"]["bool"]["<>"]="Error";
    cuboSemantico["int"]["bool"]["&&"]="Error";
    cuboSemantico["int"]["bool"]["||"]="Error";

    cuboSemantico["float"]["int"]["+"]="float";
    cuboSemantico["float"]["int"]["-"]="float";
    cuboSemantico["float"]["int"]["*"]="float";
    cuboSemantico["float"]["int"]["/"]="float";
    cuboSemantico["float"]["int"][">"]="bool";
    cuboSemantico["float"]["int"]["<"]="bool";
    cuboSemantico["float"]["int"][">="]="bool";
    cuboSemantico["float"]["int"]["<="]="bool";
    cuboSemantico["float"]["int"]["="]="float";
    cuboSemantico["float"]["int"]["=="]="bool";
    cuboSemantico["float"]["int"]["<>"]="bool";
    cuboSemantico["float"]["int"]["&&"]="Error";
    cuboSemantico["float"]["int"]["||"]="Error";

    cuboSemantico["float"]["float"]["+"]="float";
    cuboSemantico["float"]["float"]["-"]="float";
    cuboSemantico["float"]["float"]["*"]="float";
    cuboSemantico["float"]["float"]["/"]="float";
    cuboSemantico["float"]["float"][">"]="bool";
    cuboSemantico["float"]["float"]["<"]="bool";
    cuboSemantico["float"]["float"][">="]="bool";
    cuboSemantico["float"]["float"]["<="]="bool";
    cuboSemantico["float"]["float"]["="]="float";
    cuboSemantico["float"]["float"]["=="]="bool";
    cuboSemantico["float"]["float"]["<>"]="bool";
    cuboSemantico["float"]["float"]["&&"]="Error";
    cuboSemantico["float"]["float"]["||"]="Error";

    cuboSemantico["float"]["char"]["+"]="Error";
    cuboSemantico["float"]["char"]["-"]="Error";
    cuboSemantico["float"]["char"]["*"]="Error";
    cuboSemantico["float"]["char"]["/"]="Error";
    cuboSemantico["float"]["char"][">"]="Error";
    cuboSemantico["float"]["char"]["<"]="Error";
    cuboSemantico["float"]["char"][">="]="Error";
    cuboSemantico["float"]["char"]["<="]="Error";
    cuboSemantico["float"]["char"]["="]="Error";
    cuboSemantico["float"]["char"]["=="]="Error";
    cuboSemantico["float"]["char"]["<>"]="Error";
    cuboSemantico["float"]["char"]["&&"]="Error";
    cuboSemantico["float"]["char"]["||"]="Error";

    cuboSemantico["float"]["bool"]["+"]="Error";
    cuboSemantico["float"]["bool"]["-"]="Error";
    cuboSemantico["float"]["bool"]["*"]="Error";
    cuboSemantico["float"]["bool"]["/"]="Error";
    cuboSemantico["float"]["bool"][">"]="Error";
    cuboSemantico["float"]["bool"]["<"]="Error";
    cuboSemantico["float"]["bool"][">="]="Error";
    cuboSemantico["float"]["bool"]["<="]="Error";
    cuboSemantico["float"]["bool"]["="]="Error";
    cuboSemantico["float"]["bool"]["=="]="Error";
    cuboSemantico["float"]["bool"]["<>"]="Error";
    cuboSemantico["float"]["bool"]["&&"]="Error";
    cuboSemantico["float"]["bool"]["||"]="Error";

    cuboSemantico["char"]["int"]["+"]="Error";
    cuboSemantico["char"]["int"]["-"]="Error";
    cuboSemantico["char"]["int"]["*"]="Error";
    cuboSemantico["char"]["int"]["/"]="Error";
    cuboSemantico["char"]["int"][">"]="Error";
    cuboSemantico["char"]["int"]["<"]="Error";
    cuboSemantico["char"]["int"][">="]="Error";
    cuboSemantico["char"]["int"]["<="]="Error";
    cuboSemantico["char"]["int"]["="]="Error";
    cuboSemantico["char"]["int"]["=="]="Error";
    cuboSemantico["char"]["int"]["<>"]="Error";
    cuboSemantico["char"]["int"]["&&"]="Error";
    cuboSemantico["char"]["int"]["||"]="Error";

    cuboSemantico["char"]["float"]["+"]="Error";
    cuboSemantico["char"]["float"]["-"]="Error";
    cuboSemantico["char"]["float"]["*"]="Error";
    cuboSemantico["char"]["float"]["/"]="Error";
    cuboSemantico["char"]["float"][">"]="Error";
    cuboSemantico["char"]["float"]["<"]="Error";
    cuboSemantico["char"]["float"][">="]="Error";
    cuboSemantico["char"]["float"]["<="]="Error";
    cuboSemantico["char"]["float"]["="]="Error";
    cuboSemantico["char"]["float"]["=="]="Error";
    cuboSemantico["char"]["float"]["<>"]="Error";
    cuboSemantico["char"]["float"]["&&"]="Error";
    cuboSemantico["char"]["float"]["||"]="Error";

    cuboSemantico["char"]["char"]["+"]="char";
    cuboSemantico["char"]["char"]["-"]="Error";
    cuboSemantico["char"]["char"]["*"]="Error";
    cuboSemantico["char"]["char"]["/"]="Error";
    cuboSemantico["char"]["char"][">"]="Error";
    cuboSemantico["char"]["char"]["<"]="Error";
    cuboSemantico["char"]["char"][">="]="Error";
    cuboSemantico["char"]["char"]["<="]="Error";
    cuboSemantico["char"]["char"]["="]="char";
    cuboSemantico["char"]["char"]["=="]="bool";
    cuboSemantico["char"]["char"]["<>"]="bool";
    cuboSemantico["char"]["char"]["&&"]="Error";
    cuboSemantico["char"]["char"]["||"]="Error";

    cuboSemantico["char"]["bool"]["+"]="Error";
    cuboSemantico["char"]["bool"]["-"]="Error";
    cuboSemantico["char"]["bool"]["*"]="Error";
    cuboSemantico["char"]["bool"]["/"]="Error";
    cuboSemantico["char"]["bool"][">"]="Error";
    cuboSemantico["char"]["bool"]["<"]="Error";
    cuboSemantico["char"]["bool"][">="]="Error";
    cuboSemantico["char"]["bool"]["<="]="Error";
    cuboSemantico["char"]["bool"]["="]="Error";
    cuboSemantico["char"]["bool"]["=="]="Error";
    cuboSemantico["char"]["bool"]["<>"]="Error";
    cuboSemantico["char"]["bool"]["&&"]="Error";
    cuboSemantico["char"]["bool"]["||"]="Error";

    cuboSemantico["bool"]["int"]["+"]="Error";
    cuboSemantico["bool"]["int"]["-"]="Error";
    cuboSemantico["bool"]["int"]["*"]="Error";
    cuboSemantico["bool"]["int"]["/"]="Error";
    cuboSemantico["bool"]["int"][">"]="Error";
    cuboSemantico["bool"]["int"]["<"]="Error";
    cuboSemantico["bool"]["int"][">="]="Error";
    cuboSemantico["bool"]["int"]["<="]="Error";
    cuboSemantico["bool"]["int"]["="]="Error";
    cuboSemantico["bool"]["int"]["=="]="Error";
    cuboSemantico["bool"]["int"]["<>"]="Error";
    cuboSemantico["bool"]["int"]["&&"]="Error";
    cuboSemantico["bool"]["int"]["||"]="Error";

    cuboSemantico["bool"]["float"]["+"]="Error";
    cuboSemantico["bool"]["float"]["-"]="Error";
    cuboSemantico["bool"]["float"]["*"]="Error";
    cuboSemantico["bool"]["float"]["/"]="Error";
    cuboSemantico["bool"]["float"][">"]="Error";
    cuboSemantico["bool"]["float"]["<"]="Error";
    cuboSemantico["bool"]["float"][">="]="Error";
    cuboSemantico["bool"]["float"]["<="]="Error";
    cuboSemantico["bool"]["float"]["="]="Error";
    cuboSemantico["bool"]["float"]["=="]="Error";
    cuboSemantico["bool"]["float"]["<>"]="Error";
    cuboSemantico["bool"]["float"]["&&"]="Error";
    cuboSemantico["bool"]["float"]["||"]="Error";

    cuboSemantico["bool"]["char"]["+"]="Error";
    cuboSemantico["bool"]["char"]["-"]="Error";
    cuboSemantico["bool"]["char"]["*"]="Error";
    cuboSemantico["bool"]["char"]["/"]="Error";
    cuboSemantico["bool"]["char"][">"]="Error";
    cuboSemantico["bool"]["char"]["<"]="Error";
    cuboSemantico["bool"]["char"][">="]="Error";
    cuboSemantico["bool"]["char"]["<="]="Error";
    cuboSemantico["bool"]["char"]["="]="Error";
    cuboSemantico["bool"]["char"]["=="]="Error";
    cuboSemantico["bool"]["char"]["<>"]="Error";
    cuboSemantico["bool"]["char"]["&&"]="Error";
    cuboSemantico["bool"]["char"]["||"]="Error";

    cuboSemantico["bool"]["bool"]["+"]="Error";
    cuboSemantico["bool"]["bool"]["-"]="Error";
    cuboSemantico["bool"]["bool"]["*"]="Error";
    cuboSemantico["bool"]["bool"]["/"]="Error";
    cuboSemantico["bool"]["bool"][">"]="Error";
    cuboSemantico["bool"]["bool"]["<"]="Error";
    cuboSemantico["bool"]["bool"][">="]="Error";
    cuboSemantico["bool"]["bool"]["<="]="Error";
    cuboSemantico["bool"]["bool"]["="]="bool";
    cuboSemantico["bool"]["bool"]["=="]="bool";
    cuboSemantico["bool"]["bool"]["<>"]="bool";
    cuboSemantico["bool"]["bool"]["&&"]="bool";
    cuboSemantico["bool"]["bool"]["||"]="bool";
}

#endif