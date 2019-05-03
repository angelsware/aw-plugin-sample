# aw-plugin-sample

Sample plugin for Angels' Ware rendering engine.

### Getting Started

Add the **plugins** section to the **config.json** file of your project.

```
{
	...

	"plugins":[
		{
			"repo":"https://github.com/angelsware/aw-plugin-sample.git",
			"tag":"*",
			"variables":[
				{
					"name":"Message",
					"value":"Hello World!"
				}
			]
		}
	]
}
```

```
#include "app.h"
#include <sample/hello.h>

App::App()
{
	Hello h;
	h.world();
}

```
