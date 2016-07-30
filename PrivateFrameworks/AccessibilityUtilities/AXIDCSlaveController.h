//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUtilities/AXIDCRemoteController.h>

#import <AccessibilityUtilities/NSNetServiceDelegate-Protocol.h>

@class AXDispatchTimer, NSString;

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate>
{
    AXDispatchTimer *_resolveTimer;
    struct __CFSocket *_ipv4socket;
    struct __CFSocket *_ipv6socket;
    _Bool _isVisible;
    double _searchTimeout;
    CDUnknownBlockType _searchCompletion;
    NSString *_serviceType;
}

@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(nonatomic) double searchTimeout; // @synthesize searchTimeout=_searchTimeout;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (_Bool)isSlave;
- (void)resetConnection;
- (void)closeConnectionWithError:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)acceptConnection:(int)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldAcceptConnection;
- (_Bool)setVisible:(_Bool)arg1;
- (_Bool)isVisible;
- (_Bool)initialize;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

