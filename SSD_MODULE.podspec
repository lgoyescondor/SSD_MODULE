Pod::Spec.new do |s|
    s.name         = "SSD_MODULE"
    s.version      = "0.1.1"
    s.summary      = "POD for the SSD"
    s.description  = "POD for the SSD"

    s.homepage     = "http://condorlabs.io"
    s.license      = "MIT"
    # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

    s.author             = { "" => "" }
    s.platform     = :ios, "12.0"
    s.source       = { :git => "https://github.com/lgoyescondor/SSD_MODULE", :tag => "#{s.version}" }
    s.source_files  = "src/main/kotlin/com/common"
    s.exclude_files = "Classes/Exclude"
    s.swift_version = "4.0"
end