//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (IBICReflection)
+ (BOOL)isInstance;
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (BOOL)ib_overridesClassMethod:(SEL)arg1;
+ (BOOL)ib_overridesInstanceMethod:(SEL)arg1;
- (BOOL)isInstance;
- (id)ibic_schemaDebugDescription;
- (id)ibic_attributeValueDescription;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (void)didFinishEncodingWithBinaryArchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;
- (void)didFinishDecodingWithBinaryUnarchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)ib_cloneProperties:(id)arg1 toObject:(id)arg2;
- (id)ib_cloneByArchiving;
- (id)ib_overlayPlist:(id)arg1;
- (id)ib_initialPlistOverlayInstance;
- (id)ib_deepCloneForPlistOverlay;
- (Class)ib_immutableClassForPlistOverlay;
@end

