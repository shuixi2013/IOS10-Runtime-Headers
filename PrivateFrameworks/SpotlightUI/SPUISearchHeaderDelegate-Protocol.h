//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class SPSearchQueryContext, UIResponder;

@protocol SPUISearchHeaderDelegate <NSObject>
- (UIResponder *)headerNextResponder;
- (void)cancelButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 allowZKW:(_Bool)arg2;
@end

