//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface BLTAttachmentHashCacheItem : NSObject
{
    NSData *_data;
    NSURL *_url;
}

+ (id)attachmentHashCacheItemWithData:(id)arg1;
+ (id)attachmentHashCacheItemWithURL:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)MD5:(unsigned char [16])arg1;
- (_Bool)isEqualToItem:(id)arg1;
- (id)initWithURL:(id)arg1 data:(id)arg2;

@end

