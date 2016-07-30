//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPPadding, LPPointUnit, LPTextRowStyle;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackViewStyle : NSObject
{
    LPPointUnit *_firstLineLeading;
    LPPointUnit *_lastLineDescent;
    LPTextRowStyle *_aboveTopCaption;
    LPTextRowStyle *_topCaption;
    LPTextRowStyle *_bottomCaption;
    LPTextRowStyle *_belowBottomCaption;
    LPPadding *_captionTextPadding;
    LPPadding *_captionTextHTMLPadding;
}

@property(readonly, retain, nonatomic) LPPadding *captionTextHTMLPadding; // @synthesize captionTextHTMLPadding=_captionTextHTMLPadding;
@property(readonly, retain, nonatomic) LPPadding *captionTextPadding; // @synthesize captionTextPadding=_captionTextPadding;
@property(readonly, nonatomic) LPTextRowStyle *belowBottomCaption; // @synthesize belowBottomCaption=_belowBottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *topCaption; // @synthesize topCaption=_topCaption;
@property(readonly, nonatomic) LPTextRowStyle *aboveTopCaption; // @synthesize aboveTopCaption=_aboveTopCaption;
@property(retain, nonatomic) LPPointUnit *lastLineDescent; // @synthesize lastLineDescent=_lastLineDescent;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
- (void).cxx_destruct;
- (id)init;

@end

