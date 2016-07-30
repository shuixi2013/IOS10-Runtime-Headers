//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADAdjustedColor : OADColor
{
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    _Bool mInvert;
    _Bool mInvert128;
    _Bool mGray;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)gray;
- (_Bool)invert128;
- (_Bool)invert;
- (unsigned char)adjustmentParam;
- (int)adjustmentType;
- (id)baseColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(_Bool)arg4 invert128:(_Bool)arg5 gray:(_Bool)arg6;

@end

