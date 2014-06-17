/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, BSDispatchSource;

@interface BSTimer : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BSDispatchSource *_source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;

- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(id)arg5;
- (void)schedule;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)cancel;
- (void)dealloc;

@end