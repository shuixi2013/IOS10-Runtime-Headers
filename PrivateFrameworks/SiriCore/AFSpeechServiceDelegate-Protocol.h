//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSArray, NSError;

@protocol AFSpeechServiceDelegate <NSObject>
- (oneway void)speechServiceDidFinishRecognitionWithError:(NSError *)arg1;
- (oneway void)speechServiceDidRecognizePhrases:(NSArray *)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;
@end

