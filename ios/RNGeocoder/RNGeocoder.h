#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>

#import <CoreLocation/CoreLocation.h>

@interface RCTConvert (CoreLocation)
+ (CLLocation *)CLLocation:(id)json;
@end

@interface RNGeocoder : NSObject<RCTBridgeModule>
@property (nonatomic, strong) CLGeocoder *geocoder;
@property (nonatomic, strong) NSString *oldLanguage;
@end
