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
            url: "https://facephicorp.jfrog.io/artifactory/spm-pro-fphi/WIDGET/FPHITokenizerWidget/1.1.5/FPHITokenizerWidget.zip",
            checksum: "942fa4953a006534174a98c69f693e829051d0778ac16cddda3d4a84d5daa008"
        ),
    ]
)
