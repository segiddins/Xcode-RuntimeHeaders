//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDataModelClassUMLRepresentation, IDEDataModelDataTypeUMLRepresentation, NSString;

@interface IDEDataModelAttributeUMLRepresentation : NSObject
{
    NSString *_name;
    IDEDataModelDataTypeUMLRepresentation *_type;
    IDEDataModelClassUMLRepresentation *_ownerClass;
}

- (void).cxx_destruct;
@property(readonly) IDEDataModelClassUMLRepresentation *ownerClass; // @synthesize ownerClass=_ownerClass;
@property(readonly) IDEDataModelDataTypeUMLRepresentation *type; // @synthesize type=_type;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 ownerClass:(id)arg2;
- (id)_typeNameForName:(id)arg1 ownerClass:(id)arg2;

@end

