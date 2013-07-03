/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSStorageReporting>, NSString, NSArray;

@interface PSUsageBundleApp : NSObject  {
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    float _totalSize;
    <PSStorageReporting> *_usageBundleStorageReporter;
}

@property(retain) NSString * name;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSArray * categories;
@property float totalSize;
@property(retain) <PSStorageReporting> * usageBundleStorageReporter;

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;

- (id)usageBundleStorageReporter;
- (float)totalSize;
- (void)setCategories:(id)arg1;
- (void)setTotalSize:(float)arg1;
- (void)setUsageBundleStorageReporter:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (id)name;
- (id)description;
- (id)categories;
- (void)setName:(id)arg1;
- (id)bundleIdentifier;

@end