//
//  Update.h
//  ObjC-01
//
//  Created by Hariel Giacomuzzi on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Update : NSObject
{
    NSXMLParser *addressParser;
    NSMutableDictionary *XMLReadAttr;
}

-(NSMutableArray *)requestUpdate;
-(void)parseXMLFile:(NSString *)pathToFile;

@end


