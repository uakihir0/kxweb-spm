// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "kxweb",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "kxweb",
            targets: ["kxweb"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kxweb",
            path: "./kxweb.xcframework"
        ),
    ]
)
