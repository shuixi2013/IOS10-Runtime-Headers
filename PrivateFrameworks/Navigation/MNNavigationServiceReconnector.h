//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNRoutePlanningDetails;
@protocol MNNavigationServiceReconnectorDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceReconnector : NSObject
{
    id <MNNavigationServiceReconnectorDelegate> _delegate;
    MNRoutePlanningDetails *_routePlanningDetails;
}

@property(nonatomic) __weak id <MNNavigationServiceReconnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reconnect;
- (void)finishReconnecting;
- (_Bool)isReconnecting;
- (id)initWithRoutePlanningDetails:(id)arg1;

@end

