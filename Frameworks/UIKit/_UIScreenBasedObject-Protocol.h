//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary, UIScreen;

@protocol _UIScreenBasedObject <NSObject>
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(NSDictionary *)arg1;
- (id)_initWithScreen:(UIScreen *)arg1 options:(NSDictionary *)arg2;
@end

