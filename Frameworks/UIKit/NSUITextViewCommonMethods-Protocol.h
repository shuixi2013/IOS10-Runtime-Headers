//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextContainerView-Protocol.h>
#import <UIKit/NSTextLayoutOrientationProvider-Protocol.h>

@class NSTextContainer;

@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider, NSTextContainerView>
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (_Bool)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (struct CGRect)visibleRect;

@optional
@property(nonatomic) struct _NSRange markedRange;
@property(nonatomic) __weak NSTextContainer *textContainer;
@end

