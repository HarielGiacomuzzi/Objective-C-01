//
//  Update.m
//  ObjC-01
//
//  Created by Hariel Giacomuzzi on 2/19/15.
//  Copyright (c) 2015 Hariel Giacomuzzi. All rights reserved.
//

#import "Update.h"

@implementation Update

-(NSMutableArray *)requestUpdate
{
    if(!XMLReadAttr){
        XMLReadAttr = [[NSMutableDictionary alloc] init];
    }
    
    [XMLReadAttr setValue:@"item" forKey:@"item"];
    [XMLReadAttr setValue:[[NSMutableString alloc] init] forKey:@"title"];
    [XMLReadAttr setValue:[[NSMutableString alloc] init] forKey:@"description"];
    
    
    NSMutableArray *news = [[NSMutableArray alloc] init];
    [news addObject:@"Noticia 1"];
    
    return news;
}


-(void)parseXMLFile:(NSString *)pathToFile {
    BOOL success;
    NSURL *xmlURL = [NSURL fileURLWithPath:pathToFile];
    addressParser = [[NSXMLParser alloc] initWithContentsOfURL:xmlURL];
    [addressParser setDelegate:self];
    [addressParser setShouldResolveExternalEntities:YES];
    success = [addressParser parse]; // return value not used
    // if not successful, delegate is informed of error
}


-(void)parser:(NSXMLParser *)parser didStartElement:(NSString *)elementName namespaceURI:(NSString *)namespaceURI qualifiedName:(NSString *)qName attributes:(NSDictionary *)attributeDict {
    
    if([XMLReadAttr objectForKey:elementName]){
        
        
    }
    
    
    if ( [elementName isEqualToString:@"addresses"]) {
        // addresses is an NSMutableArray instance variable
        if (!addresses)
            addresses = [[NSMutableArray alloc] init];
        return;
    }
    
    if ( [elementName isEqualToString:@"person"] ) {
        // currentPerson is an ABPerson instance variable
        currentPerson = [[ABPerson alloc] init];
        return;
    }
    
    if ( [elementName isEqualToString:@"lastName"] ) {
        [self setCurrentProperty:kABLastNameProperty];
        return;
    }
    // .... continued for remaining elements ....
}

@end