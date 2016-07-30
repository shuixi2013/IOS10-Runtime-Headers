//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject
{
    long long _backgroundStyle;
    NSString *_backgroundSelector;
}

+ (id)backgroundSelectorForBackgroundStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)shortBottomArrowRightEndCapView;
- (id)shortBottomArrowLeftEndCapView;
- (id)shortBottomArrowPinnedView;
- (id)shortBottomArrowView;
- (id)shortRightArrowView;
- (id)shortTopArrowRightEndCapView;
- (id)shortTopArrowLeftEndCapView;
- (id)shortTopArrowPinnedView;
- (id)shortTopArrowView;
- (id)bottomArrowRightEndCapView;
- (id)bottomArrowLeftEndCapView;
- (id)bottomArrowPinnedView;
- (id)bottomArrowView;
- (id)rightArrowBottomEndCapView;
- (id)rightArrowTopEndCapView;
- (id)rightArrowPinnedBottomView;
- (id)rightArrowPinnedTopView;
- (id)rightArrowView;
- (id)topArrowRightEndCapView;
- (id)topArrowLeftEndCapView;
- (id)topArrowPinnedView;
- (id)topArrowView;
- (double)shortArtRightArrowBase;
- (double)shortArtArrowTopGradientEnd;
- (double)shortArtNoArrowTopGradientEnd;
- (double)bottomEndCapHeight;
- (double)capCornerRadius;
- (double)noArrowTopGradientEnd;
- (double)arrowTopGradientEnd;
- (double)clampArrowBase;
- (double)sideArrowStart;
- (double)topArrowStart;
- (double)arrowBase;
- (double)arrowHeight;
- (id)viewWithContentsImage:(id)arg1 rect:(struct CGRect)arg2 center:(struct CGRect)arg3 antialiasingMask:(unsigned int)arg4 directionSelector:(id)arg5;
- (struct CGRect)contentsCenterForRect:(struct CGRect)arg1 inImageOfSize:(struct CGSize)arg2;
- (struct CGRect)contentRectForRect:(struct CGRect)arg1 inImageOfSize:(struct CGSize)arg2;
- (id)templateImageForDirection:(id)arg1 shortArtwork:(_Bool)arg2;
- (_Bool)modern;
- (id)initWithBackgroundStyle:(long long)arg1;

@end

