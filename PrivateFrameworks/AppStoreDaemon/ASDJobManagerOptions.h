//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSXPCListenerEndpoint;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldFilterExternalOriginatedDownloads;
    _Bool _shouldReportDownloadProgress;
    NSString *_persistenceIdentifier;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldReportDownloadProgress; // @synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(nonatomic) _Bool shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

