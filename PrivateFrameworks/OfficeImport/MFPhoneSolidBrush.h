//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPhoneSolidBrush : MFPhoneBrush
{
    OITSUColor *m_colour;
}

+ (id)solidBrushWithColour:(id)arg1;
- (void)fillPath:(id)arg1:(id)arg2;
- (void)dealloc;
- (id)initWithColour:(id)arg1;

@end

