// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FPHITokenizerWidget",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "FPHITokenizerWidget",
            targets: ["FPHITokenizerWidget-SPM"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(url: "git@github.com:facephi-clienters/FPBTokenizer-SPM.git", .upToNextMinor(from: "4.0.4")),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "FPHITokenizerWidget-SPM",
            dependencies: ["FPHITokenizerWidget", "FPBTokenizer-SPM"]),
        .binaryTarget(name: "FPHITokenizerWidget", path: "FPHITokenizerWidget.xcframework")
    ]
)