//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSPContainerPersisterDelegate;

@interface MSPContainerPersister : NSObject
{
    id <MSPContainerPersisterDelegate> _delegate;
    long long _duplicatesPolicy;
}

+ (void)initialize;
@property(readonly, nonatomic) long long duplicatesPolicy; // @synthesize duplicatesPolicy=_duplicatesPolicy;
@property(nonatomic) __weak id <MSPContainerPersisterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commitEditedContents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchContentsWithCompletion:(CDUnknownBlockType)arg1;

@end

