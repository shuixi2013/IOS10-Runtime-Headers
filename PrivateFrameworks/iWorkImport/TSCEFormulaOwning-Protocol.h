//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TSCECalculationEngine;

@protocol TSCEFormulaOwning <NSObject>
- (void)releaseForCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)retainForCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)invalidateForCalculationEngine:(TSCECalculationEngine *)arg1;
- (void)writeResultsForCalculationEngine:(TSCECalculationEngine *)arg1;
- (CDStruct_22e7ec3e)recalculateForCalculationEngine:(TSCECalculationEngine *)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(_Bool)arg3 hasCalculatedPrecedents:(_Bool)arg4;
@end

