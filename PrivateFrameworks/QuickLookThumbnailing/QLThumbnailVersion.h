//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface QLThumbnailVersion : NSObject <NSSecureCoding>
{
    NSDate *_modificationDate;
    unsigned long long _fileSize;
    NSString *_generatorID;
    NSString *_generatorVersion;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy) NSString *generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(copy) NSString *generatorID; // @synthesize generatorID=_generatorID;
- (id)description;
@property(readonly, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated;
- (_Bool)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(_Bool)arg2;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 generatorID:(id)arg3 generatorVersion:(id)arg4;
- (id)init;

@end

