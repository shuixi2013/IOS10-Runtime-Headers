//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol _UIViewPresentation;

@protocol _UIViewPresentation <NSObject>
@property(retain, nonatomic) id <_UIViewPresentation> superview;
@property(retain, nonatomic) NSArray *subviews;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) __weak UIView *view;
- (void)removeFromSuperview;
- (void)addSubview:(id <_UIViewPresentation>)arg1;
@end

