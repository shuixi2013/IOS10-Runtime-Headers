//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSNamedFlow : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *regions;
@property(copy, nonatomic) NSArray *content;
@property(nonatomic) _Bool overset;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) int documentNodeId;
- (id)initWithDocumentNodeId:(int)arg1 name:(id)arg2 overset:(_Bool)arg3 content:(id)arg4 regions:(id)arg5;

@end

