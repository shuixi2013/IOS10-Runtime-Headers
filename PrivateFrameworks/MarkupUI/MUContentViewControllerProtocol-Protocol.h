//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MarkupUI/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol UICoordinateSpace;

@protocol MUContentViewControllerProtocol <NSObject>
@property(nonatomic) struct UIEdgeInsets edgeInsets;
- (UIView *)contentSnapshot;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGRect)visibleContentRect;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (void)setup;

@optional
@property(nonatomic) _Bool centersIgnoringContentInsets;
@property(nonatomic) _Bool navigationModeHorizontal;
@property(readonly) unsigned long long pageCount;
@property(nonatomic) _Bool showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps;
@end

