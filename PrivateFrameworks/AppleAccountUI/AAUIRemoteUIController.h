//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RemoteUIController.h>

@class NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController
{
    NSHTTPURLResponse *_redirectResponse;
}

@property(retain, nonatomic) NSHTTPURLResponse *redirectResponse; // @synthesize redirectResponse=_redirectResponse;
- (void).cxx_destruct;
- (id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
- (id)init;

@end

