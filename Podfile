platform :ios, '8.0'
use_frameworks!

# ignore all warnings from all pods

target 'TestPods' do
  pod 'Kite-Print-SDK'
  pod 'Kite-Print-SDK/PayPal'
  pod 'Kite-Print-SDK/ImageProviders'
  pod 'Kite-Print-SDK/ApplePay'
end

pre_install do |installer|
    def installer.verify_no_static_framework_transitive_dependencies; end
end