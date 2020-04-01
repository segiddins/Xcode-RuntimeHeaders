//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IBABPeoplePickerView : NSView <IBDocumentArchiving>
{
    NSMutableArray *_propertyNamesAndTitles;
    BOOL _allowsGroupSelection;
    BOOL _allowsMultipleSelection;
    int _valueSelectionBehavior;
    NSString *_autosaveName;
}

+ (id)ibStandInRuntimeClassName;
@property(copy, nonatomic) NSArray *propertyNamesAndTitles; // @synthesize propertyNamesAndTitles=_propertyNamesAndTitles;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) BOOL allowsGroupSelection; // @synthesize allowsGroupSelection=_allowsGroupSelection;
@property(nonatomic) int valueSelectionBehavior; // @synthesize valueSelectionBehavior=_valueSelectionBehavior;
@property(retain, nonatomic) NSString *autosaveName; // @synthesize autosaveName=_autosaveName;
- (void).cxx_destruct;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (void)removePropertyWithName:(id)arg1;
- (BOOL)hasPropertyWithName:(id)arg1;
- (void)addPropertyWithName:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)ibRuntimeClassName;
- (Class)classForArchiver;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

