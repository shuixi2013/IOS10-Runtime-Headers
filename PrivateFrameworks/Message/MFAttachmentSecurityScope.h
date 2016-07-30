//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject
{
    NSFileCoordinator *_fileCoordinator;
    NSURL *_securityScopedURL;
    NSData *_securityScopeToken;
    NSURL *_secureReadURL;
    _Bool _securedRead;
    NSURL *_secureWriteURL;
    _Bool _securedWrite;
}

+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;
+ (id)securityScopedURL:(id)arg1;
- (_Bool)isBundle;
- (_Bool)isReadable;
- (id)data;
- (void)_attachSecurityScope;
- (id)securityScopeToken;
- (void)stopAccess;
- (void)_removeTemporaryReadURL;
- (id)_temporaryReadURL:(id)arg1 error:(id *)arg2;
- (id)startReadAccess;
- (id)startWriteAccess;
- (void)dealloc;
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;

@end

