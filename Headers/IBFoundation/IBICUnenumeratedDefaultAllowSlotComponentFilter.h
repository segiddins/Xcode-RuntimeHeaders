//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlotComponentFilter.h>

@class IBICSlotComponent;

@interface IBICUnenumeratedDefaultAllowSlotComponentFilter : IBICSlotComponentFilter
{
    IBICSlotComponent *_includedUnspecifiedValuePlaceholder;
}

- (void).cxx_destruct;
- (BOOL)matchesComponent:(id)arg1;
- (id)matchingComponents;
- (id)initWithSlotComponentClass:(Class)arg1 matchingInstances:(id)arg2;
- (id)initWithSlotComponentClass:(Class)arg1 includeUnspecifiedValuePlaceholder:(BOOL)arg2;

@end

