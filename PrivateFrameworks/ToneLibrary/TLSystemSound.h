//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TLSystemSound : NSObject
{
    unsigned int _soundID;
    _Bool _shouldDisposeOfSoundID;
    NSURL *_soundFileURL;
}

@property(readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int soundID;
- (id)description;
- (void)dealloc;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2;

@end

