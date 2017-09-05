
// JayaSoftKeygenDlg.h : 头文件
//

#pragma once
#include "afxcmn.h"
#include "atltime.h"


// CJayaSoftKeygenDlg 对话框
class CJayaSoftKeygenDlg : public CDialogEx
{
// 构造
public:
	CJayaSoftKeygenDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_JAYASOFTKEYGEN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	BOOL    m_bOnLine;
	CIPAddressCtrl m_tDevIp;
	CString m_strLicense;
	CTime m_tTimeOut;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();

	void CheckDlgItem();
	void UpdateAuthorization();

	CString m_szMacAddr;
	CString m_strUser;
	CString m_strPass;

	CString m_szAuth;
};
