//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush
{
    UIImage *_maskImage;
    UIImage *_backgroundImage;
    UIImage *_overlayImage;
    struct UIEdgeInsets _maskInsets;
}

@property(nonatomic) struct UIEdgeInsets maskInsets; // @synthesize maskInsets=_maskInsets;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

