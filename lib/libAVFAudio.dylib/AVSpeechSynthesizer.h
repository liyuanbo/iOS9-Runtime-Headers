/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechSynthesizer : NSObject {
    <AVSpeechSynthesizerDelegate> * delegate;
    BOOL  paused;
    BOOL  speaking;
}

@property (nonatomic) <AVSpeechSynthesizerDelegate> *delegate;
@property (getter=isPaused, nonatomic, readonly) BOOL paused;
@property (getter=isSpeaking, nonatomic, readonly) BOOL speaking;

+ (void)initialize;

- (BOOL)continueSpeaking;
- (id)delegate;
- (BOOL)isPaused;
- (BOOL)isSpeaking;
- (BOOL)pauseSpeakingAtBoundary:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)speakUtterance:(id)arg1;
- (BOOL)stopSpeakingAtBoundary:(int)arg1;

@end
