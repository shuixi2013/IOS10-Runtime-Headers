//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicUpNextCompositeDataSource, NSArray, UIViewController;

@protocol MusicUpNextCompositeDataSourceDelegate <NSObject>
- (UIViewController *)presentingViewController;
- (void)compositeDataSource:(MusicUpNextCompositeDataSource *)arg1 didUpdate:(NSArray *)arg2;
@end

