//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRefactoringModification.h>

@class IBMemberID, NSString;

@interface IBRefactoringModificationChangeConnectionLabel : IBRefactoringModification
{
    NSString *_modificationDescription;
    NSString *_categoryName;
    IBMemberID *_connectionID;
    NSString *_replacementLabel;
}

+ (id)plistTypeName;
- (void).cxx_destruct;
@property(readonly) NSString *replacementLabel; // @synthesize replacementLabel=_replacementLabel;
@property(readonly) IBMemberID *connectionID; // @synthesize connectionID=_connectionID;
- (id)modificationDescription;
- (id)categoryName;
- (id)modificationByChangingReplacementName:(id)arg1;
- (BOOL)applyToDocument:(id)arg1 error:(id *)arg2;
- (void)populatePropertyListRepresentation:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithConnectionID:(id)arg1 replacementLabel:(id)arg2 categoryName:(id)arg3 modificationDescription:(id)arg4;

@end

