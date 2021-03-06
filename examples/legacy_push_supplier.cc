// This application implements a push supplier which uses the old-style
// CosEvent interfaces to supply events of type CORBA::Any.
// (As opposed to using the new CosNotification interfaces.)
//
// If you do not need to use the CosEvent interfaces for
// backward-compatibility reasons, you can ignore this example.
//
// We have chosen to group code examples according to their
// function.  This file simply puts together various examples
// into a working program.  See the README file for a list of
// command-line options supported.  See the READING_THE_CODE
// file for an explanation of the example code.

#define LEGACY_CLIENT
#define CLIENT_IMPL_CLASS  LegacyPushSupplier_i
#define CLIENT_CLASS_VAR   CosEvC::PushSupplier_var
#define CLIENT_NAME        "legacy_push_supplier"

#define SUPPLY_OR_CONSUME_FN sample_supply_any_fn

#include "main_program.h"
