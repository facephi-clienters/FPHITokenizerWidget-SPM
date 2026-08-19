// swift-tools-version: 5.7
import PackageDescription

let package = Package(
    name: "FPHITokenizerWidget",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "FPHITokenizerWidget",
            targets: ["FPHITokenizerWidget-SPM"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/facephi-clienters/FPBTokenizer-SPM.git", .upToNextMinor(from: "4.0.4")),
    ],
    targets: [
        .target(
            name: "FPHITokenizerWidget-SPM",
            dependencies: ["FPHITokenizerWidget", "FPBTokenizer-SPM"]
        ),
        .binaryTarget(
            name: "FPHITokenizerWidget",
            url: "https://facephicorp.jfrog.io/artifactory/spm-pro-fphi/WIDGET/FPHITokenizerWidget/1.2.1/FPHITokenizerWidget.zip",
            checksum: "31ece1bae5683b2b84ea5b84e3ecb0a8f1afe2d98bd84eaa14284da30310a0c8"
        ),
    ]
)
