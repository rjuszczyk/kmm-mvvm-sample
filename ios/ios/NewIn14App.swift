//
//  NewIn14App.swift
//  ios
//
//  Created by Radoslaw Juszczyk on 06/07/2021.
//  Copyright © 2021 orgName. All rights reserved.
//
import SwiftUI
import Foundation

@main
struct NewIn14App: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    var body: some Scene {
        WindowGroup {
            ContentView(appDelegate: appDelegate)
        }
    }
}
