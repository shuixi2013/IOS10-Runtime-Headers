//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport : NSObject
{
    id <HMFMessageTransportDelegate> _delegate;
}

@property __weak id <HMFMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

