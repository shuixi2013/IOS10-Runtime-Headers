//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHEllipseRecognitionResult.h>

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult
{
    double _stemWidth;
    struct CGPoint _stemLocation;
}

@property(readonly) double stemWidth; // @synthesize stemWidth=_stemWidth;
@property(readonly) struct CGPoint stemLocation; // @synthesize stemLocation=_stemLocation;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5 stemLocation:(struct CGPoint)arg6 stemWidth:(double)arg7;

@end

