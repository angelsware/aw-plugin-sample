#include <sample/hello.h>
#include "variables.h"
#include <log/aw_log.h>

void Hello::world() {
	LOG_INFO(SampleVariables::Message);
}
