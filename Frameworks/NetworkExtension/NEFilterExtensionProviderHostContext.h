//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderHostContext.h>

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NSString;
@protocol NEFilterExtensionProviderProtocol;

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol>
{
    id <NEFilterExtensionProviderProtocol> _vendorContext;
}

- (void).cxx_destruct;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConfiguration:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1 deviceIdentifier:(id)arg2;
@property(readonly) id <NEFilterExtensionProviderProtocol> vendorContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

