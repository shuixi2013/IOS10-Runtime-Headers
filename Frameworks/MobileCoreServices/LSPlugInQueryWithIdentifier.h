//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileCoreServices/LSPlugInQuery.h>

@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery
{
    int _bindingMap;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_shouldCacheResolvedResults;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_identifier;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 inMap:(int)arg2;

@end

