//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, NSURLRequest, NSURLResponse;

@interface WKNavigationData : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationData> _data;
}

@property(readonly) struct Object *_apiObject;
@property(readonly) NSURLResponse *response;
@property(readonly) NSURL *destinationURL;
@property(readonly) NSURLRequest *originalRequest;
@property(readonly) NSString *title;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

