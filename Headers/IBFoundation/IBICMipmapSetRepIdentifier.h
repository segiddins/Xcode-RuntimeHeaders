//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRepIdentifier.h>

@class IBICMipmapLevel;

@interface IBICMipmapSetRepIdentifier : IBICSlottedAssetRepIdentifier
{
}

+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1;
+ (Class)slotClass;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
@property(readonly) IBICMipmapLevel *mipmapLevel;
- (id)slot;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end

