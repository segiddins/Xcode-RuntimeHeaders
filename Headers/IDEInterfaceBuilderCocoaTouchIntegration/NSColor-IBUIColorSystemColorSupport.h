//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSColor.h>

@interface NSColor (IBUIColorSystemColorSupport)
+ (id)ib_placeholderSystemColorWithName:(id)arg1 catalogName:(id)arg2 color:(id)arg3;
+ (id)ibSwizzledInstantiateWithDocumentUnarchiver:(id)arg1;
@property(readonly, nonatomic) BOOL ibHasDefinedFallbackColor;
@property(readonly, nonatomic) NSColor *ibFallbackColor;
- (const char *)ibSwizzledCStringClassNameForBinaryArchiver:(id)arg1;
- (id)ibSwizzledArchivedSystemKeyPathForBinaryArchiver:(id)arg1 fallbackColor:(id *)arg2;
- (void)ibSwizzledArchiveWithDocumentArchiver:(id)arg1;
- (id)valueByTransitioningFromTargetRuntime:(id)arg1 toTargetRuntime:(id)arg2 document:(id)arg3;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (void)ibNSCatalogColorSwizzledEncodeWithCoder:(id)arg1;
@end

