//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool debuggingEnabled; // @dynamic debuggingEnabled;
@property(nonatomic) _Bool fastMathEnabled; // @dynamic fastMathEnabled;
@property(nonatomic) _Bool glBufferBindPoints; // @dynamic glBufferBindPoints;
@property(nonatomic) unsigned long long languageVersion; // @dynamic languageVersion;
@property(copy, nonatomic) NSDictionary *preprocessorMacros; // @dynamic preprocessorMacros;

@end

