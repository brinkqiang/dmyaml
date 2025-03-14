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
