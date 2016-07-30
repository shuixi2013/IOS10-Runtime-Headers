//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>
#import <LinkPresentation/LPTextStyleable-Protocol.h>

@class LPTextView;

__attribute__((visibility("hidden")))
@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable>
{
    LPTextView *_leftView;
    LPTextView *_rightView;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
- (struct CGSize)_layoutCaptionPairForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (double)descender;
- (double)ascender;
- (double)firstLineLeading;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4;
- (id)init;

@end

