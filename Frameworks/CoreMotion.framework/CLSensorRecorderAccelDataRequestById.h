/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSensorRecorderAccelDataRequestById : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    unsigned long long  _metaIdentifier;
}

@property unsigned long long identifier;
@property unsigned long long metaIdentifier;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)metaIdentifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setMetaIdentifier:(unsigned long long)arg1;

@end