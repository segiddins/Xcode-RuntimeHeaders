//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractObjectElement.h>

@class NSString;

@interface IBXMLDecoderReferenceElement : IBXMLDecoderAbstractObjectElement
{
    NSString *_referencedIdentifier;
    IBXMLDecoderAbstractObjectElement *_resolvedAbstractObjectElement;
}

+ (id)elementName;
- (void).cxx_destruct;
@property IBXMLDecoderAbstractObjectElement *resolvedAbstractObjectElement; // @synthesize resolvedAbstractObjectElement=_resolvedAbstractObjectElement;
- (id)referencedIdentifier;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;

@end

