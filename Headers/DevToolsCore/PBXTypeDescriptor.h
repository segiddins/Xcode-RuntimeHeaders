//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXIndexEntry.h>

@interface PBXTypeDescriptor : PBXIndexEntry
{
}

+ (id)typeDescriptorForLocation:(union _pbxsymbollocation)arg1 projectIndex:(id)arg2;
- (id)description;
- (id)declarationForToken:(char *)arg1;
- (BOOL)isReferenceToken:(char *)arg1;
- (const char *)stringForToken:(char *)arg1;
- (char *)nextToken:(char *)arg1;
- (char *)firstToken;
- (struct _pbxtypedesc *)typeRecord;

@end
