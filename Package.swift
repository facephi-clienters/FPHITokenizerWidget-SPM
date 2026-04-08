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
            url: "https://facephicorp.jfrog.io/artifactory/spm-pro-fphi/WIDGET/FPHITokenizerWidget/1.1.4/FPHITokenizerWidget.zip",
            checksum: "401359ce26f91d466e306d8fba12b452cf3ea0da771de46d482c62db35e014b7"
        ),
    ]
)
