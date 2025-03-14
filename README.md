# dmyaml

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![dmyaml](https://img.shields.io/badge/brinkqiang-dmyaml-blue.svg?style=flat-square)](https://github.com/brinkqiang/dmyaml)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/dmyaml/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/dmyaml.svg?label=Stars)](https://github.com/brinkqiang/dmyaml) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/dmyaml.svg?label=Fork)](https://github.com/brinkqiang/dmyaml)

## Build status
| [Linux][lin-link] | [Mac][mac-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![mac-badge]       | ![win-badge]        |

[lin-badge]: https://github.com/brinkqiang/dmyaml/workflows/linux/badge.svg "linux build status"
[lin-link]:  https://github.com/brinkqiang/dmyaml/actions/workflows/linux.yml "linux build status"
[mac-badge]: https://github.com/brinkqiang/dmyaml/workflows/mac/badge.svg "mac build status"
[mac-link]:  https://github.com/brinkqiang/dmyaml/actions/workflows/mac.yml "mac build status"
[win-badge]: https://github.com/brinkqiang/dmyaml/workflows/win/badge.svg "win build status"
[win-link]:  https://github.com/brinkqiang/dmyaml/actions/workflows/win.yml "win build status"

## Intro
dmyaml
```cpp

#include <iostream>
#include "dmyaml.h"
#include "dmutil.h"
int main() {
    DMSetWorkPath();
    // 加载配置文件
    YAML::Node config = YAML::LoadFile("config/model.yaml");

    // 验证配置字段
    std::cout << "Testing model.yaml configuration:" << std::endl;
    std::cout << "Base URL: " << config["baseurl"].as<std::string>() << std::endl;
    std::cout << "Model: " << config["model"].as<std::string>() << std::endl;
    std::cout << "Temperature: " << config["temperature"].as<double>() << std::endl;
    std::cout << "Max Tokens: " << config["max_tokens"].as<int>() << std::endl;

    return 0;
}


```
## Contacts

## Thanks
