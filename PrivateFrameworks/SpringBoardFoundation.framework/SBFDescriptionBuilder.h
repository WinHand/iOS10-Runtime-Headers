/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSObject, NSString, NSMutableString;

@interface SBFDescriptionBuilder : NSObject  {
    NSObject *_object;
    NSMutableString *_description;
    NSString *_separator;
}

@property(copy) NSString * separator;

+ (id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2;
+ (id)descriptionBuilderWithObject:(id)arg1;

- (id)appendKeys:(id)arg1;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 pointerValue:(void*)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned int)arg2;
- (id)appendName:(id)arg1 integerValue:(int)arg2;
- (id)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (id)appendName:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (void)tryAppendKey:(id)arg1;
- (void)setSeparator:(id)arg1;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)build;
- (id)appendNamesAndObjects:(id)arg1 args:(char *)arg2;
- (id)appendKey:(id)arg1;
- (id)separator;
- (id)initWithObject:(id)arg1;
- (void)dealloc;

@end