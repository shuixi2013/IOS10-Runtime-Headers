//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPSolidBrush : MFPBrush
{
    OITSUColor *mColor;
}

- (void)fillPath:(id)arg1 evenOddRule:(_Bool)arg2;
- (void)setColor:(id)arg1;
- (id)color;
- (void)dealloc;
- (id)initWithColor:(id)arg1;

@end

