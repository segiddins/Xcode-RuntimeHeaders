//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTMarkup/DVTMarkdownWalkingDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC9DVTMarkup23CommonMarkContentParser : NSObject <DVTMarkdownWalkingDelegate>
{
    MISSING_TYPE *style;
    MISSING_TYPE *containerLevel;
    MISSING_TYPE *contentBlocks;
    MISSING_TYPE *currentBlockStack;
    MISSING_TYPE *currentParser;
    MISSING_TYPE *paragraphAutoOpened;
    MISSING_TYPE *pendingMediaBlock;
}

- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)arg1 didFindRawHTML:(id)arg2 blockLevel:(BOOL)arg3;
- (void)parserDidFindHorizontalRule:(id)arg1;
- (void)parser:(id)arg1 didFindCodeBlock:(id)arg2 fenced:(BOOL)arg3 infoString:(id)arg4;
- (void)parser:(id)arg1 didFindInlineCode:(id)arg2;
- (void)parser:(id)arg1 didEndImageWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didStartImageWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didEndLinkWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parser:(id)arg1 didStartLinkWithURL:(id)arg2 title:(id)arg3 parameters:(id)arg4;
- (void)parserDidEndStrong:(id)arg1;
- (void)parserDidStartStrong:(id)arg1;
- (void)parserDidEndEmphasis:(id)arg1;
- (void)parserDidStartEmphasis:(id)arg1;
- (void)parserDidFindSoftLineBreak:(id)arg1;
- (void)parserDidFindLineBreak:(id)arg1;
- (void)parser:(id)arg1 didFindText:(id)arg2;
- (void)parserDidEndListItem:(id)arg1;
- (void)parserDidStartListItem:(id)arg1;
- (void)parser:(id)arg1 didEndOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parser:(id)arg1 didStartOrderedListWithStartingNumber:(long long)arg2 delimiter:(unsigned long long)arg3;
- (void)parserDidEndUnorderedList:(id)arg1;
- (void)parserDidStartUnorderedList:(id)arg1;
- (void)parserDidEndBlockQuote:(id)arg1;
- (void)parserDidStartBlockQuote:(id)arg1;
- (void)parserDidEndParagraph:(id)arg1;
- (void)parserDidStartParagraph:(id)arg1;
- (void)parser:(id)arg1 didEndHeaderWithLevel:(unsigned long long)arg2;
- (void)parser:(id)arg1 didStartHeaderWithLevel:(unsigned long long)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;

@end

