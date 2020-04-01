//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBCustomFormatter : NSFormatter <IBDocumentArchiving>
{
}

+ (id)classFallbacksForKeyedArchiver;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)ibRuntimeClassName;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

