//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSProcess-Protocol.h>

@class BSMachPortTaskNameRight, FBSProcessHandle, NSString;

@protocol FBSProcessIdentity <FBSProcess>
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property(readonly, retain, nonatomic) FBSProcessHandle *handle;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *name;
@end

