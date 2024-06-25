Pod::Spec.new do |s|
  s.name        = 'UBiXMerakSDK'
  s.version     = '2.3.4'
  s.license     = 'MIT'
  s.authors     = {'ubixai' => 'pub.dev@ubixai.com'}
  s.homepage    = 'https://github.com/ubixai/UBiXAdSDK'
  s.source      = { :git => 'https://github.com/ubixai/UBiXAdSDK.git', :tag => s.version.to_s}
  s.summary     = 'UBiX Merak Ad SDK for iOS.'
  s.description = 'UBiX Merak Ad SDK for iOS.'
  s.ios.deployment_target  = '9.0'
  # s.dependency 'AFNetworking', '~> 1.0'
  s.frameworks  = 'Accelerate', 'AdSupport', 'AppTrackingTransparency', 'AudioToolbox', 'AVFoundation', 'CoreGraphics', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'ImageIO', 'QuartzCore', 'SafariServices', 'Security', 'StoreKit', 'SystemConfiguration', 'WebKit'
  s.libraries   = ["z", "sqlite3"]
  # spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.user_target_xcconfig   = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.ios.vendored_framework = 'UbiXAdSDK.framework'
  s.dependency 'UBiXDaq', '~> 2.3.1'
  # s.resources   = ['Images/*.png', 'Sounds/*']
end


