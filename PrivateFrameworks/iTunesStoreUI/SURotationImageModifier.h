//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SURotationImageModifier : SUImageModifier
{
    float _degrees;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) float degrees; // @synthesize degrees=_degrees;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;

@end

