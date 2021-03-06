//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUITableFooterDelegate-Protocol.h>
#import <RemoteUI/RUITableHeaderDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString, RUITableViewRow, UIView;
@protocol RUITableViewSectionDelegate, RemoteUITableFooter, RemoteUITableHeader;

@interface RUITableViewSection : RUIElement <RUITableHeaderDelegate, RUITableFooterDelegate>
{
    NSMutableArray *_rows;
    long long _disclosureLimit;
    NSNumber *_drawsTopSeparator;
    _Bool _configured;
    id <RUITableViewSectionDelegate> _delegate;
    UIView<RemoteUITableHeader> *_headerView;
    UIView<RemoteUITableFooter> *_footerView;
    double _headerHeight;
    double _footerHeight;
    RUITableViewRow *_showAllRow;
    NSString *_headerText;
    NSDictionary *_headerAttributes;
    NSString *_HTMLHeaderContent;
    NSString *_detailHeaderText;
    NSString *_subHeaderText;
    NSDictionary *_subHeaderAttributes;
    NSString *_footerText;
    NSString *_HTMLFooterContent;
    NSDictionary *_footerAttributes;
}

@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(copy, nonatomic) NSDictionary *footerAttributes; // @synthesize footerAttributes=_footerAttributes;
@property(copy, nonatomic) NSString *HTMLFooterContent; // @synthesize HTMLFooterContent=_HTMLFooterContent;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSDictionary *subHeaderAttributes; // @synthesize subHeaderAttributes=_subHeaderAttributes;
@property(copy, nonatomic) NSString *subHeaderText; // @synthesize subHeaderText=_subHeaderText;
@property(copy, nonatomic) NSString *detailHeaderText; // @synthesize detailHeaderText=_detailHeaderText;
@property(copy, nonatomic) NSString *HTMLHeaderContent; // @synthesize HTMLHeaderContent=_HTMLHeaderContent;
@property(copy, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) RUITableViewRow *showAllRow; // @synthesize showAllRow=_showAllRow;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView<RemoteUITableHeader> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <RUITableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sourceURL;
- (id)subElementsWithName:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (_Bool)hasCustomFooter;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customFooterClass;
- (_Bool)hasCustomHeader;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customHeaderClass;
- (id)colorFromAttributeString:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)tappedShowAllRowWithTable:(id)arg1;
@property(readonly, nonatomic) NSArray *rows;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (void)addRow:(id)arg1;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)hasValueForDrawsTopSeparator;
@property(nonatomic) _Bool drawTopSeparator;
- (id)init;

@end

