//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderTableComponentViewColumn.h>

@class NSString;

@interface IDEIntentBuilderTableComponentViewTextFieldColumn : IDEIntentBuilderTableComponentViewColumn
{
    NSString *_editableKeyPath;
    NSString *_enabledKeyPath;
}

@property(copy) NSString *enabledKeyPath; // @synthesize enabledKeyPath=_enabledKeyPath;
@property(copy) NSString *editableKeyPath; // @synthesize editableKeyPath=_editableKeyPath;
- (void).cxx_destruct;
- (id)makeTableCellViewWithOwner:(id)arg1 inTableView:(id)arg2;
- (id)type;

@end

