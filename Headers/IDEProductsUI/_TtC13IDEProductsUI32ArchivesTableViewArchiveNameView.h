//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSArray, NSImageView, _TtC13IDEProductsUI20ArchiveNameTextField;
@protocol _TtP13IDEProductsUI26ArchiveNameEditingDelegate_;

@interface _TtC13IDEProductsUI32ArchivesTableViewArchiveNameView : NSTableCellView
{
    MISSING_TYPE *archiveImageView;
    MISSING_TYPE *archiveNameField;
    MISSING_TYPE *nameEditingDelegate;
    MISSING_TYPE *filterMatchStrings;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic, copy) NSArray *filterMatchStrings;
@property(nonatomic) __weak id <_TtP13IDEProductsUI26ArchiveNameEditingDelegate_> nameEditingDelegate; // @synthesize nameEditingDelegate;
@property(nonatomic) __weak _TtC13IDEProductsUI20ArchiveNameTextField *archiveNameField; // @synthesize archiveNameField;
@property(nonatomic) __weak NSImageView *archiveImageView; // @synthesize archiveImageView;

@end
