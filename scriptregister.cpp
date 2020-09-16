
#include "scriptregister.h"




ScriptRegister::ScriptRegister(const ScriptRegisterBase& Base, QString const& FuncName)  : ScriptRegisterBase(), FunctionName(FuncName)
{
    Name = Base.GetName();
    DefaultFunctionName = Base.GetDefaultFunctionName();
    FunctionsParameters = Base.GetFunctionsParameters();
    FunctionsReturnType = Base.GetFunctionsReturnType();
    InitializationTemplate = Base.GetInitializationTemplate();
}

