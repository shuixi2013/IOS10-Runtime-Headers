//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@protocol CNUIUserActionCurator, CNUIUserActionRecorder, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

@protocol CNUIUserActionContext <NSObject>
@property(readonly, nonatomic) id <CNUIUserActionCurator> actionCurator;
@property(readonly, nonatomic) id <CNUIUserActionRecorder> actionRecorder;
@property(readonly, nonatomic) id <CNUIUserActionUserActivityOpener> userActivityOpener;
@property(readonly, nonatomic) id <CNUIUserActionURLOpener> urlOpener;
@end

