//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class NSArray, NSMutableArray;

@interface IBXMLDecoderFallbacksElement : IBXMLDecoderElement
{
    NSMutableArray *_nameElements;
}

+ (id)elementName;
- (void).cxx_destruct;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *nameElements;
- (BOOL)acceptNameElement:(id)arg1 error:(id *)arg2;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

