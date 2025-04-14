from conan import ConanFile

class MyProjectConan(ConanFile):
    name = "my_project"
    version = "1.0"

    settings = "os", "compiler", "build_type", "arch"

    requires = (
        "gtest/1.14.0",
        "boost/1.84.0",
        "spdlog/1.15.1"
    )

    generators = "CMakeDeps", "CMakeToolchain"

    def layout(self):
        self.folders.build = "build"
        self.folders.source = "."
