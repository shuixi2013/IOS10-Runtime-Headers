//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>
{
    long long _action;
    NSString *_interfaceName;
    long long _type;
}

+ (id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2;
+ (id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2;
@property long long type; // @synthesize type=_type;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)addTLVsToMessage:(id)arg1;
- (unsigned char)typeValue;
- (id)typeString;
- (unsigned char)actionValue;
- (id)actionString;
- (_Bool)validate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initInternal;
- (id)init;

@end

