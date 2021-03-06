/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {
    NSString * _prominentRadioStationName;
    BOOL  _prominentRadioStationSupported;
}

@property (nonatomic, copy) NSString *prominentRadioStationName;
@property (getter=isProminentRadioStationSupported, nonatomic) BOOL prominentRadioStationSupported;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)isProminentRadioStationSupported;
- (id)prominentRadioStationName;
- (void)setProminentRadioStationName:(id)arg1;
- (void)setProminentRadioStationSupported:(BOOL)arg1;

@end
