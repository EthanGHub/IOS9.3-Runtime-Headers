//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSString, NSURL;

@interface RUIFooterElement : RUIElement
{
    NSString *_text;
    NSURL *_linkURL;
}

@property(copy, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)configureView:(id)arg1;

@end
