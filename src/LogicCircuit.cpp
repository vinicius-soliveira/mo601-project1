#include <LogicCircuit>

#define AND(A, B) (A & B)
#define OR(A, B) (A | B)
#define NOT(A) (!A)
#define NAND(A, B) !(A & B)
#define NOR(A, B) !(A | B)
#define XOR(A,B) (A ^ B)

class LogicCircuit(){

    enum logicGate_t{
        AND,
        OR,
        NOT, 
        NAND,
        NOR,
        XOR
    };

    enum terminal_t{
        INPUT,
        OUTPUT
    };

    private:

        struct Signal{
            char label;
            terminal_t type;
            bool value;
        };

        struct Gate{
            logicGate_t type;
            Signal* input;
            Signal output;
        };

        Signal* signals;
        Gate* gates;
       

    public:
        LogicCircuit()
        void assignOperation(bool* )
        void setInputSignals(bool* );
        bool* readOutputSignals();

}