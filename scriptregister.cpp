
#include "scriptregister.h"




ScriptRegister::ScriptRegister(const ScriptRegisterBase& Base)  : ScriptRegisterBase()
{
    Name = Base.GetName();
    DefaultFunctionName = Base.GetDefaultFunctionName();
    FunctionsParameters = Base.GetFunctionsParameters();
    FunctionsReturnType = Base.GetFunctionsReturnType();
    InitializationTemplate = Base.GetInitializationTemplate();
}

