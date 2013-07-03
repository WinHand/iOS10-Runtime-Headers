/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber;

@interface SUScriptApplication : SUScriptObject  {
}

@property(getter=isDelayingTerminate,readonly) id delayingTerminate;
@property(getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode;
@property(retain) id iconBadgeNumber;
@property(readonly) id screenHeight;
@property(readonly) id screenWidth;
@property id statusBarHidden;
@property int statusBarStyle;
@property(getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary;
@property(readonly) NSNumber * exitStoreReasonButton;
@property(readonly) NSNumber * exitStoreReasonDownloadComplete;
@property(readonly) NSNumber * exitStoreReasonFatalError;
@property(readonly) NSNumber * exitStoreReasonGotoMainStore;
@property(readonly) NSNumber * exitStoreReasonOther;
@property(readonly) NSNumber * exitStoreReasonPurchase;
@property(readonly) int statusBarAnimationFade;
@property(readonly) int statusBarAnimationNone;
@property(readonly) int statusBarAnimationSlide;
@property(readonly) int statusBarStyleDefault;
@property(readonly) int statusBarStyleBlackOpaque;
@property(readonly) int statusBarStyleBlackTranslucent;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (int)statusBarStyleBlackTranslucent;
- (int)statusBarStyleBlackOpaque;
- (int)statusBarStyleDefault;
- (int)statusBarAnimationSlide;
- (int)statusBarAnimationNone;
- (int)statusBarAnimationFade;
- (id)exitStoreReasonPurchase;
- (id)exitStoreReasonOther;
- (id)exitStoreReasonGotoMainStore;
- (id)exitStoreReasonFatalError;
- (id)exitStoreReasonDownloadComplete;
- (id)exitStoreReasonButton;
- (void)setIconBadgeNumber:(id)arg1;
- (id)isDelayingTerminate;
- (id)iconBadgeNumber;
- (void)showNewsstand;
- (void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2;
- (void)returnToLibrary;
- (void)exitStoreWithReason:(id)arg1;
- (void)endDelayingTerminate;
- (void)beginDelayingTerminate;
- (id)wasLaunchedFromLibrary;
- (id)scriptAttributeKeys;
- (id)screenWidth;
- (id)screenHeight;
- (id)attributeKeys;
- (id)statusBarHidden;
- (int)statusBarStyle;
- (void)setStatusBarHidden:(id)arg1;
- (void)setStatusBarStyle:(int)arg1;
- (void)setStatusBarStyle:(int)arg1 animated:(BOOL)arg2;
- (id)isRunningInStoreDemoMode;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(int)arg2;

@end