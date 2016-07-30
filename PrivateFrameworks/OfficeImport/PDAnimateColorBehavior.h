//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface PDAnimateColorBehavior : PDAnimateBehavior
{
    _Bool mHasBy;
    double mBy[3];
    _Bool mHasFrom;
    OADColor *mFrom;
    _Bool mHasTo;
    OADColor *mTo;
    _Bool mHasColorSpace;
    int mColorSpace;
    _Bool mHasColorDirection;
    int mDirection;
}

- (void)setDirection:(int)arg1;
- (int)direction;
- (_Bool)hasColorDirection;
- (void)setColorSpace:(int)arg1;
- (int)colorSpace;
- (_Bool)hasColorSpace;
- (void)setTo:(id)arg1;
- (id)to;
- (_Bool)hasTo;
- (void)setFrom:(id)arg1;
- (id)from;
- (_Bool)hasFrom;
- (void)setBy:(double [3])arg1;
- (double (*)[3])by;
- (_Bool)hasBy;

@end

