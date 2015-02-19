//
//  News.m
//  ObjC-01
//
//  Created by bruno raupp kieling on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import "News.h"

@implementation News

-(void) shareNews : (News *) sharedNews
                  : (NSString *) socialNetworkName
{
    Share *sharingNews = [[Share alloc]init];
    [sharingNews setNews:sharedNews];
    [sharingNews setSocialNetwork];
}

- (NSMutableArray *) getNewsArray
{
    Feed *newsFeed = [[Feed alloc]init];
    return newsFeed.getArray;
}
- (News *) getNews
{
    return self;
}

@end