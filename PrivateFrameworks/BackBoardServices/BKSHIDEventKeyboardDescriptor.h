//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventKeyboardDescriptor : BKSHIDEventDescriptor
{
    unsigned int _page;
    unsigned int _usage;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
@property(readonly) unsigned int usage; // @synthesize usage=_usage;
@property(readonly) unsigned int page; // @synthesize page=_page;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)describes:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;

@end

