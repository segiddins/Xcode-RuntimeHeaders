//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface NSImage (IBBinaryArchivingAdditions) <IBBinaryArchiving>
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;
- (BOOL)populateDictionaryWithPDFRepresentationIfFound:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)setIbURLsByAppearanceForUIImageInstantiation:(id)arg1;
- (id)ibURLsByAppearanceForUIImageInstantiation;
- (void)setIbURLForUIImageInstantiation:(id)arg1;
- (id)ibURLForUIImageInstantiation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

