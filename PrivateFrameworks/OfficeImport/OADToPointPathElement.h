//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADToPointPathElement : OADPathElement
{
    struct OADAdjustPoint mToPoint;
    _Bool mRelative;
}

- (void)setRelative:(_Bool)arg1;
- (_Bool)relative;
- (struct OADAdjustPoint)toPoint;
- (id)initWithToPoint:(struct OADAdjustPoint)arg1;

@end

