// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterInk",
    products: [
        .library(name: "TreeSitterInk", targets: ["TreeSitterInk"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterInk",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterInkTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterInk",
            ],
            path: "bindings/swift/TreeSitterInkTests"
        )
    ],
    cLanguageStandard: .c11
)
