//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate, OS_dispatch_queue;

@interface AirPlayRemoteSlideshow : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    id <AirPlayRemoteSlideshowDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Bool _started;
    double _startTime;
}

@property(nonatomic) id <AirPlayRemoteSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFeaturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureEventHandler;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

