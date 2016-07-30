//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CryptoTokenKit/TKTokenDriverProtocol-Protocol.h>

@class NSString, TKTokenDriver;

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol>
{
    TKTokenDriver *_driver;
    NSString *_tokenID;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(retain) TKTokenDriver *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

