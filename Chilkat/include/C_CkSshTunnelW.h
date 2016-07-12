// This is a generated source file for Chilkat version 9.5.0.59
#ifndef _C_CkSshTunnelWH
#define _C_CkSshTunnelWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkSshTunnelW_setAbortCheck(HCkSshTunnelW cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkSshTunnelW_setPercentDone(HCkSshTunnelW cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkSshTunnelW_setProgressInfo(HCkSshTunnelW cHandle, void (*fnProgressInfo)(const wchar_t *name, const wchar_t *value));
CK_VISIBLE_PUBLIC void CkSshTunnelW_setTaskCompleted(HCkSshTunnelW cHandle, void (*fnTaskCompleted)(HCkTaskW hTask));

CK_VISIBLE_PUBLIC HCkSshTunnelW CkSshTunnelW_Create(void);
CK_VISIBLE_PUBLIC HCkSshTunnelW CkSshTunnelW_Create2(BOOL bCallbackOwned);
CK_VISIBLE_PUBLIC void CkSshTunnelW_Dispose(HCkSshTunnelW handle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getAbortCurrent(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putAbortCurrent(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getAcceptLog(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putAcceptLog(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_acceptLog(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getAcceptLogPath(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putAcceptLogPath(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_acceptLogPath(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getConnectTimeoutMs(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putConnectTimeoutMs(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getDebugLogFilePath(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putDebugLogFilePath(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_debugLogFilePath(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getDestHostname(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putDestHostname(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_destHostname(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getDestPort(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putDestPort(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getDynamicPortForwarding(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putDynamicPortForwarding(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHostKeyFingerprint(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_hostKeyFingerprint(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHttpProxyAuthMethod(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyAuthMethod(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_httpProxyAuthMethod(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHttpProxyDomain(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyDomain(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_httpProxyDomain(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHttpProxyHostname(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyHostname(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_httpProxyHostname(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHttpProxyPassword(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyPassword(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_httpProxyPassword(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getHttpProxyPort(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyPort(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getHttpProxyUsername(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putHttpProxyUsername(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_httpProxyUsername(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getIdleTimeoutMs(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putIdleTimeoutMs(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getInboundSocksPassword(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putInboundSocksPassword(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_inboundSocksPassword(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getInboundSocksUsername(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putInboundSocksUsername(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_inboundSocksUsername(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getIsAccepting(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getKeepAcceptLog(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putKeepAcceptLog(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getKeepTunnelLog(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putKeepTunnelLog(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getLastErrorHtml(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_lastErrorHtml(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getLastErrorText(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_lastErrorText(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getLastErrorXml(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_lastErrorXml(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getLastMethodSuccess(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putLastMethodSuccess(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getListenBindIpAddress(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putListenBindIpAddress(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_listenBindIpAddress(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getListenPort(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getOutboundBindIpAddress(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putOutboundBindIpAddress(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_outboundBindIpAddress(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getOutboundBindPort(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putOutboundBindPort(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getSoRcvBuf(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSoRcvBuf(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getSoSndBuf(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSoSndBuf(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getSocksHostname(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSocksHostname(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_socksHostname(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getSocksPassword(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSocksPassword(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_socksPassword(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getSocksPort(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSocksPort(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getSocksUsername(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSocksUsername(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_socksUsername(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC int CkSshTunnelW_getSocksVersion(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putSocksVersion(HCkSshTunnelW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getTcpNoDelay(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putTcpNoDelay(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getTunnelLog(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putTunnelLog(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_tunnelLog(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getTunnelLogPath(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putTunnelLogPath(HCkSshTunnelW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_tunnelLogPath(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_getVerboseLogging(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC void CkSshTunnelW_putVerboseLogging(HCkSshTunnelW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSshTunnelW_getVersion(HCkSshTunnelW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkSshTunnelW_version(HCkSshTunnelW cHandle);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_AuthenticatePk(HCkSshTunnelW cHandle, const wchar_t *username, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_AuthenticatePkAsync(HCkSshTunnelW cHandle, const wchar_t *username, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_AuthenticatePw(HCkSshTunnelW cHandle, const wchar_t *login, const wchar_t *password);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_AuthenticatePwAsync(HCkSshTunnelW cHandle, const wchar_t *login, const wchar_t *password);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_AuthenticatePwPk(HCkSshTunnelW cHandle, const wchar_t *username, const wchar_t *password, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_AuthenticatePwPkAsync(HCkSshTunnelW cHandle, const wchar_t *username, const wchar_t *password, HCkSshKeyW privateKey);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_BeginAccepting(HCkSshTunnelW cHandle, int listenPort);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_BeginAcceptingAsync(HCkSshTunnelW cHandle, int listenPort);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_CloseTunnel(HCkSshTunnelW cHandle, BOOL waitForThreads);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_Connect(HCkSshTunnelW cHandle, const wchar_t *hostname, int port);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_ConnectAsync(HCkSshTunnelW cHandle, const wchar_t *hostname, int port);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_ConnectThroughSsh(HCkSshTunnelW cHandle, HCkSshW ssh, const wchar_t *hostname, int port);
CK_VISIBLE_PUBLIC HCkTaskW CkSshTunnelW_ConnectThroughSshAsync(HCkSshTunnelW cHandle, HCkSshW ssh, const wchar_t *hostname, int port);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_DisconnectAllClients(HCkSshTunnelW cHandle, BOOL waitForThreads);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_SaveLastError(HCkSshTunnelW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_StopAccepting(HCkSshTunnelW cHandle, BOOL waitForThread);
CK_VISIBLE_PUBLIC BOOL CkSshTunnelW_UnlockComponent(HCkSshTunnelW cHandle, const wchar_t *unlockCode);
#endif
