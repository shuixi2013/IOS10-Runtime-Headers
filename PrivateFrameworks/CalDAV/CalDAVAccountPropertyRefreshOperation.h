//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountPropertyRefreshDelegate;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation
{
    _Bool _fetchPrincipalSearchProperties;
}

@property(nonatomic) _Bool fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)refreshProperties;

// Remaining properties
@property(nonatomic) id <CalDAVAccountPropertyRefreshDelegate> delegate; // @dynamic delegate;

@end

