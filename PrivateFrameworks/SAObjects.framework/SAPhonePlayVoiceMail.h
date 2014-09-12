/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand  {
}

@property(copy) NSURL * voiceMailId;

+ (id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playVoiceMail;

- (void)setVoiceMailId:(id)arg1;
- (id)voiceMailId;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end