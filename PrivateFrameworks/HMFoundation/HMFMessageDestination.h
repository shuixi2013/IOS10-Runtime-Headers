//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface HMFMessageDestination : NSObject
{
    NSUUID *_target;
}

+ (id)shortDescription;
+ (id)allMessageDestinations;
@property(readonly, copy, nonatomic) NSUUID *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

