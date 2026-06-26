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
            url: "https://facephicorp.jfrog.io/artifactory/spm-pro-fphi/WIDGET/FPHITokenizerWidget/1.1.6/FPHITokenizerWidget.zip",
            checksum: "02020288b051697405d003f8114480e83727f8ee59581235411483ca6640ce3f"
        ),
    ]
)
