//
//  News.h
//  ObjC-01
//
//  Created by bruno raupp kieling on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Feed.h"

@interface News : NSObject
{
    
}

@property NSInteger idNews;
@property NSDate* dateNews;
@property NSString* title;
@property NSString* shortDescription;
@property NSString* description;
@property NSMutableArray* arryNews;


- (void) shareNews : (News *) sharedNews
                   : (NSString *) socialNetworkName;
- (NSMutableArray *) getNewsArray;
- (News *) getNews;
- (void) shareNews : (News *) sharedNews;

@property NSMutableArray* arrayNews;
@property short tipoNoticia;

- (void) shareNews : (News *) sharedNews
                   : (NSString *) socialNetworkName;
- (NSMutableArray *) getNewsArray;
- (News *) getNews;

@end



