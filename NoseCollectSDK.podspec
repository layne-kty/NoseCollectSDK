#
#  Be sure to run `pod spec lint NoseCollectSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "NoseCollectSDK"
  spec.version      = "1.3.0"
  spec.summary      = "鼻纹采集"

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = <<-DESC
  鼻纹采集--通过狗狗的鼻子就行采集取样
                   DESC
  spec.homepage     = "https://github.com/layne-kty/NoseCollectSDK"
  spec.license              =           { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "layne" => "layneshi0120@hotmail.com" }
  spec.source       = { :git => "https://github.com/layne-kty/NoseCollectSDK.git", :tag => "#{spec.version}" }
  spec.platform             =           :ios, "10.0"
  spec.vendored_frameworks  =           'Frameworks/biwenSDK.framework'
  spec.resources = 'Resources/NoseSDKImage.bundle'
  spec.frameworks = "Foundation", "UIKit"
end
