//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@protocol XRSchemaAnnotationTextValuesDelegate;

@interface XRSchemaAnnotationElementParser : XRXMLElementParser
{
    id <XRSchemaAnnotationTextValuesDelegate> _delegate;
}

+ (id)_elementNameToClassMap;
- (void).cxx_destruct;
@property(nonatomic) __weak id <XRSchemaAnnotationTextValuesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textParserCompletedParsing:(id)arg1 elementName:(id)arg2;

@end
