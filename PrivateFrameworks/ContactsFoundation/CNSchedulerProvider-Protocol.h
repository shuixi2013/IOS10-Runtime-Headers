//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString;
@protocol CNScheduler;

@protocol CNSchedulerProvider <NSObject>
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler;
- (id <CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@end

