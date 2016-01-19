// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/ctocpp/life_span_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefLifeSpanHandlerCToCpp::OnBeforePopup(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, const CefString& target_url,
    const CefString& target_frame_name,
    WindowOpenDisposition target_disposition, bool user_gesture,
    const CefPopupFeatures& popupFeatures, CefWindowInfo& windowInfo,
    CefRefPtr<CefClient>& client, CefBrowserSettings& settings,
    bool* no_javascript_access) {
  cef_life_span_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_popup))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: no_javascript_access; type: bool_byaddr
  DCHECK(no_javascript_access);
  if (!no_javascript_access)
    return false;
  // Unverified params: target_url, target_frame_name

  // Translate param: client; type: refptr_same_byref
  cef_client_t* clientStruct = NULL;
  if (client.get())
    clientStruct = CefClientCToCpp::Unwrap(client);
  cef_client_t* clientOrig = clientStruct;
  // Translate param: no_javascript_access; type: bool_byaddr
  int no_javascript_accessInt = no_javascript_access?*no_javascript_access:0;

  // Execute
  int _retval = _struct->on_before_popup(_struct,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      target_url.GetStruct(),
      target_frame_name.GetStruct(),
      target_disposition,
      user_gesture,
      &popupFeatures,
      &windowInfo,
      &clientStruct,
      &settings,
      &no_javascript_accessInt);

  // Restore param:client; type: refptr_same_byref
  if (clientStruct) {
    if (clientStruct != clientOrig) {
      client = CefClientCToCpp::Wrap(clientStruct);
    }
  } else {
    client = NULL;
  }
  // Restore param:no_javascript_access; type: bool_byaddr
  if (no_javascript_access)
    *no_javascript_access = no_javascript_accessInt?true:false;

  // Return type: bool
  return _retval?true:false;
}

void CefLifeSpanHandlerCToCpp::OnAfterCreated(CefRefPtr<CefBrowser> browser) {
  cef_life_span_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_after_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_after_created(_struct,
      CefBrowserCppToC::Wrap(browser));
}

bool CefLifeSpanHandlerCToCpp::DoClose(CefRefPtr<CefBrowser> browser) {
  cef_life_span_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, do_close))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;

  // Execute
  int _retval = _struct->do_close(_struct,
      CefBrowserCppToC::Wrap(browser));

  // Return type: bool
  return _retval?true:false;
}

void CefLifeSpanHandlerCToCpp::OnBeforeClose(CefRefPtr<CefBrowser> browser) {
  cef_life_span_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_close))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_before_close(_struct,
      CefBrowserCppToC::Wrap(browser));
}


// CONSTRUCTOR - Do not edit by hand.

CefLifeSpanHandlerCToCpp::CefLifeSpanHandlerCToCpp() {
}

template<> cef_life_span_handler_t* CefCToCpp<CefLifeSpanHandlerCToCpp,
    CefLifeSpanHandler, cef_life_span_handler_t>::UnwrapDerived(
    CefWrapperType type, CefLifeSpanHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefLifeSpanHandlerCToCpp,
    CefLifeSpanHandler, cef_life_span_handler_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefLifeSpanHandlerCToCpp,
    CefLifeSpanHandler, cef_life_span_handler_t>::kWrapperType =
    WT_LIFE_SPAN_HANDLER;
