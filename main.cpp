/*! \file main.cpp
 * \brief Entry point.
 */

#include <fmt/ranges.h>

#include <span>

#include "pch.h"

using namespace std;

namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    spdlog::default_logger()->set_level(spdlog::level::debug);

    const auto arguments = std::span(argv, size_t(argc));

    spdlog::info("Args: {}", fmt::format("{}", arguments));

    po::options_description desc("My project app");

    desc.add_options()("config", po::value<std::string>(), "Path to the config file");

    po::variables_map opts;
    po::store(po::parse_command_line(argc, argv, desc), opts);

    try {
        po::notify(opts);
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}