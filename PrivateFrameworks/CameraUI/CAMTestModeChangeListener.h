//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMTestModeChangeListener : NSObject
{
    long long _desiredMode;
    long long _desiredDevicePosition;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
- (void).cxx_destruct;

@end
