//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _TtP23DNTDocumentationSupport26AvailabilityIndexQueryable_
- (NSArray *)orderedVersionsFor:(NSString *)arg1;
- (NSArray *)platformsFor:(int)arg1;
- (BOOL)introducedIn:(unsigned int)arg1 versionID:(unsigned int)arg2 availabilityID:(unsigned int)arg3;
- (BOOL)availableIn:(unsigned int)arg1 versionID:(unsigned int)arg2 availabilityID:(unsigned int)arg3;
- (BOOL)availableIn:(unsigned int)arg1 platformMask:(unsigned int)arg2;
- (unsigned int)platformIDFor:(NSString *)arg1;
@end

