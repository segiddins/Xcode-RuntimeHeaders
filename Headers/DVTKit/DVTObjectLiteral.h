//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTObjectLiteral : NSObject
{
    BOOL _showsEditorString;
    unsigned long long _type;
    id _representedObject;
}

+ (id)objectLiteralForObject:(id)arg1 error:(id *)arg2;
@property BOOL showsEditorString; // @synthesize showsEditorString=_showsEditorString;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)editorString;
- (id)initWithType:(unsigned long long)arg1 representedObject:(id)arg2;

@end

