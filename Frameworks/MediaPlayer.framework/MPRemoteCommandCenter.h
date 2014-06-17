/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPRatingCommand, MPChangeRepeatModeCommand, NSArray, MPFeedbackCommand, MPSkipIntervalCommand, MPRemoteCommand, MPChangeShuffleModeCommand, MPPurchaseCommand, MPChangePlaybackRateCommand;

@interface MPRemoteCommandCenter : NSObject  {
    NSArray *_commandsArray;
    void *_mediaRemoteCommandHandler;
    bool_scheduledSupportedCommandsChangedNotification;
    bool_canBeNowPlayingApplication;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPPurchaseCommand *_buyTrackCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPRemoteCommand *_setPlaybackQueueCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
}

@property(readonly) MPRemoteCommand * pauseCommand;
@property(readonly) MPRemoteCommand * playCommand;
@property(readonly) MPRemoteCommand * stopCommand;
@property(readonly) MPRemoteCommand * togglePlayPauseCommand;
@property(readonly) MPRemoteCommand * nextTrackCommand;
@property(readonly) MPRemoteCommand * previousTrackCommand;
@property(readonly) MPSkipIntervalCommand * skipForwardCommand;
@property(readonly) MPSkipIntervalCommand * skipBackwardCommand;
@property(readonly) MPRemoteCommand * seekForwardCommand;
@property(readonly) MPRemoteCommand * seekBackwardCommand;
@property(readonly) MPRatingCommand * ratingCommand;
@property(readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;
@property(readonly) MPFeedbackCommand * likeCommand;
@property(readonly) MPFeedbackCommand * dislikeCommand;
@property(readonly) MPFeedbackCommand * bookmarkCommand;

+ (id)sharedCommandCenter;

- (id)bookmarkCommand;
- (id)dislikeCommand;
- (id)likeCommand;
- (id)ratingCommand;
- (id)setPlaybackQueueCommand;
- (id)createRadioStationCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)preOrderAlbumCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)changeShuffleModeCommand;
- (id)changeRepeatModeCommand;
- (struct __CFArray { }*)_copySupportedCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (void)_scheduleSupportedCommandsChangedNotify;
- (void)_teardownNotifications;
- (void)_teardownMediaRemoteControlClient;
- (void)_teardownCommandConfigurationObservers;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_setupMediaRemoteControlClient;
- (void)_setupCommandConfigurationObservers;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupNotifications;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackRateCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)previousTrackCommand;
- (id)nextTrackCommand;
- (id)stopCommand;
- (id)seekForwardCommand;
- (id)seekBackwardCommand;
- (id)togglePlayPauseCommand;
- (id)playCommand;
- (id)pauseCommand;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;

@end