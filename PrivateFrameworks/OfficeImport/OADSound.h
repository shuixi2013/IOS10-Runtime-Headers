//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADSound : OCDDelayedMedia
{
    NSData *mSoundData;
    NSString *mName;
    int mSizeInBytes;
}

- (id)description;
- (_Bool)isLoaded;
- (void)setSizeInBytes:(int)arg1;
- (int)sizeInBytes;
- (void)setName:(id)arg1;
- (id)name;
- (void)setSoundData:(id)arg1;
- (id)soundData;
- (void)dealloc;

@end

