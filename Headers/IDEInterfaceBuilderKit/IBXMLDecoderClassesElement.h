//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class NSArray, NSMutableArray;

@interface IBXMLDecoderClassesElement : IBXMLDecoderElement
{
    NSMutableArray *_classElements;
}

+ (id)elementName;
- (void).cxx_destruct;
@property(readonly) NSArray *classElements;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
- (BOOL)acceptClassElement:(id)arg1 error:(id *)arg2;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

