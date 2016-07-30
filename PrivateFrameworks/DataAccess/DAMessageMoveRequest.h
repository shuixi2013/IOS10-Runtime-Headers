//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageMoveRequest : NSObject
{
    NSString *_message;
    NSString *_fromFolder;
    NSString *_toFolder;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *toFolder; // @synthesize toFolder=_toFolder;
@property(copy, nonatomic) NSString *fromFolder; // @synthesize fromFolder=_fromFolder;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;

@end

