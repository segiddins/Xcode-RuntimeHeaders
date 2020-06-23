//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUIEditableStringArea.h>

#import <IBCocoaTouchToolFoundation/IBEditableStringArea-Protocol.h>

@class NSString;

@interface IBUINamedEditableStringArea : IBUIEditableStringArea <IBEditableStringArea>
{
    NSString *_editableStringKeyPath;
}

@property(retain, nonatomic) NSString *editableStringKeyPath; // @synthesize editableStringKeyPath=_editableStringKeyPath;
- (void).cxx_destruct;
- (id)fieldEditorConfiguration;
- (void)encodeWithBinaryArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect sceneRect;
@property(readonly) Class superclass;

@end

