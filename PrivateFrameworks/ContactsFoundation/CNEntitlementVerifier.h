//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNEntitlementVerifier : NSObject
{
}

+ (_Bool)secTask:(struct __SecTask *)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)auditToken:(CDStruct_6ad76789)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;

@end

