//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/_QLDownloadOperation.h>

@class NSFileCoordinator;

__attribute__((visibility("hidden")))
@interface _QLFileCoordinatorDownloadOperation : _QLDownloadOperation
{
    NSFileCoordinator *_fileCoordinator;
    id _progressSubscriber;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)cancel;
- (_Bool)canBeCanceled;
- (_Bool)performDownload;

@end

