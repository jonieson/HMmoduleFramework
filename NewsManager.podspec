#
#  Be sure to run `pod spec lint TMSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
s.name         = "NewsManager"
s.version      = "2.0.8"
s.summary      = "HM新闻组件"
s.homepage     = "https://github.com/jonieson/HMmoduleFramework.git"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "RWW" => "2439535923@qq.com" }
s.platform     = :ios
s.platform     = :ios, "9.0"
s.source       = { :git => "https://github.com/jonieson/HMmoduleFramework.git", :tag => s.version }
s.source_files = 'Frameworks/NewsManager.framework/Headers/*.{h}'
s.ios.vendored_frameworks = 'Frameworks/NewsManager.framework'
s.resources = "Frameworks/NewsModuleSource.bundle"
s.requires_arc = true
s.xcconfig = { 'VALID_ARCHS' =>  'arm64 x86_64', }
#s.dependency "TMSDK"
s.dependency "AFNetworking"
s.dependency "Masonry"
s.dependency "SDWebImage"
s.dependency "SVProgressHUD"
s.dependency "SDCycleScrollView"
s.dependency "FTPopOverMenu"
s.dependency "SDAutoLayout"
s.dependency "IQKeyboardManager"



s.frameworks = "UIKit"


end
