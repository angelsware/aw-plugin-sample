#include <sample/hello.h>
#include <sample/variables.h>
#include <log/aw_log.h>

void Hello::world() {
	LOG_INFO(SampleVariables::Message);
}
