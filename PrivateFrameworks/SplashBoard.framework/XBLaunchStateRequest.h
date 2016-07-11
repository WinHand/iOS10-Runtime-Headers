/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying> {
    FBSDisplay * _display;
    NSString * _groupID;
    long long  _interfaceOrientation;
    NSString * _launchInterfaceIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _naturalSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    unsigned long long  _statusBarState;
    NSString * _urlSchemeName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplay *display;
@property (nonatomic, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, copy) NSString *launchInterfaceIdentifier;
@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic) unsigned long long statusBarState;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *urlSchemeName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)display;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)groupID;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (id)launchInterfaceIdentifier;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setDisplay:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLaunchInterfaceIdentifier:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStatusBarState:(unsigned long long)arg1;
- (void)setUrlSchemeName:(id)arg1;
- (unsigned long long)statusBarState;
- (id)urlSchemeName;

@end