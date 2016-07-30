//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject
{
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    _Bool _legacyDontHighlight;
    _Bool _legacySuppressOptionsBackground;
    _Bool _isTiled;
    unsigned long long _leftCapWidth;
    unsigned long long _rightCapWidth;
}

@property(retain, nonatomic) UIImage *optionsBackgroundImage; // @synthesize optionsBackgroundImage=_optionsBackgroundImage;
- (void).cxx_destruct;
- (void)setIsTiled:(_Bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)setDetail:(CDStruct_41b0f204 *)arg1;
- (_Bool)legacySuppressOptionsBackground;
- (void)takeTextAttributesFrom:(CDStruct_0ba2c6ed)arg1 forState:(unsigned long long)arg2;
- (id)init;
- (id)textAttributesForState:(unsigned long long)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(_Bool)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(_Bool)arg3 withFallback:(_Bool)arg4;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(_Bool)arg4;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2 withFallback:(_Bool)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(_Bool)arg2 noFallback:(_Bool)arg3;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(_Bool)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (_Bool)wantsTrackingSuppressed;

@end
